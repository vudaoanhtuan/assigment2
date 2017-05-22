#include "read_data.h"

void readUser(vector<USER *> &user, int n){
    FILE *f;
    f = fopen("data/user.dat", "r");
    for (int i=0; i<n; i++){
        USER *t = new USER;
        fread(t, sizeof(USER), 1, f);
        user.push_back(t);
    }
    fclose(f);
}

void readAccount(vector<ACCOUNT *> &acc, int n){
    FILE *f;
    f = fopen("data/account.dat", "r");
    for (int i=0; i<n; i++){
        ACCOUNT *t = new ACCOUNT;
        fread(t, sizeof(ACCOUNT), 1, f);
        acc.push_back(t);
    }
    fclose(f);
}

void readBook(vector<BOOK *> &book, int n){
    FILE *f;
    f = fopen("data/book.dat", "r");
    for (int i=0; i<n; i++){
        BOOK *t = new BOOK;
        fread(t, sizeof(BOOK), 1, f);
        book.push_back(t);
    }
    fclose(f);
}

void readNum(NUMDATA &numData){
    FILE *f;
    f=fopen("data/numdata.ini","rb");
    fread(&(numData.numUser),sizeof(int),1,f);
    fread(&(numData.numAccount),sizeof(int),1,f);
    fread(&(numData.numBook),sizeof(int),1,f);
    fread(&(numData.numReader),sizeof(int),1,f);
    fclose(f);
}

void readReader(vector<Reader *> &reader, int n){
    FILE *f;
    f=fopen("data/reader.dat","rb");
    for (int i=0;i<n;i++){
        Reader *t = new Reader;
        fread(t, sizeof(Reader), 1, f);
        reader.push_back(t);
    }
    fclose(f);
}
