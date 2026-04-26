#include "util.h"

void init_random(double array[], int size, int a, int b) {
	for (int i = 0; i < size; i++)
	{
		array[i] = rand() % (b - a + 1) + a;
	}
}

string convert(double array[], int size) {
	string s = "";

	for (int i = 0; i < size; i++)
	{
		s += to_string(array[i]) + " ";
	}

	return s;
}