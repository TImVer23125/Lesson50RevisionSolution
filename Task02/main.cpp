#include "util.h"

int main() {
	double array[DEFAULT_SIZE];

	int size;

		cout << "Input size of array: ";
		cin >> size;

		cout << "Init array elements: ";
		for (int i = 0; i < size; i++)
		{
			cin >> array[i];
		}
		cout << fixed << setprecision(1);
	cout << "Array: " << convert(array, size) << endl;

	double count = count_sum_elements(array, size);

	cout << "Array elements sum is " << count << ".\n";

	return 0;
}