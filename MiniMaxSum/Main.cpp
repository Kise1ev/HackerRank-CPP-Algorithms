#include "MiniMaxSum.h"

int main() {
    unsigned long long minSum = numeric_limits<unsigned long long>::max();
    unsigned long long maxSum = 0;
    unsigned long long totalSum = 0;
    int n = 0;

    cout << "Input n: ";
    cin >> n;

    vector<unsigned long long> array(n);
    for (int i = 0; i < n; i++) {
        cout << "Input " << i + 1 << " value: ";
        cin >> array[i];

        totalSum += array[i];

        minSum = min(minSum, array[i]);
        maxSum = max(maxSum, array[i]);
    }

    cout << "Minimum amount (excluding maximum number): " << totalSum - maxSum << endl;
    cout << "Maximum amount (excluding the minimum number): " << totalSum - minSum << endl << endl;

    system("pause");
    return 0;
}
