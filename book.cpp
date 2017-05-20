#include "book.h"

BOOK::BOOK(){
    id = 0;
    year = 0;
    strcpy(title, "");
    strcpy(author, "");
    strcpy(publisher, "");
    strcpy(catagory, "");
}

BOOK::BOOK(const BOOK &book){
    id = book.id;
    year = book.year;
    strcpy(title, book.title);
    strcpy(author, book.author);
    strcpy(publisher, book.publisher);
    strcpy(catagory, book.catagory);
}

const BOOK BOOK::operator =(const BOOK &book){
    id = book.id;
    year = book.year;
    strcpy(title, book.title);
    strcpy(author, book.author);
    strcpy(publisher, book.publisher);
    strcpy(catagory, book.catagory);
    return book;
}

long long BOOK::getId() const{
    return id;
}

int BOOK::getYear() const{
    return year;
}

char* BOOK::getTitle() const{
    char *t = new char;
    strcpy(t, title);
    return t;
}

char* BOOK::getAuthor() const{
    char *t = new char;
    strcpy(t, author);
    return t;
}

char* BOOK::getPublisher() const{
    char *t = new char;
    strcpy(t, publisher);
    return t;
}

char* BOOK::getCatagory() const{
    char *t = new char;
    strcpy(t, catagory);
    return t;
}

void BOOK::setId(long long id){
    this->id = id;
}

void BOOK::setYear(int year){
    this->year = year;
}

void BOOK::setTitle(char * title){
    strcpy(this->title, title);
}

void BOOK::setAuthor(char * author){
    strcpy(this->author, author);
}

void BOOK::setPublisher(char * publisher){
    strcpy(this->publisher, publisher);
}

void BOOK::setCatagory(char * catagory){
    strcpy(this->catagory, catagory);
}
