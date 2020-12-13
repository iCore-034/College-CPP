#include <iostream>
#include <stack>
#include <vector>
#include <time.h>
using namespace std;
vector<int> arr;
stack<int> st1;
stack<int> st2;
void fill(vector<int>* arr) {
	if (!arr->empty())
	{
		st1.push(arr->front());
		arr->erase(arr->begin());
	}
	if (!arr->empty())
	{
		st2.push(arr->back());
		arr->pop_back();
		fill(arr);
	}
}
void main() {

	srand(time(NULL));

	cout << "Enter the lenght of array: ";
	int length = 0;
	cin >> length;
	
	int* to_mass = new int;
	for (int i = 0; i < length; i++)
	{
		*to_mass = rand() % 100;
		arr.push_back(*to_mass);
	}
	cout << "Elements of array: " << endl;
	for (size_t i = 0; i < arr.size(); i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	cout << endl;
	fill(&arr);
	cout << "Top of first stack: " << st1.top() << endl;
	cout << "Top of second stack: " << st2.top() << endl;
	//			array
	//	  1 2 3 4 5 6 7 8 9 0
	
	//   stack_1         stack_2
	//  1 2 3 4 5       0 9 8 7 6 

	system("pause");

}
