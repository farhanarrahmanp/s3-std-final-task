#include "Mhs.h"


void insertFirstMhs(ListMhs &L1, adrMhs P) {
    if(first(L1)==NULL){
        first(L1) = P;
    }else{
        next(P) = first(L1);
        first(L1) = P;
    }
}

void insertLastMhs(ListMhs &L1, adrMhs P) {
    adrMhs Q = first(L1);
    if(first(L1)==NULL){
        insertFirstMhs(L1, P);
    }else{
        while(next(Q)!=NULL){
            Q = next(Q);
        }
    }
    next(Q) = P;
}

void insertAfterMhs(ListMhs &L1, adrMhs Prec, adrMhs P) {
    if(first(L1)==NULL){
        insertFirstMhs(L1,P);
    }else{
        if(next(Prec)==NULL){
            next(Prec)=P;
        }else{
            next(P)=next(Prec);
            next(Prec)=P;
        }
    }
}

void deleteFirstMhs(ListMhs &L1, adrMhs &P) {
    if (first(L1)==NULL){
        cout << "Empty List.\n\n";
    }else{
        P = first(L1);
        first(L1) = next(first(L1));
        next(P) = NULL;
    }
}

void deleteLastMhs(ListMhs &L1, adrMhs &P) {
        adrMhs Prec;
        Prec = first(L1);
        if(Prec!=NULL){
            P = first(L1);
            while (next(P)!=NULL){
                Prec = P;
                P = next(P);
            }
            next(Prec) = NULL;

    }
}

void deleteAfterMhs(ListMhs &L1, adrMhs Prec, adrMhs &P) {
    if(first(L1)!=NULL){
        if(next(next(Prec))==NULL){
            P = next(Prec);
            next(Prec)=NULL;
        }else{
            next(Prec)=next(P);
            next(P) = NULL;
        }
    }
}

adrMhs findNamaMhs(ListMhs L1, string X) {
    if (first(L1)==NULL){
            cout << "List Kosong.\n\n";
        }else{
            adrMhs P=first(L1);
            while (P!=NULL){
                if(nama(P)==X){
                    cout << endl;
                    cout << "Nama\t\t\t: " << nama(P) << endl;
                    cout << "NIM\t\t\t: " << nim(P) << endl;
                    cout << "Kelas\t\t\t: " <<kelas(P) << endl;
                    cout << "Jurusan\t\t\t: " << jurusan(P);
                    cout << endl;
                }
                P = next(P);
            }
            while (P==NULL){
                cout << endl;
                break;
            }
            }
}

adrMhs findNIM(ListMhs L1, int X) {
    if (first(L1)==NULL){
            cout << "List Kosong.\n\n";
        }else{
            adrMhs P=first(L1);
            while (P!=NULL){
                if(nim(P)==X){
                    cout << endl;
                    cout << "Nama\t\t\t: " << nama(P) << endl;
                    cout << "NIM\t\t\t: " << nim(P) << endl;
                    cout << "Kelas\t\t\t: " <<kelas(P) << endl;
                    cout << "Jurusan\t\t\t: " << jurusan(P);
                    cout << endl;
                }
                P = next(P);
            }
            while (P==NULL){
                cout << endl;
                break;
            }
            }
}

adrMhs findKelasMhs(ListMhs L1, string X) {
    if (first(L1)==NULL){
            cout << "List Kosong.\n\n";
        }else{
            adrMhs P=first(L1);
            while (P!=NULL){
                if(kelas(P)==X){
                    cout << endl;
                    cout << "Nama\t\t\t: " << nama(P) << endl;
                    cout << "NIM\t\t\t: " << nim(P) << endl;
                    cout << "Kelas\t\t\t: " <<kelas(P) << endl;
                    cout << "Jurusan\t\t\t: " << jurusan(P);
                    cout << endl;
                }
                P = next(P);
            }
            while (P==NULL){
                cout << endl;
                break;
            }
            }
}

adrMhs findJurusanMhs(ListMhs L1, string X) {
    if (first(L1)==NULL){
            cout << "List Kosong.\n\n";
        }else{
            adrMhs P=first(L1);
            while (P!=NULL){
                if(jurusan(P)==X){
                    cout << endl;
                    cout << "Nama\t\t\t: " << nama(P) << endl;
                    cout << "NIM\t\t\t: " << nim(P) << endl;
                    cout << "Kelas\t\t\t: " <<kelas(P) << endl;
                    cout << "Jurusan\t\t\t: " << jurusan(P);
                    cout << endl;
                }
                P = next(P);
            }
            while (P==NULL){
                cout << endl;
                break;
            }
            }
        }

void printInfoMhs(ListMhs L1) {
        if (first(L1)==NULL){
            cout << "List Kosong.\n\n";
        }else{
            adrMhs P=first(L1);
            while (P!=NULL){
                cout << nama(P) <<"\t|\t"<< nim(P) <<"\t|\t"<< kelas(P) <<"\t|\t"<< jurusan(P)<<endl<<endl;
                P = next(P);
            }
        }
}

void createListMhs(ListMhs &L1) {
    first(L1) = NULL;
}

adrMhs allocateMhs(string nama, int nim, string kelas, string jurusan) {
    adrMhs P;
    P = new elmMhs;
    nama(P) = nama;
    nim(P) = nim;
    kelas(P) = kelas;
    jurusan(P) =jurusan;
    next(P) = NULL;
    return P;
}

void deallocateMhs(adrMhs &P) {
    delete P;
    P = NULL;
}

adrMhs findElmMhs(ListMhs L1, int X) {
    adrMhs P = first(L1);
    do {
        if(nim(P) == X) {
            return P;
        }
        P = next(P);
    } while(P != NULL);
    return NULL;
}
