#ifndef USER_H
#define USER_H

#include "datatype.h"

class USER{
private:
    long long id;
    long long code;
    char name[100];
    DATE dob;
    char job[100];
    char email[100];
public:
    USER();
    USER(const USER &);
    ~USER();
    USER operator=(const USER &);

    // GETTER
    long long getId();
    long long getCode();
    char* getName();
    DATE getDob();
    char* getJob();
    char* getEmail();

    // SETTER
    void setCode(long long);
    void setName(char*);
    void setDob(DATE);
    void setJob(char*);
    void setEmail(char*);
};

#endif // USER_H
