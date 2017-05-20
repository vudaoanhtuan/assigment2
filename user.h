#ifndef USER_H
#define USER_H

#include "datatype.h"
#include <string.h>

class USER{
private:
    long long id;
    long long code;
    DATE dob;
    char name[100];
    char job[100];
    char email[100];
public:
    USER();
    USER(const USER &);
    const USER operator=(const USER &);

    // GETTER
    long long getId() const;
    long long getCode() const;
    char* getName() const;
    DATE getDob() const;
    char* getJob() const;
    char* getEmail() const;

    // SETTER
    void setId(long long);
    void setCode(long long);
    void setName(char*);
    void setDob(DATE);
    void setJob(char*);
    void setEmail(char*);
};

#endif // USER_H
