#include <iostream>
using namespace std;

// Fungsi untuk menghitung perkalian deret bilangan genap
int multiplyEven(int n) {
    int result = 1;
    for (int i = 2 * n; i >= 2; i -= 2) {
        result *= i;
    }
    return result;
}

// Fungsi untuk mencetak segitiga siku terbalik
void printEvenTriangleReverse(int rows) {
    for (int i = rows; i >= 1; --i) {
        int rowProduct = multiplyEven(i);
        for (int j = 2 * i; j >= 2; j -= 2) {
            cout << j;
            if (j > 2) {
                cout << " + ";
            }
        }
        cout << " = " << rowProduct << endl;
    }
}

int main() {
    printEvenTriangleReverse(5);
    return 0;
}
