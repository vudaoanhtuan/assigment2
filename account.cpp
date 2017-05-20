#include "account.h"

ACCOUNT::ACCOUNT(){
    id = 0;
    userId = 0;
    strcpy(name, "");
    strcpy(pass, "");
    status = 0;
    role = READER;
}

ACCOUNT::ACCOUNT(const ACCOUNT &acc){
    id = acc.id;
    userId = acc.userId;
    strcpy(name, acc.name);
    strcpy(pass, acc.pass);
    status = acc.status;
    role = acc.role;
}

const ACCOUNT ACCOUNT::operator =(const ACCOUNT &acc){
    id = acc.id;
    userId = acc.userId;
    strcpy(name, acc.name);
    strcpy(pass, acc.pass);
    status = acc.status;
    role = acc.role;
    return acc;
}


long long ACCOUNT::getId() const{
    return id;
}

long long ACCOUNT::getUserId() const{
    return userId;
}

char* ACCOUNT::getName() const{
    char *t = new char;
    strcpy(t,name);
    return t;
}

char* ACCOUNT::getPass() const{
    char *t = new char;
    strcpy(t,pass);
    return t;
}

bool ACCOUNT::isActive() const{
    return status;
}

ROLE ACCOUNT::getRole() const{
    return role;
}

void ACCOUNT::setId(long long id){
    this->id = id;
}

void ACCOUNT::setUserId(long long userId){
    this->userId = userId;
}

void ACCOUNT::setName(char * name){
    strcpy(this->name, name);
}

void ACCOUNT::setPass(char * pass){
    strcpy(this->pass, pass);
}

void ACCOUNT::setStatus(bool status){
    this->status = status;
}

void ACCOUNT::setRole(ROLE role){
    this->role = role;
}
