#include "util.h"

string convert(double array[], int size) {
	string s = "";

	for (int i = 0; i < size; i++)
	{
		s += to_string(array[i]) + " ";
	}

	return s;
}