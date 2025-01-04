#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Pengeluaran {
    string kategori;
    double jumlah;
};

int main() {
    double saldoAwal, totalPengeluaran = 0;
    vector<Pengeluaran> pengeluaran;

    cout << "Selamat datang di Aplikasi Keuangan Harian!" << endl;
    cout << "Masukkan saldo awal Anda: ";
    cin >> saldoAwal;

    int pilihan;
    do {
        cout << "\nMenu Utama:" << endl;
        cout << "1. Tambah Pengeluaran" << endl;
        cout << "2. Tampilkan Total Pengeluaran" << endl;
        cout << "3. Tampilkan Sisa Saldo" << endl;
        cout << "4. Keluar" << endl;
        cout << "Pilih opsi (1-4): ";
        cin >> pilihan;

        switch (pilihan) {
            case 1: {
                Pengeluaran pengeluaranBaru;
                cout << "Masukkan nama kategori pengeluaran: ";
                cin >> pengeluaranBaru.kategori;
                cout << "Masukkan jumlah pengeluaran: ";
                cin >> pengeluaranBaru.jumlah;
                pengeluaran.push_back(pengeluaranBaru);
                totalPengeluaran += pengeluaranBaru.jumlah;
                saldoAwal -= pengeluaranBaru.jumlah;
                cout << "Pengeluaran berhasil ditambahkan!" << endl;
                break;
            }
            case 2:
                cout << "Total pengeluaran: Rp" << totalPengeluaran << endl;
                break;
            case 3:
                cout << "Sisa saldo Anda: Rp" << saldoAwal << endl;
                break;
            case 4:
                cout << "Terima kasih telah menggunakan Aplikasi Keuangan Harian!" << endl;
                break;
            default:
                cout << "Pilihan tidak valid." << endl;
        }
    } while (pilihan != 4);

    return 0;
}
