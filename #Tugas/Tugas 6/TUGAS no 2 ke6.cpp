#include <iostream>
using namespace std;

float hitung_honor(float jam_kerja) {
    float jam_normal = 8;
    float honor_harian = 100000; // misalnya honor harian adalah Rp. 100.000
    
    if (jam_kerja > jam_normal) {
        float kelebihan_jam = jam_kerja - jam_normal;
        float honor_lembur = kelebihan_jam * 5000; // misalnya tarif lembur per jam adalah Rp. 5.000
        return honor_harian + honor_lembur;
    } else {
        return honor_harian;
    }
}

int main() {
    int banyak_data;
    cout << "Masukkan jumlah data pegawai: ";
    cin >> banyak_data;

    for (int i = 0; i < banyak_data; ++i) {
        float jam_kerja;
        cout << "Masukkan jam kerja pegawai ke-" << i+1 << ": ";
        cin >> jam_kerja;

        float honor = hitung_honor(jam_kerja);
        cout << "Honor pegawai ke-" << i+1 << ": Rp. " << honor << endl;
    }

    return 0;
}
