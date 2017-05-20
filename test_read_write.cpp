#include "test_read_write.h"

void testWriteData(){
    vector<USER*> user;
    USER *u1 = new USER, *u2 = new USER, *u3 = new USER;
    u1->setCode(12344);
    u2->setCode(62544);
    u3->setCode(45648);
    user.push_back(u1);
    user.push_back(u2);
    user.push_back(u3);
    writeUser(user, 3);
}

void testReadData(){
    vector<USER*> user;
    readUser(user,3);
}
