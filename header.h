#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

#include <iostream>

#define first(L) L.first
#define next(P) P->next
#define nama(P) P->nama
#define nim(P) P->nim
#define nip(P) P->nip
#define jurusan(P) P->jurusan

#define fakultas(P) P->fakultas
#define kelas(P) P->kelas

#define nextMhs(R) R->nextMhs
#define nextDosen(R) R->nextDosen
#define nextRelasi(R) R->nextRelasi

#define parent(P) P->parent
#define child(P) P->child

using namespace std;

typedef struct elmDosen *adrDosen;
typedef struct elmMhs *adrMhs;
typedef struct elmRelasi *adrRelasi;


/**-------DOSEN------- **/

struct elmDosen {
    string nama;
    int nip;
    string jurusan;
    string fakultas;
    adrDosen next;
};

struct ListDosen {
    adrDosen first;
};


/**-------MAHASISWA------- **/

struct elmMhs {
    string nama;
    int nim;
    string kelas;
    string jurusan;
    adrMhs next;
};

struct ListMhs {
    adrMhs first;
};


/**-------RELASI------- **/

struct elmRelasi{
    adrRelasi next;
    adrMhs child;
    adrDosen parent;
};

struct ListRelasi{
    adrRelasi first;
};


#endif // HEADER_H_INCLUDED
