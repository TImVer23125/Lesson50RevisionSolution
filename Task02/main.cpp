#include "util.h"

int main() {
	double array[DEFAULT_SIZE];

	int size;

	cout << "Input size of array: ";
	cin >> size;

	init_random(array, size, -50, 50);

	cout << fixed << setprecision(1);
	cout << "Array elements: ";
	for (int i = 0; i < size; i++)
	{
		cout << array[i] << " ";
	}

	double count = count_sum_elements(array, size);

	if (count == -1) {
		cout << "Error.Wrong size.Try again...\n";
		return 0;
	}

	cout << "\nArray elements sum is " << count <<".\n";

	return 0;
}