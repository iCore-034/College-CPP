#include <iostream>
#include <time.h>
#include <vector>
#include <algorithm>
#include <math.h>
#include <limits.h>
using namespace std;

vector<int> fill(int m, vector<int> mass_x_y) {
	vector<int> mass;
	for (int i = 0; i < m; i++)
	{
		int z = rand() % 10 + 1; // желаемая генерация чисел (здесь от 1 до 10)
		mass.push_back(z);
	}
	sort(mass.begin(), mass.end());
	mass_x_y = mass;
	return mass_x_y;
}
void main(){

	srand(time(NULL)); // ГЕНЕРАЦИЯ СЛУЧАЙНЫХ ЧИСЕЛ
	int x, y = 0;
	cout << "Enter number of items of X array and Y array:"<<endl;
	cin >> x >> y;
	vector<int> x_arr, y_arr;
	x_arr = fill(x, x_arr); // ЗАПОЛНЕНИЕ МАССИВА С 1 В НАЧАЛЕ И ЕГО СОРТИРОВКА
	y_arr = fill(y, y_arr);
	cout << "Choose your number: ";
	int guess = 0;
	cin >> guess;
	int x1 = 0;
	int y1 = 0;

	// вывод сгенерированных чисел ( аналогия на ввод числа вручную)
	for (int i = 0; i < x_arr.size(); i++)
	{
		cout << x_arr[i] << endl;
	}
	cout << endl;
	for (int i = 0; i < y_arr.size(); i++)
	{
		cout << y_arr[i] << endl;
	}
	// инициализация значений вектора в виде пар чисел х на у
	vector<vector<int>> xANDy;
	for (int i = 0; i < x_arr.size(); i++)
	{
		for (int j = 0; j < y_arr.size(); j++)
		{
				
				xANDy.push_back({ x_arr[i], y_arr[j] });
		}
	}
	// вывод пар чисел равный х на у ( просто посмотреть, верно ли работает программа)
	for (int i = 0; i < xANDy.size(); i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cout << xANDy[i][j] << endl;
		}
		cout << endl;
	}
	// вектор разницы загаданного числа с суммой чисел векторов
	vector<int> subtraction;
	for (int i = 0; i < xANDy.size(); i++)
	{
		int sub = abs(guess - (xANDy[i][0] + xANDy[i][1]));
		subtraction.push_back(sub);
	}
	// находим наименьшую разницу между загаданным числом и суммой элемента первого и второго массива
	int less = INT_MAX; // предел значения int
	int position_of_smallest = 0; /* переменная показывает позицию, в которой разница между guess и subtraction == наименьшая,
								   таким образом мы находим позицию двух чисел, сложение которых дает ближайшее или равное значение,
								   значению guess */
	for (int i = 0; i < subtraction.size(); i++)
	{
		if (subtraction[i] < less)                
		{
			less = subtraction[i];
			position_of_smallest = subtraction[i];
		}
	}
	// находим соответствующую пару
	for (int i = 0; i < subtraction.size(); i++)
	{
		if (position_of_smallest == subtraction[i])
		{
			cout << "The sum of numbers " << xANDy[i][0] << " and " << xANDy[i][1] << " which equal "
				<< xANDy[i][0] + xANDy[i][1] << " are nearest to your's choosen number." << endl;
			cout << "Diff == " << less << endl;
			exit(0);
		}
	}
	system("pause");
}