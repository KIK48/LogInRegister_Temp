#ifndef DBF
#define DBF

#include "Includes.h"

void initialize_DB(SQLiteConnection^ conn) {

    

    if (File::Exists(MyStaticClass::DB_String)) {
        MessageBox::Show("DB and Table exists");
        return;
    }
    else {
        MessageBox::Show("Creating DB and Table");
        conn->Open();
        

        SQLiteCommand^ cmd = gcnew SQLiteCommand("CREATE TABLE IF NOT EXISTS users (id INTEGER PRIMARY KEY, role TEXT, name TEXT, lName TEXT,username TEXT, password TEXT, phoneNum Text, bDay DATE);", conn);

        cmd->ExecuteNonQuery();
        conn->Close();
        return;
    }




}

dbP1^ SignIn_DB(String^ username, String^ password, SQLiteConnection^ conn) {

    dbP1^ info = gcnew dbP1();
    info->ID = NULL; // Default value for invalid login

    try
    {
        
        conn->Open();

        String^ query = "SELECT id, role, name,lName FROM users WHERE username = @username AND password = @password";
        SQLiteCommand^ cmd = gcnew SQLiteCommand(query, conn);

        // Bind parameters to prevent SQL injection
        cmd->Parameters->AddWithValue("@username", username);
        cmd->Parameters->AddWithValue("@password", password);

        // Execute the query and get the result
        SQLiteDataReader^ reader = cmd->ExecuteReader();

        if (reader->Read())
        {
            info->ID = reader->GetInt32(ID); // Get the 'id' from the result
            info->role = reader->GetString(ROLE);
            info->name = reader->GetString(NAME);
            info->lName = reader->GetString(LNAME);
            
        }
        
        reader->Close();
        conn->Close();
    }
    catch (Exception^ ex)
    {
        MessageBox::Show("Error: " + ex->Message);
        
    }

    return info;


}

int getNextUniqueID(SQLiteConnection^ conn) {

    // Query to get the highest existing ID in the database
    conn->Open();

    String^ query = "SELECT MAX(id) FROM users";
    SQLiteCommand^ cmd = gcnew SQLiteCommand(query, conn);
    SQLiteDataReader^ reader = cmd->ExecuteReader();

    int maxId = 0;  // Default ID if no rows exist

    if (reader->Read())
    {
        if (!reader->IsDBNull(ID))
        {
            maxId = reader->GetInt32(ID);  // Get the max ID
        }
    }
    reader->Close();
    conn->Close();

    return maxId + 1;  // Increment for the next unique ID

}

bool UsernameExists(SQLiteConnection^ conn, String^ username)
{
    conn->Open();
    String^ query = "SELECT COUNT(*) FROM users WHERE username = @username";
    SQLiteCommand^ cmd = gcnew SQLiteCommand(query, conn);
    cmd->Parameters->AddWithValue("@username", username);
    

    int count = Convert::ToInt32(cmd->ExecuteScalar());
    conn->Close();

    return count > 0;  // Return true if count is greater than 0, meaning username exists
}


void registerPerson(SQLiteConnection^ conn, dbP1^ Person) {
    try {
        conn->Open();

        String^ query = "INSERT INTO users (id, role, name, lName, username, password, phoneNum, bDay) "
            "VALUES (@id, \'No Role Yet\', @n, @ln, @un, @pw, NULL, NULL)";
        SQLiteCommand^ cmd = gcnew SQLiteCommand(query, conn);

        cmd->Parameters->AddWithValue("@id", Person->ID);
        cmd->Parameters->AddWithValue("@n", Person->name);
        cmd->Parameters->AddWithValue("@ln", Person->lName);
        cmd->Parameters->AddWithValue("@un", Person->userN);
        cmd->Parameters->AddWithValue("@pw", Person->pw);

        cmd->ExecuteNonQuery();

        conn->Close();
    }
    catch (Exception^ ex)
    {
        MessageBox::Show("Error: " + ex->Message);
        conn->Close();

    }

}


#endif