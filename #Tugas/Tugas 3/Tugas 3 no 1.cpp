#include <iostream>
#include <string>

using namespace std;

float hitung_rata_rata(float nilai1, float nilai2, float nilai3) {
    return (nilai1 + nilai2 + nilai3) / 3;
}

string tentukan_juara(float nilai_rata_rata) {
    if (nilai_rata_rata > 80) {
        return "Juara I";
    } else if (nilai_rata_rata > 75) {
        return "Juara II";
    } else if (nilai_rata_rata > 65) {
        return "Juara III";
    } else {
        return "Tidak Juara";
    }
}

int main() {
    string nama_siswa;
    float nilai1, nilai2, nilai3;

    cout << "Masukkan nama siswa: ";
    getline(cin, nama_siswa);
    cout << "Masukkan nilai pertandingan I: ";
    cin >> nilai1;
    cout << "Masukkan nilai pertandingan II: ";
    cin >> nilai2;
    cout << "Masukkan nilai pertandingan III: ";
    cin >> nilai3;

    float rata_rata = hitung_rata_rata(nilai1, nilai2, nilai3);
    string prestasi = tentukan_juara(rata_rata);

    cout << "Nama Siswa: " << nama_siswa << endl;
    cout << "Prestasi: " << prestasi << endl;

    return 0;
}
