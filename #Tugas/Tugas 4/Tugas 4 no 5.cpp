#include <iostream>

using namespace std;

void calculateTriangleSum(int n) {
    int total = 0;
    for (int i = n; i > 0; i -= 2) {
        for (int j = n; j >= i; j -= 2) {
            if (j != n) {
                cout << " + ";
            }
            cout << j;
            total += j;
        }
        cout << " = " << total << endl;
    }
}

int main() {
    calculateTriangleSum(10);
    return 0;
}
