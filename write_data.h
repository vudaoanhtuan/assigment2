#ifndef WRITE_DATA
#define WRITE_DATA

#include <stdio.h>
#include <vector>
#include "user.h"
#include "account.h"
#include "book.h"
#include "reader.h"

using namespace std;

void writeUser(vector<USER*> &, int);
void writeAccount(vector<ACCOUNT*> &, int);
void writeBook(vector<BOOK*> &, int);
void writeNum(NUMDATA &numData);
void writeReader(vector<Reader*> &, int);

#endif // WRITE_DATA

