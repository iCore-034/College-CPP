#include <iostream>
using namespace std;

int main() {

	int thousand = 1000;
	cout << "Enter the value: " << endl;
	int money = 0 ;
	cin >> money;
	// a = 500; b = 200; c = 100; d = 50; e = 10; f = 5; g = 2; h = 1;
	int difference = thousand - money;

	if (money < 1000 || money >= 0)
	{
		cout << "Variants of your delivery: " << endl;
		for (int a = 0; a < 1000; a+=500)
		{
			for (int b = 0; b < 1000; b+=200)
			{
				for (int c = 0; c < 1000; c+=100)
				{
					for (int d = 0; d < 1000; d+=50)
					{
						for (int e = 0; e < 1000; e+=10)
						{
							for (int f = 0; f < 1000; f+=5)
							{
								for (int g = 0; g < 1000; g +=2)
								{
									for (int h = 0; h < 1000; h++)
									{
										if (difference == a + b + c + d + e + f + g + h)
										{
											// Cheching 0-value variable and deliting it.
											if (a != 0){
												cout << "500p = " << a / 500 << endl;
											}
											if (b != 0) {
												cout << "200p = " << b / 200 << endl;
											}
											if (c != 0){
												cout << "100p = " << c / 100 << endl;
											}
											if (d != 0) {
												cout << "50p  = " << d / 50 << endl;
											}
											if (e != 0) {
												cout << "10p  = " << e / 10 << endl;
											}
											if (f != 0) {
												cout << "5p   = " << f / 5 << endl;
											}
											if (g != 0) {
												cout << "2p   = " << g / 2 << endl;
											}
											if (h != 0) {
												cout << "1p   = " << h << endl;
											}
											cout << "-------------------------------------" << endl;
										}
										else {
											continue;
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	else if (money > 1000 || money < 0) {
		cout << "Incorrect data." << endl;

	}

	system("pause");
	return 0;
}