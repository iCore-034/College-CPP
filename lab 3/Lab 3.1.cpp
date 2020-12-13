//#include <iostream>
//#include <vector>
//using namespace std;
//void equal(int inter, vector<int> vec) {         // опнбепйю, янбоюдюер кх вхякн я люяяхбнл опняршу вхяке
//	for (int i = 0; i < vec.size(); i++)         // еякх дю - гюбепьемхе опнцпюллш
//	{
//		if (inter == vec[i])
//		{
//			cout << "Your number is simple. Congratulations!" << endl;
//			exit(0);
//		}
//	}
//}
//void main() {
//	//2 147 483 647
//	vector<int> simple = { 2,3,5 };               // бейрнп опняршу вхяек
//	int numbers = 0;
//	for (int i = 6; numbers < 20000; i++)       // гдеяэ хглемъел пюглепмнярэ фекюелшу опнбепъелшу вхяек (яеивюя опнбепйю дн 20k)
//	{
//		if (i % 2 != 0 && i % 3 != 0 && i % 5 != 0)
//		{
//			numbers = i;
//			simple.push_back(numbers);  // сбекхвемхе бейрнпю опняршу вхяке
//		}
//	}
//	int interpret = 0;     //ббндхлне онкэгнбюрекел вхякн
//	cin >> interpret;
//	int false_counter = 0;
//	equal(interpret, simple);   //тсмйжхъ опнбепйх янбоюдемхъ я опняршлх вхякюлх
//	for (int i = 0; i < simple.size(); i++)
//	{
//		if (interpret % simple[i] == 0)// еякх вхякн декхряъ мю кчане хг опняршу, йпнле яюлнцн яеаъ - FALSE, бшунд
//		{
//			false_counter++; //еякх сякнбхе мхфе бмеярх ячдю, рн опх нопедекеммшу 
//		}					 //сякнбхъу б йнмянкх дбюфдш/рпхфдш х рд бшбедер яннаыемхе н меянбоюдемхх.
//	}
//	if (false_counter > 0) //янаямю сякнбхе мхфе))
//	{
//		cout << "Your number isn't simple." << endl;
//	}
//	system("pause");
//}