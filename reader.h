#ifndef Reader_H
#define Reader_H

#include "datatype.h"

class Reader
{
private:
    long long accountId;
    int numBookBorrowed;
    int numRequest;
    long long bookBorrowed[MAX_BOOK];
    long long bookRequest[MAX_BOOK];

public:
    Reader();
    Reader(long long aid);
    Reader(const Reader &);
    const Reader operator=(const Reader &);

    void setAccountId(long long id);
    void setNumBookBorrowed(int num);
    int addBookBorrowed(long long bookId);
    int addBookRequest(long long bookId);
    int returnBook(long long bookId);
    int cancelRequest(long long bookId);
};

#endif // ROLEReader_H
