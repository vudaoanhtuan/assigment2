#include "test_read_write.h"

void testWriteData(){
    vector<USER*> user;
    USER *u = new USER;
    u->setName((char*)"Vu Dao Anh Tuan");
    u->setCode(1235434);
    u->setDob({23,03,1998});
    u->setEmail((char*)"vudaoanhtuan@gmail.com");
    u->setId(1000);
    u->setJob((char*)"student");
    user.push_back(u);
    writeUser(user, 1);


    vector<ACCOUNT*> acc;
    ACCOUNT *a = new ACCOUNT;
    a->setId(1100);
    a->setName((char*)"tuan");
    a->setPass((char*)"12345");
    a->setRole(READER);
    a->setStatus(1);
    a->setUserId(1000);
    acc.push_back(a);
    writeAccount(acc,1);

    vector<BOOK*> book;
    BOOK *b = new BOOK;
    b->setAuthor((char*)"Conan");
    b->setCatagory((char*)"Tham tu");
    b->setId(12314);
    b->setPublisher((char*)"IBM");
    b->setTitle((char*)"SherLock Home");
    b->setYear(1990);
    book.push_back(b);
    BOOK *b2 = new BOOK;
    b2->setAuthor((char*)"Conan");
    b2->setCatagory((char*)"Tham tu");
    b2->setId(12314);
    b2->setPublisher((char*)"IBM");
    b2->setTitle((char*)"SherLock Home 2");
    b2->setYear(2005);
    book.push_back(b2);
    writeBook(book,2);
}

void testReadData(){
    vector<USER*> user;
    readUser(user,1);
}
