#include <iostream>
#include <string>
using namespace std;

float hitung_nilai_akhir(float keaktifan, float tugas, float ujian) {
    float nilai_murni_keaktifan = keaktifan * 0.20;
    float nilai_murni_tugas = tugas * 0.30;
    float nilai_murni_ujian = ujian * 0.50;
    return nilai_murni_keaktifan + nilai_murni_tugas + nilai_murni_ujian;
}

char tentukan_nilai_huruf(float nilai_akhir) {
    if (nilai_akhir > 80) {
        return 'A';
    } else if (nilai_akhir > 70) {
        return 'B';
    } else if (nilai_akhir > 56) {
        return 'C';
    } else if (nilai_akhir > 46) {
        return 'D';
    } else {
        return 'E';
    }
}

int main() {
    string nama_siswa;
    float nilai_keaktifan, nilai_tugas, nilai_ujian;

    cout << "Masukkan nama siswa: ";
    getline(cin, nama_siswa);
    cout << "Masukkan nilai keaktifan: ";
    cin >> nilai_keaktifan;
    cout << "Masukkan nilai tugas: ";
    cin >> nilai_tugas;
    cout << "Masukkan nilai ujian: ";
    cin >> nilai_ujian;

    float nilai_akhir = hitung_nilai_akhir(nilai_keaktifan, nilai_tugas, nilai_ujian);
    char nilai_huruf = tentukan_nilai_huruf(nilai_akhir);

    cout << "Nilai akhir " << nama_siswa << " adalah: " << nilai_akhir << endl;
    cout << "Nilai huruf " << nama_siswa << " adalah: " << nilai_huruf << endl;

    return 0;
}
