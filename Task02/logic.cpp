// Task 02 [The sum of average elements]
// Сумма средних элементов
// 
// Дан вектор вещественных/дробных значений. Необходимо спроектировать эффективный
// алгоритм и реализовать функцию (или программу), которая находит сумму всех
// элементов вектора, абсолютная величина которых меньше среднего арифметического
// всех элементов. 
// Дополнительно в функции необходимо предусмотреть механизм "защиты от дурака"
// для работы с некорректными данными (в данном случае функция должна 
// возвращать значение -1).
// 
// Далее необходимо разработать полноценный или тестовый проект для полной 
// демонстрации работоспособности данной функции.


// CPU - O(N)
// RAM - O(1)
double count_sum_elements(double array[], int size){
	if (size <= 0) {
		return -1.0;
	}

	double total_sum = 0;

	for (int i = 0; i < size; i++)
	{
		total_sum += array[i];
	}

	double average = total_sum / size;

	double result_sum = 0.0;

	for (int i = 0; i < size; i++)
	{
		double absolute_value = array[i] < 0 ? -array[i] : array[i];

		if (absolute_value < average) {
			result_sum += array[i];
		}
	}

	return result_sum;
}