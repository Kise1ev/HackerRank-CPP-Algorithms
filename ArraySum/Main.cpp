#include "ArraySum.h"

int main() {
	int n = 0;

	cout << "Input n: ";
	cin >> n;

	vector<int> array(n);
	for (int i = 0; i < n; i++) {
		cout << "Input " << i + 1 << " value: ";
		cin >> array[i];
	}

	int result = 0;
	for (int i = 0; i < array.size(); i++)
		result += array[i];
	cout << result << endl << endl;

	system("pause");
	return 0;
}
