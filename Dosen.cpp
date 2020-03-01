#include "Dosen.h"


void insertFirstDosen(ListDosen &L2, adrDosen P) {
    if(first(L2)==NULL){
        first(L2) = P;
    }else{
        next(P) = first(L2);
        first(L2) = P;
    }
}

void insertLastDosen(ListDosen &L2, adrDosen P) {
    adrDosen Q = first(L2);
    if(first(L2)==NULL){
        insertFirstDosen(L2,P);
    }else{
        adrDosen Q = first(L2);
        while(next(Q)!=NULL){
            Q = next(Q);
        }
    }
    next(Q) = P;
}

void insertAfterDosen(ListDosen &L2, adrDosen Prec, adrDosen P) {
    if(first(L2)==NULL){
        insertFirstDosen(L2,P);
    }else{
        if(next(Prec)==NULL){
            next(Prec)=P;
        }else{
            next(P)=next(Prec);
            next(Prec)=P;
        }
    }
}

void deleteFirstDosen(ListDosen &L2, adrDosen &P) {
    if (first(L2)==NULL){
        cout << "Empty List.\n\n";
    }else{
        P = first(L2);
        first(L2) = next(first(L2));
        next(P) = NULL;
    }
}

void deleteLastDosen(ListDosen &L2, adrDosen &P) {
        adrDosen Prec;
        Prec = first(L2);
        if(Prec!=NULL){
            P = first(L2);
            while (next(P)!=NULL){
                Prec = P;
                P = next(P);
            }
            next(Prec) = NULL;
    }
}

void deleteAfterDosen(ListDosen &L2, adrDosen Prec, adrDosen &P) {
    if(first(L2)!=NULL){
        if(next(next(Prec))==NULL){
            P = next(Prec);
            next(Prec)=NULL;
        }else{
            next(Prec)=next(P);
            next(P) = NULL;
        }
    }
}

adrDosen findNamaDosen(ListDosen L2, string X) {
    if (first(L2)==NULL){
            cout << "List Kosong.\n\n";
        }else{
            adrDosen P=first(L2);
            while (P!=NULL){
                if(nama(P)==X){
                    cout << endl;
                    cout << "Nama\t\t\t: " << nama(P) << endl;
                    cout << "NIP\t\t\t: " << nip(P) << endl;
                    cout << "Jurusan\t\t\t: " <<jurusan(P) << endl;
                    cout << "Fakultas\t\t: " << fakultas(P);
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

adrDosen findNIP(ListDosen L2, int X) {
    if (first(L2)==NULL){
            cout << "List Kosong.\n\n";
        }else{
            adrDosen P=first(L2);
            while (P!=NULL){
                if(nip(P)==X){
                    cout << endl;
                    cout << "Nama\t\t\t: " << nama(P) << endl;
                    cout << "NIP\t\t\t: " << nip(P) << endl;
                    cout << "Jurusan\t\t\t: " <<jurusan(P) << endl;
                    cout << "Fakultas\t\t: " << fakultas(P);
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

adrDosen findJurusanDosen(ListDosen L2, string X) {
    if (first(L2)==NULL){
            cout << "List Kosong.\n\n";
        }else{
            adrDosen P=first(L2);
            while (P!=NULL){
                if(jurusan(P)==X){
                    cout << endl;
                    cout << "Nama\t\t\t: " << nama(P) << endl;
                    cout << "NIP\t\t\t: " << nip(P) << endl;
                    cout << "Jurusan\t\t\t: " <<jurusan(P) << endl;
                    cout << "Fakultas\t\t: " << fakultas(P);
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

adrDosen findFakultasDosen(ListDosen L2, string X) {
if (first(L2)==NULL){
            cout << "List Kosong.\n\n";
        }else{
            adrDosen P=first(L2);
            while (P!=NULL){
                if(fakultas(P)==X){
                    cout << endl;
                    cout << "Nama\t\t\t: " << nama(P) << endl;
                    cout << "NIP\t\t\t: " << nip(P) << endl;
                    cout << "Jurusan\t\t\t: " <<jurusan(P) << endl;
                    cout << "Fakultas\t\t: " << fakultas(P);
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

void printInfoDosen(ListDosen L2) {
        if (first(L2)==NULL){
            cout << "List Kosong.\n\n";
        }else{
            adrDosen P=first(L2);
            while (P!=NULL){
                cout << nama(P) <<"\t|\t"<< nip(P) <<"\t|\t"<< fakultas(P) <<"\t\t|\t"<< jurusan(P)<<endl<<endl;
                P = next(P);
            }
        }
}

void createListDosen(ListDosen &L2) {
    first(L2) = NULL;
}

adrDosen allocateDosen(string nama, int nip, string jurusan, string fakultas) {
    adrDosen P;
    P = new elmDosen;
    nama(P) = nama;
    nip(P) = nip;
    jurusan(P) = jurusan;
    fakultas(P) = fakultas;
    next(P) = NULL;
    return P;
}

void deallocateDosen(adrDosen &P) {
    delete P;
    P = NULL;
}

adrDosen findElmDosen(ListDosen L2, int Y) {
    adrDosen P = first(L2);
    do {
        if(nip(P) == Y) {
            return P;
        }
        P = next(P);
    } while(P != NULL);
    return NULL;
}
