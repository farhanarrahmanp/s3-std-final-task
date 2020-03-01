#ifndef DOSEN_H_INCLUDED
#define DOSEN_H_INCLUDED

#include "header.h"

void insertFirstDosen(ListDosen &L2, adrDosen P);
void insertLastDosen(ListDosen &L2, adrDosen P);
void insertAfterDosen(ListDosen &L2, adrDosen Prec, adrDosen P);
void deleteFirstDosen(ListDosen &L2, adrDosen &P);
void deleteLastDosen(ListDosen &L2, adrDosen &P);
void deleteAfterDosen(ListDosen &L2, adrDosen Prec, adrDosen &P);
adrDosen findNamaDosen(ListDosen L2, string X);
adrDosen findNIP(ListDosen L2, int X);
adrDosen findJurusanDosen(ListDosen L2, string X);
adrDosen findFakultasDosen(ListDosen L2, string X);
void printInfoDosen(ListDosen);
void createListDosen(ListDosen &);
adrDosen allocateDosen(string, int, string, string);
void deallocateDosen(adrDosen &);

adrDosen findElmDosen(ListDosen L2, int Y);

#endif // DOSEN_H_INCLUDED
