#ifndef BOOK_H
#define BOOK_H


class BOOK{
private:
    long long id;
    char title[100];
    char author[100];
    char publisher[100];
    int year;
    char catagory[100];

public:
    BOOK();
    BOOK(const BOOK &);
    ~BOOK();
    BOOK operator=(const BOOK &);

    // GETTER
    long long getId();
    char* getTitle();
    char* getAuthor();
    char*  getPublisher();
    int getYear();
    char* getCatagory();

    // SETTER
    void setTitle(char*);
    void setAuthor(char*);
    void setPublisher(char*);
    void setYear(int);
    void setCatagory(char*);

};

#endif // BOOK_H
