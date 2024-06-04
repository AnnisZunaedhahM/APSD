#include <iostream>
using namespace std;

// Fungsi untuk menghitung penjumlahan deret bilangan genap
int sumEven(int n) {
    int total = 0;
    for (int i = 2; i <= n; i += 2) {
        total += i;
    }
    return total;
}

// Fungsi untuk mencetak segitiga siku
void printEvenTriangle(int rows) {
    for (int i = 1; i <= rows; ++i) {
        int rowSum = sumEven(2 * i);
        for (int j = 2; j <= 2 * i; j += 2) {
            cout << j;
            if (j < 2 * i) {
                cout << " + ";
            }
        }
        cout << " = " << rowSum << endl;
    }
}

int main() {
    printEvenTriangle(5);
    return 0;
}
