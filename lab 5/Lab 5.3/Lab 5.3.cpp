#include "factorial.h"
#include <iostream>
#include <vector>
#include <time.h>
using namespace std;
class Mass_vars
{
public:
	vector<int> arr_one_zero;
};
void main() {
	srand(time(NULL));

	cout << "Input count items in massive:" << endl;
	int count = 0;
	cin >> count;
	vector<int> nums(count);
	for (int i = 0; i < count; i++) // заполняем массив по усовию задачи {1..n}
	{
		nums[i] = i+1;
	}
	cout << "Subset count:" << endl;
	int subset = 0;
	cin >> subset;
	int count_subset = count - subset;
	int count_resets = ((fact(count)) / (fact(subset) * fact(count_subset)));
	vector<Mass_vars> resets(count_resets);
	int i = 0;
	mass_cycle_upgrade:
	for (; i < count_resets; i++)
	{
	try_again_reset:  
		// генерация случайной позиции для установки в неё единицы
		vector<int> random(count);
		for (int i = 0; i < subset; i++)
		{
		try_again_random:
			int rand_position = rand() % count;
			int randint = 1;
			if (random[rand_position] == 0)
			{
				random[rand_position] = randint;
			}
			else
			{
				goto try_again_random;
			}
		}
		// проверка, соответствует ли позиционно-рандомный массив из 0 и 1 
		// на схожесть с уже имеющимися таикими массивами в общем их числе
		if(i == 0)
		{
			resets[i].arr_one_zero = random;
			i++;
			goto mass_cycle_upgrade;
		}
		else
		{
			bool  x = false;
			for (int j = 0; j < resets.size(); j++)
			{
				if (resets[j].arr_one_zero == random)
				{
					x = true;
					goto try_again_reset;
				}
			}
			if (x == false)
			{
				resets[i].arr_one_zero = random;
				i++;
				goto mass_cycle_upgrade;
			}
			
				
		}
		
	}
	// Установка основных числе {1 .. n} в соответствии с массивами 0 и 1
	for (int i = 0; i < resets.size(); i++)
	{
		cout << endl;
		for (int j = 0; j < count; j++)
		{
			if (resets[i].arr_one_zero[j] == 1)
			{
				cout <<  nums[j] << " ";
			}
		}
		cout << endl;
	}
	system("pause");
}