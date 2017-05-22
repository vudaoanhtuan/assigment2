#include "reader.h"


Reader::Reader()
{
    numBookBorrowed = 0;
    numRequest = 0;
}

Reader::Reader(long long aid){
    accountId = aid;
    numBookBorrowed = 0;
    numRequest = 0;
}

Reader::Reader(const Reader &Reader){
    accountId = Reader.accountId;
    numRequest = Reader.numRequest;
    numBookBorrowed = Reader.numBookBorrowed;
    for (int i=0;i<numRequest;i++)
        bookRequest[i]=Reader.bookRequest[i];
    for (int i=0;i<numBookBorrowed;i++)
        bookBorrowed[i]=Reader.bookBorrowed[i];
}

const Reader Reader::operator =(const Reader &Reader){
    accountId = Reader.accountId;
    numRequest = Reader.numRequest;
    numBookBorrowed = Reader.numBookBorrowed;
    for (int i=0;i<numRequest;i++)
        bookRequest[i]=Reader.bookRequest[i];
    for (int i=0;i<numBookBorrowed;i++)
        bookBorrowed[i]=Reader.bookBorrowed[i];
    return Reader;
}


void Reader::setAccountId(long long id){
    accountId = id;
}

void Reader::setNumBookBorrowed(int num){
    numBookBorrowed = num;
}

int Reader::addBookBorrowed(long long bookId){
    if (numBookBorrowed >= MAX_BOOK)
        return 1;
    numBookBorrowed++;
    bookBorrowed[numBookBorrowed-1] = bookId;
    return 0;
}

int Reader::addBookRequest(long long bookId){
    int maxRequest = MAX_BOOK - numBookBorrowed;
    if (maxRequest == 0)
        return 1;
    numRequest++;
    bookRequest[numRequest - 1] = bookId;
    return 0;
}

int Reader::cancelRequest(long long bookId){
   int pos = -1;
   for(int i=0;i<numRequest; i++)
       if (bookRequest[i] == bookId){
           pos = i;
           break;
       }
   if (pos == -1)
       return 1;   //khong tim thay sach;
   for (int i=pos;i<numRequest-1;i++){
       bookRequest[i] = bookRequest[i+1];
   }
   numRequest--;
   return 0;
}

int Reader::returnBook(long long bookId){
    int pos = -1;
    for(int i=0;i<numBookBorrowed; i++)
        if (bookBorrowed[i] == bookId){
            pos = i;
            break;
        }
    if (pos == -1)
        return 1;   //khong tim thay sach;
    for (int i=pos;i<numBookBorrowed-1;i++){
        bookBorrowed[i] = bookBorrowed[i+1];
    }
    numRequest--;
    return 0;
}
