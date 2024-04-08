#include "PlusMinus.h"

int main() {
    int n = 0;
    int posCount = 0, negCount = 0, zeroCount = 0;

    cout << "Input n: ";
    cin >> n;

    vector<int> array(n);
    for (int i = 0; i < n; i++) {
        cout << "Input " << i + 1 << " value: ";
        cin >> array[i];

        if (array[i] > 0)
            posCount++;
        else if (array[i] < 0)
            negCount++;
        else if (array[i] == 0)
            zeroCount++;
        else {
            cout << "Error! Invalid input." << endl;
            return 1;
        }
    }

    double posFract = static_cast<double>(posCount) / n;
    double negFract = static_cast<double>(negCount) / n;
    double zeroFract = static_cast<double>(zeroCount) / n;

    cout << "Proportion of positive numbers: " << setprecision(6) << posFract << endl;
    cout << "Proportion of negative numbers: " << setprecision(6) << negFract << endl;
    cout << "Proportion of zero numbers: " << setprecision(6) << zeroFract << endl << endl;

    return 0;
}