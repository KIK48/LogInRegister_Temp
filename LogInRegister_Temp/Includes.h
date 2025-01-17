#ifndef INCLUDERS
#define INCLUDERS

#include <iostream>
#include <string>

using namespace System;
using namespace System::IO;
using namespace System::Data::SQLite;

ref struct dbP1 {

	int^ ID = NULL;
	String^ role = nullptr;
	String^ name = nullptr;
	String^ lName = nullptr;
	String^ userN = nullptr;
	String^ pw = nullptr;
	int phoneNum = NULL;
	String^ bDay = nullptr;

};

enum data_DB {ID, ROLE, NAME, LNAME, USERNAME, PW, PHONENUM, BDAY};
enum decision { Continue, Exit };
enum decision2 {Login, Home, Register};

ref struct ds {
	decision d1 = Continue;
	decision2 d2 = Login;
};

ref class MyStaticClass
{
public:
	static String^ DB_String = "My_DB.db";
	static SQLiteConnection^ connect = gcnew SQLiteConnection("Data Source=" + MyStaticClass::DB_String + ";");
	static ds d;
};



#include "DB_Functions.h"
#include "DBDefs.cpp"

#include "SignInForm.h"
#include "RegisterForm.h"


using namespace System::Windows::Forms;

using namespace std;

#define Global_Variable static;
#define Internal static;





#endif

//MessageBox::Show("Table created (if it didn't exist)."); To create a little message