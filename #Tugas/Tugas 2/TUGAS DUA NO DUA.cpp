#include <iostream>
#include <string>
using namespace std;

int main() {
    // Variabel untuk menyimpan input
    string namaSiswa;
    double nilaiKeaktifan, nilaiTugas, nilaiUjian;
    
    // Input data siswa
    cout << "Masukkan Nama Siswa: ";
    getline(cin, namaSiswa);
    cout << "Masukkan Nilai Keaktifan: ";
    cin >> nilaiKeaktifan;
    cout << "Masukkan Nilai Tugas: ";
    cin >> nilaiTugas;
    cout << "Masukkan Nilai Ujian: ";
    cin >> nilaiUjian;
    
    // Proses menghitung nilai murni
    double nilaiMurniKeaktifan = nilaiKeaktifan * 0.20;
    double nilaiMurniTugas = nilaiTugas * 0.50;
    double nilaiMurniUjian = nilaiUjian * 0.30;
    
    // Menghitung nilai akhir
    double nilaiAkhir = nilaiMurniKeaktifan + nilaiMurniTugas + nilaiMurniUjian;
    
    // Menampilkan hasil
    cout << "\nNama Siswa: " << namaSiswa << endl;
    cout << "Nilai Murni Keaktifan: " << nilaiMurniKeaktifan << endl;
    cout << "Nilai Murni Tugas: " << nilaiMurniTugas << endl;
    cout << "Nilai Murni Ujian: " << nilaiMurniUjian << endl;
    cout << "Nilai Akhir: " << nilaiAkhir << endl;

    return 0;
}
