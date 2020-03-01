#include "Relasi.h"

void createListRelasi(ListRelasi &L3) {
    first(L3) = NULL;
}

adrRelasi alokasiRelasi(adrDosen P, adrMhs C) {
    adrRelasi Q = new elmRelasi;
    child(Q) = C;
    parent(Q) = P;
    next(Q) = NULL;
    return Q;
}

void insertFirstRelasi(ListRelasi &L3, adrRelasi P) {
    next(P) = first(L3);
    first(L3) = P;
}

void printInfoRelasi(ListRelasi L3) {
        if (first(L3)==NULL){
            cout << "List Kosong.\n\n";
        }else{
            adrRelasi P=first(L3);
            while (P!=NULL){
                cout << nama(parent(P)) <<"\t|\t"<< nama(child(P))<<"\t\t|\t" << kelas(child(P)) << "\t|\t" << jurusan(child(P))<<endl<<endl;
                P = next(P);
            }
        }
}

adrRelasi findElmRelasi(ListRelasi L3, adrDosen P, adrMhs C) {
    adrRelasi Q = first(L3);
    while(Q != NULL) {
        if(parent(Q)==P && child(Q)== C) {
            return Q;
        }
        Q = next(Q);
    }
    return NULL;
}

void insertAfterRelasi(adrRelasi &Prec, adrRelasi P) {
    next(P) = next(Prec);
    next(Prec) = P;
}

void deleteFirstRelasi(ListRelasi &L3, adrRelasi &P){
    if (first(L3)==NULL){
        cout << "Empty List.\n\n";
    }else{
        P = first(L3);
        first(L3) = next(first(L3));
        next(P) = NULL;
        parent(P) = NULL;
        child(P) = NULL;
    }
}
