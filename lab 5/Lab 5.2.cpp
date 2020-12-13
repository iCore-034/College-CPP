// Напечатеть все перестановки от 1 до n, т.е. если n == 3, то результат (1 2 3),(1 3 2) и т.д.
#include <iostream>
#include <vector>
#include <time.h>
using namespace std;

int fact(int fact) {
	int num_fact = 1;
	int fact_minus = fact;
	for (int i = 0; i < fact; i++)
	{
		if (fact > 0)
		{
			num_fact *= fact_minus;
			fact_minus--;
		}
	}
	return num_fact;
}
class Massives
{public:
	
	vector<int> results;

};
void main() {
	srand(time(NULL));
	cout << "Enter the number of massive items: " << endl;
	int num = 0;
	cin >> num;

	vector<int> mass;
	for (int i = 1; i <= num; i++)
	{
		mass.push_back(i);
	}
	int factorial = fact(num);
	vector<Massives> replace(factorial);
	replace[0].results = mass;
	for (int j = 0; j < num; j++)
	{
		cout << replace[0].results[j] << " ";
	}
	cout << endl;
	int error = 1;
	int count_class_Massives = 0;
	while (error != factorial)
	{
		// создание случайно генерируемого массива и его проверка на несоответствие
		vector<int> trying;
		for (int k = 0; k < num; k++)
		{
			if (k == 0)
			{
				
				int to_trying = rand() % num + 1;
				trying.push_back(to_trying);
			}
			else
			{
				
				
			re:
				bool x = false;
				int to_trying = rand() % num + 1;
				for (int i = 0; i < trying.size(); i++)
				{
					if (to_trying == trying[i])
					{
						x = true;
					}
				}
				if (x == false)
				{
					trying.push_back(to_trying);
				}
				else
				{
					goto re;
				}
			}	
		}
		// проверка каждого нового массива на несоответствие с уже имеющимися массивами в классе Massive
		int Massive_error = 0;
		for (int i = 0; i < factorial; i++)
		{
			if (trying == replace[i].results)
			{
				Massive_error++;
			}
		}
		if (Massive_error == 0)
		{
			count_class_Massives++;
			replace[count_class_Massives].results = trying;
			cout << endl;
			for (int j = 0; j < num; j++)
			{
				cout << replace[error].results[j] << " ";
			}
			error++;
			cout << endl;
		}
	}
	system("pause");
}