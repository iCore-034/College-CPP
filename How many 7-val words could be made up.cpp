// —колько семибуквенных слов можно
// составить из букв a и b так, чтобы после
// буквы a сто€ла хот€ бы одна буква b ?
// ќпределите рекуррентную формулу, по
// которой получаютс€ значени€ элементов
// последовательности.
// ¬ыведите все возможные комбинации
// слов.
#include <iostream>
#include <vector>
using namespace std;
void input(vector<int> vec) {
	if (vec[6] == 1)
		return;
	for (size_t i = 0; i < vec.size(); i++){
		if (vec[i] == 1)
			cout << "a ";
		else
			cout << "b ";
	}
	cout << "\n";
}
void check(vector<int> vec) {
	for (size_t i = 0; i < vec.size()-1; i++){
		if (vec[i] == 1 && vec[i+1] == 1)
			return;
		else if(i == vec.size()-2)
			input(vec);	
	}
}
void rec_oz(vector<int> oz) {
	if (oz.size() == 7) {
		check(oz);
		return;
	}
	oz.push_back(1);
	rec_oz(oz);
	oz.pop_back();
	oz.push_back(0);
	rec_oz(oz);
}
void main() {
	vector<int> oz;
	rec_oz(oz);
}