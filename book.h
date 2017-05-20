#ifndef BOOK_H
#define BOOK_H

#include <string.h>

class BOOK{
private:
    long long id;
    int year;
    char title[100];
    char author[100];
    char publisher[100];
    char catagory[100];

public:
    BOOK();
    BOOK(const BOOK &);
    const BOOK operator=(const BOOK &);

    // GETTER
    long long getId() const;
    int getYear() const;
    char* getTitle() const;
    char* getAuthor() const;
    char*  getPublisher() const;
    char* getCatagory() const;

    // SETTER
    void setId(long long);
    void setYear(int);
    void setTitle(char*);
    void setAuthor(char*);
    void setPublisher(char*);
    void setCatagory(char*);

};

#endif // BOOK_H
