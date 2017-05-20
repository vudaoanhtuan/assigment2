#ifndef ACCOUNT_H
#define ACCOUNT_H


#include "datatype.h"
#include <string.h>

class ACCOUNT{
private:
    long long id;
    long long userId;
    char name[100];
    char pass[100];
    bool status;
    ROLE role;

public:
    ACCOUNT();
    ACCOUNT(const ACCOUNT &);
    const ACCOUNT operator=(const ACCOUNT &);

    // GETTER
    long long getId() const;
    long long getUserId() const;
    char* getName() const;
    char* getPass() const;
    bool isActive() const;
    ROLE getRole() const;

    // SETTER
    void setId(long long);
    void setUserId(long long);
    void setName(char*);
    void setPass(char*);
    void setStatus(bool);
    void setRole(ROLE);

};


#endif // ACCOUNT_H
