#ifndef DATATYPE_H
#define DATATYPE_H

#define MAX_BOOK 3

struct DATE{
    short int date, month, year;
};

enum ROLE {READER, LIBRARIAN, MANAGER};

struct NUMDATA{
    int numUser;
    int numAccount;
    int numBook;
    int numReader;
};


#endif // DATATYPE_H
