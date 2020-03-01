#ifndef MHS_H_INCLUDED
#define MHS_H_INCLUDED

#include "header.h"

void insertFirstMhs(ListMhs &L1, adrMhs P);
void insertLastMhs(ListMhs &L1, adrMhs P);
void insertAfterMhs(ListMhs&L1, adrMhs Prec, adrMhs P);
void deleteFirstMhs(ListMhs &L1, adrMhs &P);
void deleteLastMhs(ListMhs &L1, adrMhs &P);
void deleteAfterMhs(ListMhs &L1, adrMhs Prec, adrMhs &P);
adrMhs findNamaMhs(ListMhs L1, string X);
adrMhs findNIM(ListMhs L1, int X);
adrMhs findKelasMhs(ListMhs L1, string X);
adrMhs findJurusanMhs(ListMhs L1, string);
void printInfoMhs(ListMhs);
void createListMhs(ListMhs &);
adrMhs allocateMhs(string, int, string, string);
void deallocateMhs(adrMhs &);

adrMhs findElmMhs(ListMhs L1, int X);

#endif // MHS_H_INCLUDED
