#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <algorithm>

using namespace std;

struct Mahasiswa {
    string NIM;
    string nama;
    double nilaiAkhir;
};

bool compareNilai(Mahasiswa a, Mahasiswa b) {
    return a.nilaiAkhir > b.nilaiAkhir;
}

// Fungsi untuk menyimpan data ke file
void simpanDataKeFile(const string& filename, const vector<Mahasiswa>& data) {
    ofstream file(filename);
    if (file.is_open()) {
        for (const Mahasiswa& m : data) {
            file << m.NIM << "," << m.nama << "," << m.nilaiAkhir << endl;
        }
        file.close();
        cout << "Data berhasil disimpan ke file." << endl;
    } else {
        cout << "Gagal membuka file." << endl;
    }
}

// Fungsi untuk membaca data dari file
void bacaDataDariFile(const string& filename, vector<Mahasiswa>& data) {
    ifstream file(filename);
    if (file.is_open()) {
        Mahasiswa m;
        while (file >> m.NIM >> m.nama >> m.nilaiAkhir) {
            data.push_back(m);
        }
        file.close();
        cout << "Data berhasil dibaca dari file." << endl;
    } else {
        cout << "File tidak ditemukan." << endl;
    }
}

int main() {
    vector<Mahasiswa> mahasiswa;

    // ... (Kode untuk menu dan operasi lainnya)

    // Contoh cara memanggil fungsi simpanDataKeFile
    simpanDataKeFile("data_mahasiswa.txt", mahasiswa);

    // Contoh cara memanggil fungsi bacaDataDariFile
    bacaDataDariFile("data_mahasiswa.txt", mahasiswa);

    return 0;
}
