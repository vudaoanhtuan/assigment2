#ifndef ACCOUNT_H
#define ACCOUNT_H


#include "datatype.h"

class ACCOUNT{
private:
    long long id;
    long long userId;
    char name[100];
    char pass[100];
    bool active;
    ROLE role;

public:
    ACCOUNT();
    ACCOUNT(const ACCOUNT &);
    ~ACCOUNT();
    ACCOUNT operator=(const ACCOUNT &);

    // GETTER
    long long getId();
    long long getUserId();
    char* getName();
    char* getPass();
    bool isActive();
    ROLE getRole();

    // SETTER
    void setUserId(long long);
    void setName(char*);
    void setPass(char*);
    void setStatus(bool);
    void setRole(ROLE);

};


#endif // ACCOUNT_H
