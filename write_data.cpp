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
