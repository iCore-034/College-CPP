#include <iostream>
#include <vector>
#include <time.h>
using namespace std;
vector<int> sequence;
void output() {        // Вывод рабочего вектора
	for (size_t i = 0; i < sequence.size(); i++)
		cout << sequence[i] << " ";
	
	cout << endl;
}
void replace(){        // Рекурсия при переменной stop == true
	bool stop = false; // Если переменная остается false, то осуществляется выход из программы
	for (int i = 0; i < sequence.size(); i++)
		if (i != 0 && (sequence[i] % 2 == 0) && (sequence[i-1]% 2 == 1))
		{
			int timing;
			timing = sequence[i - 1];
			sequence[i - 1] = sequence[i];
			sequence[i] = timing;
			stop = true;
		}

	if (stop == false)
	{
		output();
		exit(0);
	}
	replace();
}
void main() {
	srand(time(NULL));
	cout << "Input count elements: " << endl;
	int elements = 0;
	cin >> elements;
	for (int i = 0; i < elements; i++)
	{
		int numbers = rand() % 100;
		sequence.push_back(numbers);
	}
	output();           // Просмотр случайно сгенерированных элементов
	replace();          // Функция перестановки
}