#include <iostream>
#include <iomanip>
#include <vector>
#include <string>

using namespace std;

// Fungsi untuk menghitung nilai huruf berdasarkan nilai akhir
char hitungNilaiHuruf(float nilai) {
    if (nilai >= 80) return 'A';
    else if (nilai >= 70) return 'B';
    else if (nilai >= 56) return 'C';
    else if (nilai >= 47) return 'D';
    else return 'E';
}

int main() {
    int banyakData;
    cout << "Masukkan jumlah data mahasiswa: ";
    cin >> banyakData;

    vector<string> nama(banyakData);
    vector<float> nilaiUTS(banyakData), nilaiUAS(banyakData), nilaiAkhir(banyakData);
    vector<char> nilaiHuruf(banyakData);

    // Input data
    for (int i = 0; i < banyakData; ++i) {
        cout << "Data mahasiswa ke-" << i+1 << ":" << endl;
        cout << "Nama: ";
        cin.ignore();
        getline(cin, nama[i]);
        cout << "Nilai UTS: ";
        cin >> nilaiUTS[i];
        cout << "Nilai UAS: ";
        cin >> nilaiUAS[i];

        // Hitung nilai akhir
        nilaiAkhir[i] = (nilaiUAS[i] * 0.4) + (nilaiUTS[i] * 0.6);

        // Hitung nilai huruf
        nilaiHuruf[i] = hitungNilaiHuruf(nilaiAkhir[i]);
    }

    // Tampilkan tabel
    cout << setw(4) << "No" << setw(20) << "Nama Mahasiswa" << setw(10) << "Nilai UTS" << setw(10) << "Nilai UAS" << setw(13) << "Nilai Akhir" << setw(13) << "Nilai Huruf" << endl;
    cout << setfill('-') << setw(60) << "-" << setfill(' ') << endl;

    for (int i = 0; i < banyakData; ++i) {
        cout << setw(4) << i+1 << setw(20) << nama[i] << setw(10) << nilaiUTS[i] << setw(10) << nilaiUAS[i] << setw(13) << fixed << setprecision(1) << nilaiAkhir[i] << setw(13) << nilaiHuruf[i] << endl;
    }

    return 0;
}
