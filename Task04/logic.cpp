// Task 04 [The swap of extreme elements]
// Обмен экстремальных элементов
// 
// Дан вектор целочисленных значений. Необходимо спроектировать эффективный 
// алгоритм и реализовать функцию (или программу), которая меняет 
// экстремальные элементы вектора местами. Если экстремальных элементов
// несколько, то необходимо поменять последние найденные элементы.
// Дополнительно в функции необходимо предусмотреть механизм "защиты от дурака"
// для работы с некорректными данными.

#include "logic.h"

// CPU - O(N)
// RAM - O(1)
void swap_extrem_elements(int array[], int size) {
	int min_index = 0;
	int max_index = 0;

	for (int i = 1; i < size; i++)
	{
		if (array[i] <= array[min_index]) {
			min_index = i;
		}
		if (array[i] >= array[max_index]) {
			max_index = i;
		}
	}

	if (min_index != max_index) {
		int t = array[min_index];
		array[min_index] = array[max_index];
		array[max_index] = t;
	}
}