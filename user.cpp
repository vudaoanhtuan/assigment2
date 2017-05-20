#include "user.h"

USER::USER(){
    id = 0;
    code = 0;
    strcpy(name,"");
    dob.date = 0;
    dob.month = 0;
    dob.year = 0;
    strcpy(job,"");
    strcpy(email,"");
}

USER::USER(const USER &user){
    id = user.id;
    code = user.code;
    strcpy(name,user.name);
    dob = user.dob;
    strcpy(job,user.job);
    strcpy(email,user.email);
}

const USER USER::operator =(const USER &user){
    id = user.id;
    code = user.code;
    strcpy(name,user.name);
    dob = user.dob;
    strcpy(job,user.job);
    strcpy(email,user.email);
    return user;
}


long long USER::getId() const{
    return id;
}

long long USER::getCode() const{
    return code;
}

DATE USER::getDob() const{
    return dob;
}

char* USER::getName() const{
    char * t = new char;
    strcpy(t,name);
    return t;
}

char* USER::getEmail() const{
    char * t = new char;
    strcpy(t,email);
    return t;
}

char* USER::getJob() const{
    char * t = new char;
    strcpy(t,job);
    return t;
}

void USER::setId(long long id){
    this->id = id;
}

void USER::setCode(long long code){
    this->code = code;
}

void USER::setDob(DATE dob){
    this->dob = dob;
}

void USER::setName(char * name){
    strcpy(this->name, name);
}

void USER::setEmail(char * email){
    strcpy(this->email, email);
}

void USER::setJob(char * job){
    strcpy(this->job, job);
}


