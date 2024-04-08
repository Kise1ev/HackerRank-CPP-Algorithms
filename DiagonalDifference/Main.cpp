#include "DiagonalDifference.h"

int main() {
    int n = 0;

    cout << "Input n: ";
    cin >> n;

    vector<vector<int>> array(n, vector<int>(n));
    cout << "Input " << n << " numbers separated by a space: " << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> array[i][j];
        }
    }

    int rightSum = 0, leftSum = 0;
    for (int i = 0; i < array.size(); i++) {
        rightSum += array[i][i];
        leftSum += array[i][array.size() - 1 - i];
    }
    int result = abs(rightSum - leftSum);
    cout << "Result: " << result << endl << endl;

    system("pause");
    return 0;
}
