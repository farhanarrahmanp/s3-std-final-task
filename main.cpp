#include <conio.h>
#include <iostream>
#include <dos.h>
#include <stdlib.h>
#include <windows.h>
#include "Mhs.h"
#include "Dosen.h"
#include "Relasi.h"
#include "header.h"

int main()
{
    system("color 0a");
    cout << "\n\n\n\t\t\tLoading...\n\n";
    char a = 177, b =219;
    cout <<"\t\t\t";
    for(int i=0; i<=15; i++){
        cout << a;
        cout << "\r";
        cout << "\t\t\t";
    }
    for (int i = 0; i<=15; i++){
            cout << b;
            for(int j=0; j<=1e8;j++);
    }


    system("cls");
    cout << "\n\n\n\t\t\tLoading complete.\n\n\t\t\tPress any key...";
    getch();

    ListMhs LMhs;
    ListDosen LDosen;
    ListRelasi LRelasi;

    adrDosen P;
    adrMhs C;
    adrRelasi R;

    createListMhs(LMhs);
    createListDosen(LDosen);
    createListRelasi(LRelasi);


    C = allocateMhs("Wahyu", 12256, "TI-02", "Industri");
    insertFirstMhs(LMhs, C);
    C = allocateMhs("Rizky", 14273, "MB-01", "MBTI");
    insertFirstMhs(LMhs, C);
    C = allocateMhs("Rara", 14098, "MB-04", "MBTI");
    insertFirstMhs(LMhs, C);
    C = allocateMhs("Rahman", 11783, "TE-01", "Elektro");
    insertFirstMhs(LMhs, C);
    C = allocateMhs("Nur", 17142, "KM-02", "Komunikasi");
    insertFirstMhs(LMhs, C);
    C = allocateMhs("Nugroho", 13172, "IF-03", "Informatika");
    insertFirstMhs(LMhs, C);
    C = allocateMhs("Novi", 17253, "KM-02", "Komunikasi");
    insertFirstMhs(LMhs, C);
    C = allocateMhs("Nanda", 17265, "KM-05", "Komunikasi");
    insertFirstMhs(LMhs, C);
    C = allocateMhs("Namirah", 16273, "EK-01", "Ekonomi");
    insertFirstMhs(LMhs, C);
    C = allocateMhs("Nando", 16372, "EK-04", "Ekonomi");
    insertFirstMhs(LMhs, C);
    C = allocateMhs("Made", 13211, "IF-03", "Informatika");
    insertFirstMhs(LMhs, C);
    C = allocateMhs("Lestari", 11513, "TE-03", "Elektro");
    insertFirstMhs(LMhs, C);
    C = allocateMhs("Kartika", 13655, "IF-01", "Informatika");
    insertFirstMhs(LMhs, C);
    C = allocateMhs("Fajar", 15136, "DK-04", "DKV");
    insertFirstMhs(LMhs, C);
    C = allocateMhs("Dyah", 12168, "TI-04", "Industri");
    insertFirstMhs(LMhs, C);
    C = allocateMhs("Dewi", 15513, "DK-03", "DKV");
    insertFirstMhs(LMhs, C);
    C = allocateMhs("Bagus", 12135, "TI-02", "Industri");
    insertFirstMhs(LMhs, C);
    C = allocateMhs("Ari", 10267, "TT-04", "Telekomunikasi");
    insertFirstMhs(LMhs, C);
    C = allocateMhs("Ahmad", 13142, "IF-03", "Informatika");
    insertFirstMhs(LMhs, C);
    C = allocateMhs("Agung", 10264, "TT-04", "Telekomunikasi");
    insertFirstMhs(LMhs, C);
    C = allocateMhs("Adi", 12123, "TI-04", "Industri");
    insertFirstMhs(LMhs, C);
    C = allocateMhs("Abdul", 10162, "TT-03", "Telekomunikasi");
    insertFirstMhs(LMhs, C);

    P = allocateDosen("Tuti", 36017, "Ekonomi", "FEB");
    insertFirstDosen(LDosen, P);
    P = allocateDosen("Sutisna", 31351, "Elektro", "FTE");
    insertFirstDosen(LDosen, P);
    P = allocateDosen("Susi", 34456, "MBTI", "FEB");
    insertFirstDosen(LDosen, P);
    P = allocateDosen("Rahmat", 32254, "Industri", "FRI");
    insertFirstDosen(LDosen, P);
    P = allocateDosen("Putu", 31456, "Elektro", "FTE");
    insertFirstDosen(LDosen, P);
    P = allocateDosen("Puspita", 37112, "Komunikasi", "FKB");
    insertFirstDosen(LDosen, P);
    P = allocateDosen("Puji", 35145, "DKV", "FIK");
    insertFirstDosen(LDosen, P);
    P = allocateDosen("Kurnia", 37351, "Komunikasi", "FKB");
    insertFirstDosen(LDosen, P);
    P = allocateDosen("Jajang", 30020, "Telekomunikasi", "FTE");
    insertFirstDosen(LDosen, P);
    P = allocateDosen("Indra", 34654, "MBTI", "FEB");
    insertFirstDosen(LDosen, P);
    P = allocateDosen("Dina", 34123, "Ekonomi", "FEB");
    insertFirstDosen(LDosen, P);
    P = allocateDosen("Budi", 32144, "Industri", "FRI");
    insertFirstDosen(LDosen, P);
    P = allocateDosen("Bayu", 35821, "DKV", "FIK");
    insertFirstDosen(LDosen, P);
    P = allocateDosen("Bambang", 33112, "Informatika", "FIF");
    insertFirstDosen(LDosen, P);
    P = allocateDosen("Arief", 30017, "Telekomunikasi", "FTE");
    insertFirstDosen(LDosen, P);
    P = allocateDosen("Adit", 33351, "Informatika", "FIF");
    insertFirstDosen(LDosen, P);


    P = findElmDosen(LDosen, 36017);
    C = findElmMhs(LMhs, 16372);
    R = alokasiRelasi(P,C);
    insertFirstRelasi(LRelasi,R);

    P = findElmDosen(LDosen, 31351);
    C = findElmMhs(LMhs, 11783);
    R = alokasiRelasi(P,C);
    insertFirstRelasi(LRelasi,R);

    P = findElmDosen(LDosen, 34456);
    C = findElmMhs(LMhs, 14273);
    R = alokasiRelasi(P,C);
    insertFirstRelasi(LRelasi,R);

    P = findElmDosen(LDosen, 32254);
    C = findElmMhs(LMhs, 12256);
    R = alokasiRelasi(P,C);
    insertFirstRelasi(LRelasi,R);
    C = findElmMhs(LMhs, 12135);
    R = alokasiRelasi(P,C);
    insertFirstRelasi(LRelasi,R);

    P = findElmDosen(LDosen, 31456);
    C = findElmMhs(LMhs, 11513);
    R = alokasiRelasi(P,C);
    insertFirstRelasi(LRelasi,R);

    P = findElmDosen(LDosen, 37112);
    C = findElmMhs(LMhs, 17265);
    R = alokasiRelasi(P,C);
    insertFirstRelasi(LRelasi,R);

    P = findElmDosen(LDosen, 35145);
    C = findElmMhs(LMhs, 15136);
    R = alokasiRelasi(P,C);
    insertFirstRelasi(LRelasi,R);

    P = findElmDosen(LDosen, 37351);
    C = findElmMhs(LMhs, 17142);
    R = alokasiRelasi(P,C);
    insertFirstRelasi(LRelasi,R);
    C = findElmMhs(LMhs, 17253);
    R = alokasiRelasi(P,C);
    insertFirstRelasi(LRelasi,R);

    P = findElmDosen(LDosen, 30020);
    C = findElmMhs(LMhs, 10162);
    R = alokasiRelasi(P,C);
    insertFirstRelasi(LRelasi,R);

    P = findElmDosen(LDosen, 34654);
    C = findElmMhs(LMhs, 14098);
    R = alokasiRelasi(P,C);
    insertFirstRelasi(LRelasi,R);

    P = findElmDosen(LDosen, 34123);
    C = findElmMhs(LMhs, 16273);
    R = alokasiRelasi(P,C);
    insertFirstRelasi(LRelasi,R);

    P = findElmDosen(LDosen, 32144);
    C = findElmMhs(LMhs, 12168);
    R = alokasiRelasi(P,C);
    insertFirstRelasi(LRelasi,R);
    C = findElmMhs(LMhs, 12123);
    R = alokasiRelasi(P,C);
    insertFirstRelasi(LRelasi,R);

    P = findElmDosen(LDosen, 35821);
    C = findElmMhs(LMhs, 15513);
    R = alokasiRelasi(P,C);
    insertFirstRelasi(LRelasi,R);

    P = findElmDosen(LDosen, 33112);
    C = findElmMhs(LMhs, 13172);
    R = alokasiRelasi(P,C);
    insertFirstRelasi(LRelasi,R);
    C = findElmMhs(LMhs, 13211);
    R = alokasiRelasi(P,C);
    insertFirstRelasi(LRelasi,R);
    C = findElmMhs(LMhs, 13142);
    R = alokasiRelasi(P,C);
    insertFirstRelasi(LRelasi,R);

    P = findElmDosen(LDosen, 30017);
    C = findElmMhs(LMhs, 10264);
    R = alokasiRelasi(P,C);
    insertFirstRelasi(LRelasi,R);
    C = findElmMhs(LMhs, 10267);
    R = alokasiRelasi(P,C);
    insertFirstRelasi(LRelasi,R);

    P = findElmDosen(LDosen, 33351);
    C = findElmMhs(LMhs, 13655);
    R = alokasiRelasi(P,C);
    insertFirstRelasi(LRelasi,R);


    string nama;
    int nim;
    string jurusan;
    string kelas;

    int nip;
    string fakultas;

    mulai:
    system("cls");
    int pil;

    cout << "-------TUGAS BESAR STRUKTUR DATA-------\n\n";
    cout << "1. Mahasiswa\n";
    cout << "2. Dosen\n";
    cout << "3. Perwalian\n";
    cout << "4. Exit\n";
    cout << "\nMasukkan Pilihan Anda\n>>> ";
    cin >> pil;

    switch (pil){

    case 1:

        mulai1:
        system("cls");
        int pil1;
        cout << "-------MAHASISWA-------\n\n";
        cout << "1. Insert\n";
        cout << "2. Update\n";
        cout << "3. Delete\n";
        cout << "4. Find\n";
        cout << "5. List All\n";
        cout << "6. Back to Main Menu\n";
        cout << "\nMasukkan Pilihan Anda\n>>> ";
        cin >> pil1;

        switch (pil1){

        case 1:
            system("cls");
            {cout << "Nama\n>>> "; cin >> nama;
            cout << "\nNIM\n>>> "; cin >> nim;
            adrMhs C = findElmMhs(LMhs, nim);
            while(C!=NULL){
                if(nim(C)==nim){
                    cout << "\nNIM sudah ada.\n";
                    cout << "Press any key to back to Menu Mahasiswa.";
                    getch();
                    goto mulai1;
                }
            }
            cout << "\nKelas\n>>> "; cin >> kelas;
            cout << "\nJurusan\n>>> "; cin >> jurusan;
            adrMhs P = allocateMhs(nama, nim, kelas, jurusan);
            insertFirstMhs(LMhs, P);
            cout << "\nInsert success.\n";}
            cout << "Press any key to back to Menu Mahasiswa.";
            getch();
            goto mulai1;


        case 2:
            system("cls");
            {
                cout << "NIM\n>>> ";
                cin >> nim;
                adrMhs P = findElmMhs(LMhs, nim);
                if ((P) == NULL){
                    cout << "\nNIM tidak ditemukan.\n";
                }else{
                    cout << "\nNama baru\n>>> ";
                    cin >> nama;
                    cout << "\nKelas baru\n>>> ";
                    cin >> kelas;
                    cout << "\nJurusan baru\n>>> ";
                    cin >> jurusan;
                    nama(P)=nama;
                    kelas(P) = kelas;
                    jurusan(P) = jurusan;
                    cout << "\nUpdate success.\n";;
                }
            }
            cout << "Press any key to back to Menu Mahasiswa.";
            getch();
            goto mulai1;

        case 3:
            system("cls");
            {int f;
            cout << "Pilih Delete\n1. Delete First\n2. Delete After\n\nMasukkan Pilihan Anda\n>>> ";
            cin >> f;
            if(f==1){
                adrMhs P;
                deleteFirstMhs(LMhs, P);
                cout << "\nDelete success.\n";
                cout << "Press any key to back to Menu Mahasiswa.";
                getch();
                goto mulai1;
            }else{
                if(f==2){
                    cout << "\nNIM\n(Contoh: Jika ingin menghapus B, maka masukkan NIM A)\n>>> ";
                    cin >> nim;
                    adrMhs P = next(findElmMhs(LMhs, nim));
                    adrMhs Prec = findElmMhs(LMhs, nim);
                    deleteAfterMhs(LMhs, Prec, P);
                    cout<<"\nDelete success.\n";
                    cout << "Press any key to back to Menu Mahasiswa.";
                    getch();
                    goto mulai1;
                }else{
                    cout << "\nTidak ada pilihan tersebut. Silakan masukkan pilihan yang benar.\n>>> "; cin >> f;
                }
            }
            }
            cout << "Press any key to back to Menu Mahasiswa.";
            getch();
            goto mulai1;


        case 4:
            system("cls");
            {
                int f;
                cout << "Find by....\n1. Nama\n2. NIM\n3. Kelas\n4. Jurusan \n\nPilihan Anda\n>>> ";
                cin >> f;
                if(f == 1){
                    system("cls");
                    cout << "Ketik Nama\n>>> ";
                    cin >> nama;
                    findNamaMhs(LMhs, nama);
                }else{
                    if(f == 2){
                        system("cls");
                        cout << "Ketik NIM\n>>> ";
                        cin >> nim;
                        findNIM(LMhs, nim);
                    }else{
                        if(f==3){
                            system("cls");
                            cout << "Ketik Kelas\n>>> ";
                            cin >> kelas;
                            findKelasMhs(LMhs, kelas);
                        }else{
                            if (f==4){
                                system("cls");
                                cout << "Ketik Jurusan\n>>> ";
                                cin >> jurusan;
                                findJurusanMhs(LMhs, jurusan);
                            }else{
                                cout << "\nTidak ada pilihan tersebut. Silakan masukkan pilihan yang benar.\n>>> "; cin >> f;
                            }
                        }
                        }
                    }
                }
            cout << "Press any key to back to Menu Mahasiswa.";
            getch();
            goto mulai1;

        case 5:
            system("cls");
            {cout << "______________________________________________________________\n";
            cout<< "\nNama\t|\tNIM\t|\tKelas\t|\tJurusan\n";
            cout << "______________________________________________________________" << endl<<endl;
            printInfoMhs(LMhs);}
            cout << "Press any key to back to Menu Mahasiswa.";
            getch();
            goto mulai1;

        case 6:
            system("cls");
            goto mulai;

        system("cls");
        default: system("cls"); cout << "!!!!!!!WARNING!!!!!!!\n\nTidak ada pilihan tersebut. Silakan masukkan pilihan yang benar.";
        getch();
        goto mulai1;
        }

    case 2:
        mulai2:
        system("cls");
        int pil2;
        cout << "-------DOSEN-------\n\n";
        cout << "1. Insert\n";
        cout << "2. Update\n";
        cout << "3. Delete\n";
        cout << "4. Find\n";
        cout << "5. List All\n";
        cout << "6. Back to Main Menu\n";
        cout << "\nMasukkan Pilihan Anda\n>>> ";
        cin >> pil2;

        switch (pil2){

        case 1:
            system("cls");
            {cout << "Nama\n>>> "; cin >> nama;
            cout << "\nNIP\n>>> "; cin >> nip;
            adrDosen P = findElmDosen(LDosen, nim);
            while(P!=NULL){
                if(nip(P)==nip){
                    cout << "\nNIP sudah ada.\n";
                    cout << "Press any key to back to Menu Mahasiswa.";
                    getch();
                    goto mulai2;
                }
            }
            cout << "\nJurusan\n>>>  "; cin >> jurusan;
            cout << "\nFakultas\n>>> "; cin >> fakultas;
            adrDosen Q = allocateDosen(nama, nip, jurusan, fakultas);
            insertFirstDosen(LDosen, Q);
            cout << "\nInsert success.\n";}
            cout << "Press any key to back to Menu Dosen.";
            getch();
            goto mulai2;

        case 2:
            system("cls");
            {
                cout << "NIP\n>>> ";
                cin >> nip;
                adrDosen P = findElmDosen(LDosen, nip);
                if (P==NULL){
                    cout << "\nNIP tidak ditemukan.\n";
                }else{
                    cout << "\nNama baru\n>>> ";
                    cin >> nama;
                    cout << "\nJurusan baru\n>>> ";
                    cin >> jurusan;
                    cout << "\nFakultas baru\n>>> ";
                    cin >> fakultas;
                    nama(P)=nama;
                    jurusan(P) = jurusan;
                    fakultas(P) = fakultas;
                    cout << "\nUpdate success.\n";
                }

            }
            cout << "Press any key to back to Menu Dosen.";
            getch();
            goto mulai2;

        case 3:
            system("cls");
            {int f;
            cout << "Pilih Delete\n1. Delete First\n2. Delete After\n\nMasukkan Pilihan Anda\n>>> ";
            cin >> f;
            if(f==1){
                adrDosen P;
                deleteFirstDosen(LDosen, P);
                cout << "\nDelete success.\n";
                cout << "Press any key to back to Menu Dosen.";
                getch();
                goto mulai2;
            }else{
                if(f==2){
                    cout << "\nNIP\n(Contoh: Jika ingin menghapus C, maka masukkan NIP B)\n>>> ";
                    cin >> nip;
                    adrDosen P = next(findElmDosen(LDosen, nip));
                    adrDosen Prec = findElmDosen(LDosen, nip);
                    deleteAfterDosen(LDosen, Prec, P);
                    cout<<"\n\nDelete success.\n";
                    cout << "Press any key to back to Menu Dosen.";
                    getch();
                    goto mulai2;
                }else{
                    cout << "\nTidak ada pilihan tersebut. Silakan masukkan pilihan yang benar.\n>>> "; cin >> f;
                }
            }
            }
            cout << "Press any key to back to Menu Mahasiswa.";
            getch();
            goto mulai2;

        case 4:
            system("cls");
            {
                int f;
                cout << "Find by....\n1. Nama\n2. NIP\n3. Jurusan\n4. Fakultas \n\nPilihan Anda\n>>> ";
                cin >> f;
                if(f == 1){
                    system("cls");
                    cout << "Ketik Nama\n>>> ";
                    cin >> nama;
                    findNamaDosen(LDosen, nama);
                }else{
                    if(f == 2){
                        system("cls");
                        cout << "Ketik NIP\n>>> ";
                        cin >> nip;
                        findNIP(LDosen, nip);
                    }else{
                        if(f==3){
                            system("cls");
                            cout << "Ketik Jurusan\n>>> ";
                            cin >> jurusan;
                            findJurusanDosen(LDosen, jurusan);
                        }else{
                            if (f==4){
                                system("cls");
                                cout << "Ketik Fakultas\n>>> ";
                                cin >> fakultas;
                                findFakultasDosen(LDosen, fakultas);
                            }else{
                                    cout << "\nTidak ada pilihan tersebut. Silakan masukkan pilihan yang benar.\n>>> "; cin >> f;
                            }
                        }
                    }
                }
            }
            cout << "Press any key to back to Menu Dosen.";
            getch();
            goto mulai2;

        case 5:
            system("cls");
            system("cls");
            {cout << "______________________________________________________________________\n";
            cout<< "\nNama\t|\tNIP\t|\tFakultas\t|\tJurusan\n";
            cout << "______________________________________________________________________" << endl<<endl;
            printInfoDosen(LDosen);}
            cout << "Press any key to back to Menu Dosen.";
            getch();
            goto mulai2;

        case 6:
            system("cls");
            goto mulai;

        system("cls");
        default: system("cls"); cout << "!!!!!!!WARNING!!!!!!!\n\nTidak ada pilihan tersebut. Silakan masukkan pilihan yang benar.";
        getch();
        goto mulai2;
        }

    case 3:
        mulai3:
        system("cls");
        int pil3;
        cout << "-------PERWALIAN-------\n\n";
        cout << "1. Insert\n";
        cout << "2. Update\n";
        cout << "3. Delete\n";
        cout << "4. Find\n";
        cout << "5. List All\n";
        cout << "6. Back to Main Menu\n";
        cout << "\nMasukkan Pilihan Anda\n>>> ";
        cin >> pil3;

        switch (pil3){

        case 1:
            system("cls");
            {cout << "NIP Dosen\n>>> "; cin >> nip;
            P = findElmDosen(LDosen, nip);
            if(P==NULL){
                cout << "\nNIP tidak ditemukan.\n";
                cout << "Press any key to back to Menu Perwalian.";
                getch();
                goto mulai3;
            }
            cout << "\nNIM Mahasiswa\n>>> "; cin >> nim;
            C = findElmMhs(LMhs, nim);
            if(C==NULL){
                cout << "\nNIP tidak ditemukan.\n";
                cout << "Press any key to back to Menu Perwalian.";
                getch();
                goto mulai3;
            }
            R = alokasiRelasi(P,C);
            insertFirstRelasi(LRelasi,R);
            cout <<"\nInsert success.\n";}
            cout << "Press any key to back to Menu Perwalian.";
            getch();
            goto mulai3;

        case 2:
            system("cls");
            {cout << "NIP Dosen\n>>> "; cin >> nip;
            P = findElmDosen(LDosen, nip);
            if(P==NULL){
                cout << "\nNIP tidak ditemukan.\n";
                cout << "Press any key to back to Menu Perwalian.";
                getch();
                goto mulai3;
            }
            cout << "\nNIM Mahasiswa\n>>> "; cin >> nim;
            C = findElmMhs(LMhs, nim);
            if(C==NULL){
                cout << "\nNIP tidak ditemukan.\n";
                cout << "Press any key to back to Menu Perwalian.";
                getch();
                goto mulai3;
            }
            R = findElmRelasi(LRelasi, P, C);
            if(R==NULL){
                cout << "\nRelasi tidak ditemukan.\n";
                cout << "Press any key to back to Menu Perwalian.";
                getch();
                goto mulai3;
            }
            cout << "\nNIP Dosen baru\n>>> "; cin >> nip;
            cout << "\nNIM Mahasiswa baru\n>>> "; cin >> nim;
            P = findElmDosen(LDosen, nip);
            C = findElmMhs(LMhs, nim);
            parent(R) = P;
            child(R) = C;
            cout<<"\nUpdate success.\n";}
            cout << "Press any key to back to Menu Perwalian.";
            getch();
            goto mulai3;

        case 3:
            system("cls");
            adrRelasi P;
            deleteFirstRelasi(LRelasi, P);
            cout << "Delete success.\n";
            cout << "Press any key to back to Menu Perwalian.";
            getch();
            goto mulai3;

        case 4:
            system("cls");
            {
                int f;
                cout << "Find by....\n1. Nama dosen berdasarkan NIM Mahasiswa\n2. Nama mahasiswa berdasarkan NIP dosen\n3. Kelas dosen wali\n\nPilihan Anda\n>>> ";
                cin >> f;
                if(f == 1){
                    system("cls");
                    cout << "Ketik NIM\n>>> ";
                    cin >> nim;
                    R = first(LRelasi);
                    while(R!=NULL){
                        if(nim(child(R))==nim){
                           cout << "\nMahasiswa bernama "<<nama(child(R))<<" memiliki dosen wali: "<<endl;
                           cout<<"\nNama Dosen\t: " <<nama(parent(R));
                           cout<<"\nNIP\t\t: "<<nip(parent(R));
                           cout <<"\nJurusan\t\t: "<<jurusan(parent(R));
                           cout << "\nFakultas\t: "<<fakultas(parent(R))<<endl;
                           break;
                        }else{
                            R = next(R);
                        }
                    }
                    cout <<endl;
                }else{
                    if(f == 2){
                        system("cls");
                        cout << "Ketik NIP\n>>> ";
                        cin >> nip;
                        R = first(LRelasi);
                        while(nip!=nip(parent(R))){
                            R = next(R);
                        }
                        cout << "\nDosen bernama "<<nama(parent(R))<<" memiliki mahasiswa:"<<endl;
                        while(R!=NULL){
                            if(nip(parent(R))==nip){
                                cout <<"\nMahasiswa\t: "<<nama(child(R));
                                cout<<"\nNIM\t\t: "<<nim(child(R));
                                cout <<"\nKelas\t\t: "<<kelas(child(R));
                                cout <<"\nJurusan\t\t: "<<jurusan(child(R))<<endl;
                                R = next(R);
                            }else{
                                R = next(R);
                            }
                        }
                        cout << endl;
                    }else{
                        if(f==3){
                            system("cls");
                            cout << "Ketik Kelas\n>>> ";
                            cin >> kelas;
                            R = first(LRelasi);
                            while(R!=NULL){
                                if(kelas(child(R))==kelas){
                                    cout<< "\nWali dosen kelas "<<kelas(child(R))<<":"<<endl;
                                    cout<<"\nNama Dosen\t: " <<nama(parent(R));
                                    cout<<"\nNIP\t\t: "<<nip(parent(R));
                                    cout <<"\nJurusan\t\t: "<<jurusan(parent(R));
                                    cout << "\nFakultas\t: "<<fakultas(parent(R))<<endl;
                                    break;
                                }else{
                                    R = next(R);
                                }
                            }
                            cout <<endl;
                        }else{
                            cout << "\nTidak ada pilihan tersebut. Silakan masukkan pilihan yang benar.\n>>> "; cin >> f;
                        }
                    }
                }
            }
            cout << "Press any key to back to Menu Perwalian.";
            getch();
            goto mulai3;

        case 5:
            system("cls");
            {cout << "______________________________________________________________________\n";
            cout<< "\nDosen\t|\tMahasiswa\t|\tKelas\t|\tJurusan\n";
            cout << "______________________________________________________________________" << endl<<endl;
            printInfoRelasi(LRelasi);}
            cout << "Press any key to back to Menu Perwalian.";
            getch();
            goto mulai3;

        case 6:
            system("cls");
            goto mulai;

        system("cls");
        default: system("cls"); cout << "!!!!!!!WARNING!!!!!!!\n\nTidak ada pilihan tersebut. Silakan masukkan pilihan yang benar.";
        getch();
        goto mulai3;
        }

    case 4:
        system("cls");
        cout << "Thank you. \nHave a nice day. \nPress any key twice to exit.\n";
        break;

    system("cls");
    default: system("cls"); cout << "!!!!!!!WARNING!!!!!!!\n\nTidak ada pilihan tersebut. Silakan masukkan pilihan yang benar.";
    getch();
    goto mulai;
    }


    getch();
    return 0;
}
