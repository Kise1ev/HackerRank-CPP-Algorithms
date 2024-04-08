#include "StairCase.h"

int main() {
    int n = 0;

    cout << "Input n: ";
    cin >> n;

    for (int row = 1; row <= n; row++) {
        for (int space = 1; space <= n - row; space++) 
            cout << " ";
        for (int symbol = 1; symbol <= row; symbol++)
            cout << "#";
        cout << endl;
    }

    cout << endl;

    system("pause")
    return 0;
}
