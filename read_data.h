#ifndef READ_DATA
#define READ_DATA

#include <stdio.h>
#include <vector>
#include "user.h"
#include "account.h"
#include "book.h"
#include "reader.h"

using namespace std;

void readUser(vector<USER*> &, int);
void readAccount(vector<ACCOUNT*> &, int);
void readBook(vector<BOOK*> &, int);
void readNum(NUMDATA &numData);
void readReader(vector<Reader*> &, int);

#endif // READ_DATA

