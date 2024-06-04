#include <iostream>

using namespace std;

void calculateTriangle(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        int oddNumber = 2 * i - 1;
        result *= oddNumber;
        cout << "1";
        for (int j = 3; j <= oddNumber; j += 2) {
            cout << " * " << j;
        }
        cout << " = " << result << endl;
    }
}

int main() {
    // Contoh penggunaan untuk mencetak segitiga siku dengan 5 baris
    calculateTriangle(5);

    return 0;
}

