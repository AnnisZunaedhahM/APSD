#include <iostream>
using namespace std;

// Fungsi untuk menghitung tunjangan jabatan berdasarkan golongan
double hitungTunjanganJabatan(int golongan) {
    if (golongan == 1) {
        return 0.05;
    } else if (golongan == 2) {
        return 0.10;
    } else if (golongan == 3) {
        return 0.15;
    } else {
        return 0.0; // Golongan tidak valid
    }
}

// Fungsi untuk menghitung tunjangan pendidikan berdasarkan tingkat pendidikan
double hitungTunjanganPendidikan(string pendidikan) {
    if (pendidikan == "SMA") {
        return 0.025;
    } else if (pendidikan == "D1") {
        return 0.05;
    } else if (pendidikan == "D3") {
        return 0.20;
    } else if (pendidikan == "S1") {
        return 0.30;
    } else {
        return 0.0; // Tingkat pendidikan tidak valid
    }
}

// Fungsi untuk menghitung honor lembur
double hitungHonorLembur(int jamKerja) {
    if (jamKerja <= 8) {
        return 0.0; // Tidak ada lembur
    } else {
        return (jamKerja - 8) * 3500.0;
    }
}

int main() {
    int golongan, jamKerja;
    string pendidikan;

    // Input data karyawan
    cout << "Masukkan golongan karyawan (1/2/3): ";
    cin >> golongan;
    cout << "Masukkan tingkat pendidikan karyawan (SMA/D1/D3/S1): ";
    cin >> pendidikan;
    cout << "Masukkan jumlah jam kerja karyawan: ";
    cin >> jamKerja;

    // Hitung tunjangan jabatan, tunjangan pendidikan, dan honor lembur
    double tunjanganJabatan = hitungTunjanganJabatan(golongan) * 300000;
    double tunjanganPendidikan = hitungTunjanganPendidikan(pendidikan) * 300000;
    double honorLembur = hitungHonorLembur(jamKerja);

    // Hitung total gaji karyawan
    double totalGaji = 300000 + tunjanganJabatan + tunjanganPendidikan + honorLembur;

    // Output total gaji karyawan
    cout << "Total gaji karyawan adalah: Rp. " << totalGaji << endl;

    return 0;
}
