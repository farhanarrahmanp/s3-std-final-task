#ifndef RELASI_H_INCLUDED
#define RELASI_H_INCLUDED

#include "Mhs.h"
#include "Dosen.h"
#include "header.h"


void createListRelasi(ListRelasi &L3);
void insertFirstRelasi(ListRelasi &L3, adrRelasi P);
void insertLastRelasi(ListRelasi &L3, adrRelasi P);
void insertAfterRelasi(adrRelasi Prec, adrRelasi P);
void deleteFirstRelasi(ListRelasi &L3, adrRelasi &P);
void deleteLastRelasi(ListRelasi &L3, adrRelasi &P);
void deleteAfterRelasi(adrRelasi Prec, adrRelasi &P);



adrRelasi alokasiRelasi( adrDosen P, adrMhs C);
void dealokasiRelasi(adrRelasi &P);
adrRelasi findElmRelasi(ListRelasi L3, adrDosen P, adrMhs C);
void printInfoRelasi(ListRelasi L3);

#endif // RELASI_H_INCLUDED

