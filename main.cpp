#include <iostream>
using namespace std;
#include "mll.h"
#include <stdlib.h>
#include <string>

int main() {
  // Membuat list untuk dosen
  listDosen D;
  createListDosen(D);

  // Membuat pointer.
  adr pDosen;
  adrMatkul pMatkul;

  // Membuat tipe data infotype.
  infotypeDosen dosen;
  infotypeMatkul matkul;

  // Memasukkan data-data dosen.
  dosen.kodeDosen = "KHS";
  dosen.nama = "Kirana Hati Saraswati";
  dosen.NIP = "120090";
  dosen.jk = "Wanita";
  createElementDosen(dosen, pDosen);
  insertDosen(D, pDosen);

  dosen.kodeDosen = "MHS";
  dosen.nama = "Mahes";
  dosen.NIP = "120091";
  dosen.jk = "Pria";
  createElementDosen(dosen, pDosen);
  insertDosen(D, pDosen);

  dosen.kodeDosen = "PLP";
  dosen.nama = "Priya Laika Padmini";
  dosen.NIP = "120081";
  dosen.jk = "Wanita";
  createElementDosen(dosen, pDosen);
  insertDosen(D, pDosen);

  dosen.kodeDosen = "PDN";
  dosen.nama = "Pandya Dwiki Nawal";
  dosen.NIP = "120082";
  dosen.jk = "Pria";
  createElementDosen(dosen, pDosen);
  insertDosen(D, pDosen);

  dosen.kodeDosen = "OZS";
  dosen.nama = "Oktavian Zayn Syuhaib";
  dosen.NIP = "130776";
  dosen.jk = "Pria";
  createElementDosen(dosen, pDosen);
  insertDosen(D, pDosen);

  dosen.kodeDosen = "APT";
  dosen.nama = "Ainayah Putri";
  dosen.NIP = "120092";
  dosen.jk = "Wanita";
  createElementDosen(dosen, pDosen);
  insertDosen(D, pDosen);

  dosen.kodeDosen = "JXC";
  dosen.nama = "Jaysheun Xavier Chua";
  dosen.NIP = "120093";
  dosen.jk = "Pria";
  createElementDosen(dosen, pDosen);
  insertDosen(D, pDosen);

  dosen.kodeDosen = "ANS";
  dosen.nama = "Ahmad Nur Surya";
  dosen.NIP = "120099";
  dosen.jk = "Pria";
  createElementDosen(dosen, pDosen);
  insertDosen(D, pDosen);

  dosen.kodeDosen = "WTO";
  dosen.nama = "William Tanuwijaya Orlanda";
  dosen.NIP = "199755";
  dosen.jk = "Pria";
  createElementDosen(dosen, pDosen);
  insertDosen(D, pDosen);

  dosen.kodeDosen = "MAP";
  dosen.nama = "Muchlis Ardian Panggabean";
  dosen.NIP = "177602";
  dosen.jk = "Pria";
  createElementDosen(dosen, pDosen);
  insertDosen(D, pDosen);

  // Memasukkan data-data mata kuliah ke dosen.
  matkul.kodeMatkul = "CII2B4";
  matkul.namaMatkul = "Struktur Data";
  matkul.sks = 4;
  matkul.kelas = "IF45-01";
  createElementMatkul(matkul, pMatkul);
  addChild(D, pMatkul, "ANS");

  matkul.kodeMatkul = "CII2B4";
  matkul.namaMatkul = "Struktur Data";
  matkul.sks = 4;
  matkul.kelas = "IF45-02";
  createElementMatkul(matkul, pMatkul);
  addChild(D, pMatkul, "APT");

  matkul.kodeMatkul = "CII2B4";
  matkul.namaMatkul = "Struktur Data";
  matkul.sks = 4;
  matkul.kelas = "IF45-03";
  createElementMatkul(matkul, pMatkul);
  addChild(D, pMatkul, "JXC");

  matkul.kodeMatkul = "CII2B4";
  matkul.namaMatkul = "Struktur Data";
  matkul.sks = 4;
  matkul.kelas = "IF45-04";
  createElementMatkul(matkul, pMatkul);
  addChild(D, pMatkul, "KHS");

  matkul.kodeMatkul = "CII2B4";
  matkul.namaMatkul = "Struktur Data";
  matkul.sks = 4;
  matkul.kelas = "IF45-05";
  createElementMatkul(matkul, pMatkul);
  addChild(D, pMatkul, "MHS");

  matkul.kodeMatkul = "CII2B4";
  matkul.namaMatkul = "Struktur Data";
  matkul.sks = 4;
  matkul.kelas = "IF45-06";
  createElementMatkul(matkul, pMatkul);
  addChild(D, pMatkul, "OZS");

  matkul.kodeMatkul = "CII2A3";
  matkul.namaMatkul = "Organisasi dan Arsitektur Komputer";
  matkul.sks = 3;
  matkul.kelas = "IF45-01";
  createElementMatkul(matkul, pMatkul);
  addChild(D, pMatkul, "KHS");

  matkul.kodeMatkul = "CII2A3";
  matkul.namaMatkul = "Organisasi dan Arsitektur Komputer";
  matkul.sks = 3;
  matkul.kelas = "IF45-02";
  createElementMatkul(matkul, pMatkul);
  addChild(D, pMatkul, "PDN");

  matkul.kodeMatkul = "CII2A3";
  matkul.namaMatkul = "Organisasi dan Arsitektur Komputer";
  matkul.sks = 3;
  matkul.kelas = "IF45-03";
  createElementMatkul(matkul, pMatkul);
  addChild(D, pMatkul, "PLP");

  matkul.kodeMatkul = "CII2A3";
  matkul.namaMatkul = "Organisasi dan Arsitektur Komputer";
  matkul.sks = 3;
  matkul.kelas = "IF45-04";
  createElementMatkul(matkul, pMatkul);
  addChild(D, pMatkul, "JXC");

  matkul.kodeMatkul = "CII2A3";
  matkul.namaMatkul = "Organisasi dan Arsitektur Komputer";
  matkul.sks = 3;
  matkul.kelas = "IF45-05";
  createElementMatkul(matkul, pMatkul);
  addChild(D, pMatkul, "APT");

  matkul.kodeMatkul = "CII2A3";
  matkul.namaMatkul = "Organisasi dan Arsitektur Komputer";
  matkul.sks = 3;
  matkul.kelas = "IF45-06";
  createElementMatkul(matkul, pMatkul);
  addChild(D, pMatkul, "MAP");

  matkul.kodeMatkul = "CII2C2";
  matkul.namaMatkul = "Analisis Kompleksitas Algoritma";
  matkul.sks = 2;
  matkul.kelas = "IF45-01";
  createElementMatkul(matkul, pMatkul);
  addChild(D, pMatkul, "WTO");

  matkul.kodeMatkul = "CII2C2";
  matkul.namaMatkul = "Analisis Kompleksitas Algoritma";
  matkul.sks = 2;
  matkul.kelas = "IF45-02";
  createElementMatkul(matkul, pMatkul);
  addChild(D, pMatkul, "MAP");

  matkul.kodeMatkul = "CII2C2";
  matkul.namaMatkul = "Analisis Kompleksitas Algoritma";
  matkul.sks = 2;
  matkul.kelas = "IF45-03";
  createElementMatkul(matkul, pMatkul);
  addChild(D, pMatkul, "PLP");

  matkul.kodeMatkul = "CII2C2";
  matkul.namaMatkul = "Analisis Kompleksitas Algoritma";
  matkul.sks = 2;
  matkul.kelas = "IF45-04";
  createElementMatkul(matkul, pMatkul);
  addChild(D, pMatkul, "OZS");

  matkul.kodeMatkul = "CII2C2";
  matkul.namaMatkul = "Analisis Kompleksitas Algoritma";
  matkul.sks = 2;
  matkul.kelas = "IF45-05";
  createElementMatkul(matkul, pMatkul);
  addChild(D, pMatkul, "KHS");

  matkul.kodeMatkul = "CII2C2";
  matkul.namaMatkul = "Analisis Kompleksitas Algoritma";
  matkul.sks = 2;
  matkul.kelas = "IF45-06";
  createElementMatkul(matkul, pMatkul);
  addChild(D, pMatkul, "PDN");

  matkul.kodeMatkul = "CII2D3";
  matkul.namaMatkul = "Matriks dan Ruang Vektor";
  matkul.sks = 3;
  matkul.kelas = "IF45-01";
  createElementMatkul(matkul, pMatkul);
  addChild(D, pMatkul, "OZS");

  matkul.kodeMatkul = "CII2D3";
  matkul.namaMatkul = "Matriks dan Ruang Vektor";
  matkul.sks = 3;
  matkul.kelas = "IF45-02";
  createElementMatkul(matkul, pMatkul);
  addChild(D, pMatkul, "KHS");

  matkul.kodeMatkul = "CII2D3";
  matkul.namaMatkul = "Matriks dan Ruang Vektor";
  matkul.sks = 3;
  matkul.kelas = "IF45-03";
  createElementMatkul(matkul, pMatkul);
  addChild(D, pMatkul, "MHS");

  matkul.kodeMatkul = "CII2D3";
  matkul.namaMatkul = "Matriks dan Ruang Vektor";
  matkul.sks = 3;
  matkul.kelas = "IF45-04";
  createElementMatkul(matkul, pMatkul);
  addChild(D, pMatkul, "APT");

  matkul.kodeMatkul = "CII2D3";
  matkul.namaMatkul = "Matriks dan Ruang Vektor";
  matkul.sks = 3;
  matkul.kelas = "IF45-05";
  createElementMatkul(matkul, pMatkul);
  addChild(D, pMatkul, "PDN");

  matkul.kodeMatkul = "CII2D3";
  matkul.namaMatkul = "Matriks dan Ruang Vektor";
  matkul.sks = 3;
  matkul.kelas = "IF45-06";
  createElementMatkul(matkul, pMatkul);
  addChild(D, pMatkul, "JXC");

  matkul.kodeMatkul = "CII2F3";
  matkul.namaMatkul = "Sistem Basis Data";
  matkul.sks = 3;
  matkul.kelas = "IF45-01";
  createElementMatkul(matkul, pMatkul);
  addChild(D, pMatkul, "KHS");

  matkul.kodeMatkul = "CII2F3";
  matkul.namaMatkul = "Sistem Basis Data";
  matkul.sks = 3;
  matkul.kelas = "IF45-02";
  createElementMatkul(matkul, pMatkul);
  addChild(D, pMatkul, "JXC");

  matkul.kodeMatkul = "CII2F3";
  matkul.namaMatkul = "Sistem Basis Data";
  matkul.sks = 3;
  matkul.kelas = "IF45-03";
  createElementMatkul(matkul, pMatkul);
  addChild(D, pMatkul, "MAP");

  matkul.kodeMatkul = "CII2F3";
  matkul.namaMatkul = "Sistem Basis Data";
  matkul.sks = 3;
  matkul.kelas = "IF45-04";
  createElementMatkul(matkul, pMatkul);
  addChild(D, pMatkul, "OZS");

  matkul.kodeMatkul = "CII2F3";
  matkul.namaMatkul = "Sistem Basis Data";
  matkul.sks = 3;
  matkul.kelas = "IF45-05";
  createElementMatkul(matkul, pMatkul);
  addChild(D, pMatkul, "APT");

  matkul.kodeMatkul = "CII2F3";
  matkul.namaMatkul = "Sistem Basis Data";
  matkul.sks = 3;
  matkul.kelas = "IF45-06";
  createElementMatkul(matkul, pMatkul);
  addChild(D, pMatkul, "PDN");

  // Komponen pendukung.
  adrMatkul X;
  string cDosen, Matkul;
  int choice;

  do {
    cout << "=== MENU DOSEN UNIVERSITAS X ===" << endl;
    cout << "1. Menampilkan Dosen Universitas X" << endl;
    cout << "2. Menampilkan Mata Kuliah Yang Diampu Dosen X" << endl;
    cout << "3. Mencari Relasi Dosen dengan Mata Kuliah X" << endl;
    cout << "4. Menghapus Data Mata Kuliah Dosen X" << endl;
    cout << "5. Delete First Dosen" << endl;
    cout << "6. Insert Dosen Baru" << endl;
    cout << "0. Keluar" << endl;
    cout << "Pilih Menu : ";
    cin >> choice;

    cout << endl;
    switch (choice) {
    case 0: {
      cout << "Keluar dari Program.." << endl;

      break;
    }
    case 1: {
      showDosen(D);
      break;
    }

    case 2: {
      cout << "Kode Dosen yang Akan Dicari : ";
      cin >> cDosen;
      showDosenxMatkul(D, cDosen);

      break;
    }

    case 3: {
      cout << "Kode Dosen yang Akan Dicari : ";
      cin >> cDosen;

      cout << "Nama Mata Kuliah yang Akan Dicari (awali dengan '-'): ";
      string s;
      char c;
      cin >> c;
      cin.ignore(0);
      getline(cin, s);

      findMatkulDosen(D, cDosen, s);

      break;
    }

    case 4: {
      cout << "Kode Dosen yang Akan Dihapus Mata Kuliah : ";
      cin >> cDosen;

      delMatkul(D, X, cDosen);

      break;
    }

    case 5: {
      cout << "======= Mendelete dosen paling awal =======" << endl;
      adr del;
      delFirstDosen(D, del);
      showDosen(D);
      break;
    }
    case 6: {
      adr dosenBaru = new elementDosen;
      cout << "Masukkan Nama Dosen yang Akan Ditambahkan : ";
      string newDosen;
      char lecture;
      cin >> lecture;
      cin.ignore(0);
      getline(cin, newDosen);
      infoDosen(dosenBaru).nama = newDosen;

      cout << endl;
      cout << "Masukkan Kode Dosen yang Akan Ditambahkan : ";
      cin >> infoDosen(dosenBaru).kodeDosen;
      cout << "Masukkan NIP Dosen : ";
      cin >> infoDosen(dosenBaru).NIP;
      cout << "Masukkan Jenis Kelamin Dosen : ";
      cin >> infoDosen(dosenBaru).jk;

      insertDosen(D, dosenBaru);
      break;
    }
    }
  } while (choice != 0);
}
