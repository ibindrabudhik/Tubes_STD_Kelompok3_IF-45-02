#include "mll.h"
#include <iostream>

// MEMBUAT LIST DOSEN
void createListDosen(listDosen &D) { first(D) = NULL; };

// MEMBUAT ELEMENT DOSEN (PARENT)
void createElementDosen(infotypeDosen dosenBaru, adr &pDosen) {
  pDosen = new elementDosen;
  infoDosen(pDosen) = dosenBaru;
  nextMatkul(pDosen) = NULL;
  nextDosen(pDosen) = NULL;
};

// MEMBUAT ELEMENT MATKUL(CHILD)
void createElementMatkul(infotypeMatkul matkulBaru, adrMatkul &pMatkul) {
  pMatkul = new elementMatkul;
  infoMatkul(pMatkul) = matkulBaru;
  nextMatkul(pMatkul) = NULL;
};

// PROCEDURE INSERT PADA DOSEN
void insertFirstDosen(listDosen &D, adr pDosen) {
  if (first(D) == NULL) {
    first(D) = pDosen;
  } else {
    nextDosen(pDosen) = first(D);
    first(D) = pDosen;
  }
};

void insertLastDosen(listDosen &D, adr pDosen) {
  if (first(D) == NULL) {
    first(D) = pDosen;
  } else {
    adr Q = first(D);
    while (nextDosen(Q) != NULL) {
      Q = nextDosen(Q);
    }
    nextDosen(Q) = pDosen;
  }
};

void insertAfterDosen(listDosen &D, adr pDosen, adr prev) {
  nextDosen(pDosen) = nextDosen(prev);
  nextDosen(prev) = pDosen;
};

void insertDosen(listDosen &D, adr pDosen) {
  adr find = findDosen(D, infoDosen(pDosen).kodeDosen);
  if (find == NULL) {
    if (first(D) == NULL) {
      insertFirstDosen(D, pDosen);
    } else if (infoDosen(pDosen).kodeDosen < infoDosen(first(D)).kodeDosen) {
      insertFirstDosen(D, pDosen);
    } else {
      if (nextDosen(first(D)) == NULL) {
        insertLastDosen(D, pDosen);
      } else {
        adr prev = first(D);
        adr prevrev = first(D);
        while (infoDosen(pDosen).kodeDosen > infoDosen(prev).kodeDosen &&
               nextDosen(prev) != NULL) {
          prevrev = prev;
          prev = nextDosen(prev);
        }
        if (nextDosen(prev) == NULL) {
          if (infoDosen(pDosen).kodeDosen < infoDosen(prev).kodeDosen) {
            insertAfterDosen(D, pDosen, prevrev);
          } else {
            insertLastDosen(D, pDosen);
          }
        } else {
          insertAfterDosen(D, pDosen, prevrev);
        }
      }
    }
  } else {
    cout << "Dosen " << infoDosen(pDosen).nama << " sudah terinput" << endl;
  }
};

// procedure delete
void delFirstDosen(listDosen &D, adr &del) {
  if (first(D) == NULL) {
    cout << "List Kosong !" << endl;
  } else if (first(D) != NULL) {
    del = first(D);
    adrMatkul X = nextMatkul(del);
    delMatkul(D, X, infoDosen(del).kodeDosen);
    first(D) = nextDosen(del);
    nextDosen(del) = NULL;
  }
}

void delLastDosen(listDosen &D, adr &del) {
  if (first(D) == NULL) {
    cout << "List Kosong !" << endl;
  } else if (nextDosen(first(D)) == first(D)) {
    first(D) = NULL;
  } else {
    adr q = first(D);
    while (nextDosen(nextDosen(q)) != first(D)) {
      q = nextDosen(q);
    }
    del = nextDosen(q);
    nextDosen(q) = first(D);
  }
}

// adding and showing
// menampilkan data dosen
void showDosen(listDosen &D) {
  adr Q = first(D);
  cout << "=================[DATA DOSEN]=================" << endl;
  while (Q != NULL) {
    cout << "Kode Dosen      : " << infoDosen(Q).kodeDosen << endl;
    cout << "Nama Dosen      : " << infoDosen(Q).nama << endl;
    cout << "Jenis Kelamin   : " << infoDosen(Q).jk << endl;
    cout << "NIP Dosen       : " << infoDosen(Q).NIP << endl;
    cout << endl;
    Q = nextDosen(Q);
  }
};

void addChild(listDosen &D, adrMatkul pMatkul, string cDosen) {
  adr lecturer = findDosen(D, cDosen);
  if (nextMatkul(lecturer) == NULL) {
    nextMatkul(lecturer) = pMatkul;
  } else {
    nextMatkul(pMatkul) = nextMatkul(lecturer);
    nextMatkul(lecturer) = pMatkul;
  }
};

// menampilkan data dosen tertentu dengan mata kuliah yang diampunya.
void showDosenxMatkul(listDosen D, string dosen) {
  adr Q = first(D);
  adrMatkul X;
  int i = 0;
  int totSKS = 0;

  while ((Q != NULL) && (infoDosen(Q).kodeDosen != dosen)) {
    Q = nextDosen(Q);
  }
  cout << "=============[DATA DOSEN]==================" << endl;
  cout << "Kode Dosen       : " << infoDosen(Q).kodeDosen << endl;
  cout << "Nama Dosen       : " << infoDosen(Q).nama << endl;
  cout << "NIP              : " << infoDosen(Q).NIP << endl;
  cout << "===========================================" << endl;
  X = nextMatkul(Q);
  if (X == NULL) {
    cout << "Dosen tidak mengampu mata kuliah apapun" << endl;
  } else {
    cout << "============[DATA MATA KULIAH]=============" << endl;
    while (X != NULL) {
      cout << "Kelas              : " << infoMatkul(X).kelas << endl;
      cout << "Kode Mata Kuliah   : " << infoMatkul(X).kodeMatkul << endl;
      cout << "Nama Mata Kuliah   : " << infoMatkul(X).namaMatkul << endl;
      cout << "SKS                : " << infoMatkul(X).sks << endl;
      i++;
      totSKS = totSKS + infoMatkul(X).sks;
      X = nextMatkul(X);
      cout << endl;
    }
    cout << endl;
    cout << "Total SKS               : " << totSKS << endl;
    cout << "Total Kelas Yang Diampu : " << i << endl;
    cout << "===========================================" << endl;
  }
}

adr findDosen(listDosen D, string kodeDosen) {
  adr Q = first(D);
  while (Q != NULL && infoDosen(Q).kodeDosen != kodeDosen) {
    Q = nextDosen(Q);
  }
  return Q;
};

// mencari tahu apakah seorang dosen sedang mengampu mata kuliah tsb.
void findMatkulDosen(listDosen D, string cDosen, string matkul) {
  adr Q = findDosen(D, cDosen);
  adrMatkul X = nextMatkul(Q);
  while (X != NULL && infoMatkul(X).namaMatkul != matkul) {
    X = nextMatkul(X);
  }
  if (X == NULL) {
    cout << "Dosen " << infoDosen(Q).nama << " tidak mengampu mata kuliah "
         << matkul << endl;
  } else {
    cout << "Dosen " << infoDosen(Q).nama << " mengampu mata kuliah " << matkul
         << endl;
  }
  cout << endl;
};

// deleting.
//  menghapus semua mata kuliah dosen
void delMatkul(listDosen &d, adrMatkul &X, string kodeDosen) {
  adr dosen = findDosen(d, kodeDosen);
  X = nextMatkul(dosen);
  if (X == NULL) {
    cout << "Dosen tidak memiliki mata kuliah apapun untuk dihapus" << endl;
  } else {
    while (X != NULL) {
      nextMatkul(dosen) = nextMatkul(X);
      nextMatkul(X) = NULL;
      X = nextMatkul(dosen);
      cout << "Mata kuliah telah dihapus" << endl;
    }
  }
};

