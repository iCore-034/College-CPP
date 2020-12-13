#include <iostream>
#include <vector>
using namespace std;
int count_items;
vector<vector<int>> compare;
void output(vector<int> out) {

	bool exist = false;
	for (int i = 0; i < compare.size(); i++)
	{
		if (out == compare[i])
		{
			exist = true;
		}
	}
	if (exist == false)
	{
		compare.push_back(out);
		for (int i = 0; i < out.size(); i++)
		{
			cout << out[i] << " ";
		}
		cout << endl;
	}
}
vector<int> setter(vector<int> sec) {
	for (int i = 0; i < sec.size(); i++)
	{
		if (sec[i] == 0)
		{
			sec[i] = 1;
			output(sec); // функция проверки на уже выведенные сочетания позиций
			if ((i + 1) == sec.size())
			{
				return sec;
			}
			else
			{
				sec[i] = 0;
			}
		}
	}
	return sec;
}
void main() {
	
	cout << "Input count of items: ";
	cin >> count_items;
	int ones;
	cout << "Input count of one-digit: ";
	cin >> ones;
	cout << endl;

	// заполнение первых элементов нулевого массива единицами в количестве ones
	vector<int> replace(count_items);
	for (int i = 0; i < ones; i++)
		replace[i] = 1;

	vector<int> second_rep;   // массив, который будет отправлен в перебор и вывод

	// по сути, если элемент массива = 1, то удаляем эту единицу и отправляем массив на перебор
	// в котором каждый ноль заменится единицей и будет отравлен на проверку соответствия, т.е. 
	// если проверка прошла успешна ( массив не равен ни одному из предыдущих), то он выводится в консоль
	for (int i = 0; i < ones; i++)
	{
		if (replace[i] == 1)
		{
			second_rep = replace;
			second_rep[i] = 0;
			replace = setter(second_rep); // функция замены нуля единицей
		}
	}
}