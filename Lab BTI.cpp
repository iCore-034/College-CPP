#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;

class Student {
public:
	string second_name;
	double mark;
};

void sort(vector<Student>& vec, int& count) {
	int right_dont_work = 0;
	Student S;
	for (int i = 0; i < count -1; i++)
	{
		if (vec[i].mark > vec[i + 1].mark)
		{
			S = vec[i];
			vec[i] = vec[i+1];
			vec[i + 1] = S;
		}
		else {
			right_dont_work += 1;
		}
	}
	if (right_dont_work != count - 1)
	{
		sort(vec, count);
	}

}
void main()
{
	vector<Student> st;
	cout << "Input count of students." << endl;
	int count;
	cin >> count;

	double middle_result = 0;
	double mathload = 0;
	for (int i = 0; i < count; i++)
	{
		cout << "Enter second name of student and then enter his mark: " << endl;
		Student stud;
		cin >> stud.second_name;
		cin >> stud.mark;
		st.push_back(stud);
		middle_result += stud.mark;
		mathload += stud.mark * (i + 1);
	}
	middle_result = middle_result /count;
	sort(st, count);
	//////////////////////////////////////////////////////////// ÂÛÂÎÄ
	for (int i = 0; i < st.size(); i++)
	{
		cout << st[i].second_name;
		cout << " " << st[i].mark;
		cout << "\t";
		if (st[i].mark >middle_result)
		{
			cout << " - more middle.";
		}
		else
		{
			cout << " - less middle.";
		}
		cout << endl;
	}
	cout << "Mathload = " << mathload << endl;
	cout << "Dispersion = " << pow(mathload, 2) << endl;

	system("pause");
}