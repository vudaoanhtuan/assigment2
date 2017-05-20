#ifndef READ_DATA
#define READ_DATA

#include <stdio.h>
#include <vector>
#include "user.h"
#include "account.h"
#include "book.h"
using namespace std;

void readUser(vector<USER*> &, int);
void readAccount(vector<ACCOUNT*> &, int);
void readBook(vector<BOOK*> &, int);


#endif // READ_DATA

