#include "TimeConversion.h"

int main() {
    int hours = 0, minutes = 0, seconds = 0;
    char amPm = ' ';

    cout << "Input hours: ";
    cin >> hours;

    cout << "Input minutes: ";
    cin >> minutes;

    cout << "Input seconds: ";
    cin >> seconds;

    cout << "Input A (AM)/P (PM): ";
    cin >> amPm;

    if (amPm == 'A') 
         if (hours == 12)
            hours = 0;
    else if (amPm == 'P')
        if (hours < 12)
            hours += 12;
    else {
        cout << "Invalid input for A (AM)/P (PM)." << endl;
        return 1;
    }

    cout << "Result: " << setw(2) << setfill('0') << hours << ":"
        << setw(2) << setfill('0') << minutes << ":"
        << setw(2) << setfill('0') << seconds << endl << endl;

    system("pause");
    return 0;
}
