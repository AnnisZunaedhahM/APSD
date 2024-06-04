#include <iostream>
using namespace std;

int main() {
    int n = 10;
    int total = 0;

    for (int i = 1; i <= n; ++i) {
        total += 2 * i;
    }

    cout << "Hasil penjumlahan 10 deret bilangan genap: ";
    for (int i = 1; i <= n; ++i) {
        cout << 2 * i;
        if (i < n) {
            cout << " + ";
        }
    }
    cout << " = " << total << endl;

    return 0;
}
