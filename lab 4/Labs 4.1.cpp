#include <iostream>
#include <vector>
#include <algorithm> // янпрхпнбйю (мсфмю дкъ бшонкмемхъ сякнбхъ n*log n)
using namespace std;
void main() {
	vector<double> nums; // бяе вхякю люяяхбю
	nums.push_back(1);       // он сякнбхч гюдювх, люяяхб = [1...n], гмювхр оепбши щкелемр бяецдю 1
	int n = 0;
	cout << "Input count numbers.(Beginning is always == 1)" << endl;
	cin >> n; // йнкхвеярбн щкелемрнб люяяхбю лхмся 1
	cout << "Input numbers." << endl;
	for (int i = 0; i < n; i++)
	{
		try_again:
		double push = 0; // ме яйюгюмн, йюйнцн рхою днкфмш ашрэ вхякю
		cin >> push;
		if (push <= 0) // йнппейрмнярэ ббндю
		{
			cerr << "ERROR: you enter the wrong number. Try again." << endl;
			goto try_again;
		}
		nums.push_back(push); // гюонкмемхе люяяхбю
		
	}
	sort(nums.begin(), nums.end()); // янпрхпнбйю
	int counter = 0; // явервхй пюгкхвмшу вхяек
	for (int i = 0; i < n; i++)
	{
		if (nums[i] == nums[i + 1]){
			continue;
		}
		else {
			counter++;
		}
		if (i == n-1)
		{
			counter++;   // онякедмхи щкелемр хяундъ хг сякнбхи бшье, ме гюонкмъеряъ, 
						 // гмювхр бпсвмсч днаюбкъел й явервхйс 1
		}
	}
	cout << "Different numbers = " << counter << endl;
	system("pause");
 }