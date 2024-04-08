#include "BirthdayCandles.h"

int main() {
    int n = 0;
    int tallest = 0, blowable = 0;

    cout << "Input number of candles: ";
    cin >> n;

    vector<int> heights(n);
    for (int i = 0; i < n; i++) {
        cout << "Input height of candle " << i + 1 << ": ";
        cin >> heights[i];

        if (heights[i] > tallest) {
            tallest = heights[i];
            blowable = 1;
        }
        
        if (heights[i] == tallest) 
            blowable++;
    }

    cout << "Number of candles that can be blown out: " << blowable << endl << endl;

    system("pause");
    return 0;
}
