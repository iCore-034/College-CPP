#include <stdlib.h>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
class mega_vectors {
public:
	vector<int> kind;
};
vector<mega_vectors> push;
int exiting_programm = 0;
void outputing(int count_el) {
	int correct_inp = 0;
	for (int i = 0; i < count_el; i++)
	{
		for (int j = 0; j < count_el; j++)
		{
			if (push[i].kind >= push[j].kind)
			{
				correct_inp++;
			}
		}
		if (correct_inp == count_el)
		{
			for (int k = 0; k < push[i].kind.size(); k++)
			{
				cout << push[i].kind[k];
			}
			cout << endl;
			push[i].kind.clear();
			exiting_programm++;
			if (exiting_programm > push.size())
			{
				exit(0);
			}
			outputing(correct_inp);
		}
		correct_inp = 0;
	}
}
void main()
{
	cout << "Input number of items: " << endl;
	int m = 0;
	cin >> m;
	vector<int> mas(m);
	int temp;
	for (int i = 0; i < mas.size(); i++)
	{
		mas[i] = 1;
	}
	temp = m - 1;
	mega_vectors can;
	int counter_elements = 0;
	while (mas[1] != 0)
	{
		for (int i = 0; i < m; i++)
		{
			if (i == m - 1 || mas[i+1] == 0)
			{
				can.kind.push_back(mas[i]);
				break;
			}
			else
			{
				can.kind.push_back(mas[i]);
			}
		}
		sort(can.kind.begin(), can.kind.end(), greater<int>());

		push.push_back(can);
		can.kind.clear();

		if (mas[temp] - 1 >= mas[temp - 1] + 1 && temp >= 1) mas[temp]--, mas[temp - 1]++;
		else {
			mas[temp - 1] += mas[temp];
			mas[temp--] = 0;
		}
		counter_elements++;
	}
	outputing(counter_elements);
}