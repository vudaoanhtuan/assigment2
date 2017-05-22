#include "write_data.h"

void writeUser(vector<USER*> &user, int n){
    FILE *f;
    f = fopen("data/user.dat", "wb");
    for (int i=0; i<n; i++){
        fwrite(user[i], sizeof(USER), 1, f);
    }
    fclose(f);
}

void writeAccount(vector<ACCOUNT *> &acc, int n){
    FILE *f;
    f = fopen("data/account.dat", "wb");
    for (int i=0; i<n; i++){
        fwrite(acc[i], sizeof(ACCOUNT), 1, f);
    }
    fclose(f);
}

void writeBook(vector<BOOK *> &book, int n){
    FILE *f;
    f = fopen("data/book.dat", "wb");
    for (int i=0; i<n; i++){
        fwrite(book[i], sizeof(BOOK), 1, f);
    }
    fclose(f);
}

void writeNum(NUMDATA &numData){
    FILE *f;
    f=fopen("data/numdata.ini","wb");
    fwrite(&(numData.numUser),sizeof(int),1,f);
    fwrite(&(numData.numAccount),sizeof(int),1,f);
    fwrite(&(numData.numBook),sizeof(int),1,f);
    fwrite(&(numData.numReader),sizeof(int),1,f);
    fclose(f);
}


void writeReader(vector<Reader *> &reader, int n){
    FILE *f;
    f=fopen("data/reader.dat","wb");
    for (int i=0;i<n;i++){
        fwrite(reader[i], sizeof(Reader), 1, f);
    }
    fclose(f);
}
