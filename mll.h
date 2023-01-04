#ifndef MLL_H_INCLUDED
#define MLL_H_INCLUDED

#include <iomanip>
#include <iostream>
using namespace std;

#define first(P) ((P).first)
#define infoDosen(P) ((P)->infoDosen)
#define nextDosen(P) ((P)->nextDosen)

#define infoMatkul(P) ((P)->infoMatkul)
#define nextMatkul(P) ((P)->nextMatkul)

struct infotypeDosen {
  string kodeDosen;
  string nama;
  string NIP;
  string jk;
};

struct infotypeMatkul {
  string kelas;
  string kodeMatkul;
  string namaMatkul;
  int sks;
};

typedef struct elementDosen *adr;
typedef struct elementMatkul *adrMatkul;

struct elementDosen {
  infotypeDosen infoDosen;
  adr nextDosen;
  adrMatkul nextMatkul;
};

struct elementMatkul {
  infotypeMatkul infoMatkul;
  adrMatkul nextMatkul;
};

struct listDosen {
  adr first;
};

// creating basic component
void createListDosen(listDosen &D);
void createElementDosen(infotypeDosen dosenBaru, adr &pDosen);
void createElementMatkul(infotypeMatkul matkulBaru, adrMatkul &pMatkul);

// inserting dosen
void insertFirstDosen(listDosen &D, adr pDosen);
void insertLastDosen(listDosen &D, adr pDosen);
void insertAfterDosen(listDosen &D, adr pDosen, adr prev);
void insertDosen(listDosen &D, adr pDosen);

// inserting child
void addChild(listDosen &D, adrMatkul pMatkul, string cDosen);

// SHOWING THINGS
void showDosenxMatkul(listDosen D, string dosen);
void showDosen(listDosen &D);

// SEARCHING
adr findDosen(listDosen D, string nama);
void findMatkulDosen(listDosen D, string cDosen, string matkul);

// deleting
void delFirstDosen(listDosen &D, adr &del);

void delMatkul(listDosen &d, adrMatkul &X, string kodeDosen);

#endif // MLL_H_INCLUDED
