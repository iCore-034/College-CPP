#include <iostream>
#include <vector>
#include <time.h>
#include <math.h>
#include <algorithm>
using namespace std;
int nerd(int err) {  // лндскэ ббедеммнцн вхякю пюглепю люяяхбю
	if (err <= 0)
	{
		cerr << "Okey, smart ass." << endl;
	}
	err = abs(err);
	return err;
}
class arraysXY {  // ярпсйрспю я назейрнл-люяяхбнл х лернднл йкюяяю
public:
	vector <int> nums;
	void fills(int weight) {  // лернд йкюяяю гюонкмъер люяяхб яксвюимшлх вхякюлх
		nums.push_back(1);
		for (int i = 0; i < weight; i++)
		{
			int fill_variable = rand() % 10+1;     // гдеяэ лнфел бшахпюрэ опедек япюбмхбюелшу щкелемрнб
			nums.push_back(fill_variable);         // %10+1 хяйкчвюер хг цемепюжхх 0, р.й. он сякнбхч люяяхбш мювхмючряъ я 1
		}

	}
};
void main() {
	srand(time(NULL));      // дкъ цемепюрнпю яксвюимшу вхяек
	// назъбкемхе дбсу оепелеммшу я лернднл х люяяхбнл
	arraysXY x_arr;
	arraysXY y_arr;
	
	cout << "Enter the number of items of array 1" << endl;
	int x, y = 0;
	cin >> x;
	x = nerd(x);   // лндскъжхъ вхякю
	x_arr.fills(x); // гюонкмемхе люяяхбю оепелеммни
	
	cout << "Enter the number of items of array 2" << endl;
	cin >> y;
	y = nerd(y);    // лндскъжхъ вхякю
	y_arr.fills(y);   // гюонкмемхе люяяхбю оепелеммни

	
	sort(x_arr.nums.begin(), x_arr.nums.end());
	sort(y_arr.nums.begin(), y_arr.nums.end());
	//----------------------------------------бшбнд люяяхбнб-------------------------------------------------
	printf(" ARRAY FIRST \n");
	for (int i = 0; i < x_arr.nums.size(); i++)
	{
		cout << x_arr.nums[i] << endl;
	}
	cout << endl;
	printf(" ARRAY SECOND\n");
	for (int i = 0; i < y_arr.nums.size(); i++)
	{
		cout << y_arr.nums[i] << endl;
	}
	cout << endl;
	//--------------------------------------------------------------------------------------------------------
	int x1 = 0;
	int y1 = 0;
	int counter = 0;
	while (x1 != x && y1 != y)
	{
		if (x_arr.nums[x1] < y_arr.nums[y1])
		{
			x1++;
		}
		else if (x_arr.nums[x1] > y_arr.nums[y1])
		{
			y1++;
		}
		else
		{
			x1++;
			y1++;
			counter++;
		}
	}
	cout << "The same elements = " << counter << endl; // бяецдю анкэье хкх пюбмн 1, р.й. он сякнбхч люяяхбш мювхмючряъ я 1
	system("pause");
}
