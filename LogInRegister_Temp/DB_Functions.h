#ifndef DBDeffs
#define DBDeffs

#include "Includes.h"


void initialize_DB(SQLiteConnection^ conn);
dbP1^ SignIn_DB(String^ username, String^ password, SQLiteConnection^ conn);
int getNextUniqueID(SQLiteConnection^ conn);
void registerPerson(SQLiteConnection^ conn, dbP1^ Person);
bool UsernameExists(SQLiteConnection^ conn, String^ username);

#endif
