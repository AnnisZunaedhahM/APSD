#include <iostream>
using namespace std;

int main() {
    int n = 10;
    int total = 0;

    cout << "Hasil penjumlahan 10 deret bilangan ganjil: ";
    for (int i = 1; i <= n; ++i) {
        total += 2 * i - 1;
        cout << 2 * i - 1;
        if (i < n) {
            cout << " + ";
        }
    }
    cout << " = " << total << endl;

    return 0;
}
