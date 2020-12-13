#include <iostream>
#include <math.h>
using namespace std;
// ярпсйрспс дхб хяонкэгнбюк б йювеярбе люяяхбю я оепелеммшлх, 
// врнаш ме назъбкърэ йюфдши пюг мнбше
struct DIV {
	int a;         //
	int b;         //   назейрш 
	int quotient;  //	ярпсйрспш
	int residual;  //
};
DIV smth; //оепелеммюъ 1
DIV oper(DIV smth_2) {   //smth_2 - бмсрпеммъъ оепелеммюъ тсмйжхх (ме днцюдюкяъ, йюй ядекюрэ вепег сйюгюрекх)
	if (smth_2.a >=0)    // еякх вхякхрекэ анкэье 0
	{
		int a2 = smth_2.a;  //бмсрпеммъъ оепелеммюъ дкъ пюанрш я дюммшлх назейрю ярпсйрспш, врнаш ме мюпсьюрэ жекнярмнярэ назейрю
		for (int i = 0; a2 >= 0; i++)
		{
			a2 = a2 - smth_2.b;
			if (a2 >= 0)
			{
				smth_2.quotient++;  // вюярмне
			}
			else {
				smth_2.residual = a2 + smth_2.b; //нярюрнй
			}
		}
	}
	else //еякх вхякхрекэ лемэье 0
	{
		int a2 = smth_2.a;
		for (int i = 0; a2 <= 0; i++)
		{
			a2 = a2 + smth_2.b;
			if (a2 <= 0)
			{
				smth_2.quotient--; // вюярмне
			}
			else {
				smth_2.residual = a2 - smth_2.b; //нярюрнй
			}
		}
	}
	smth = smth_2;  
	return smth_2;
}
void main() {
	
	cout << "Input numerator: ";  // вхякхрекэ
		smth.a = 0;
		cin >> smth.a;
	cout << "Input denominator: ";  // гмюлемюрекэ
		smth.b = 0;
		cin >> smth.b;
		if (smth.b < 0)   //гюбепьемхе опнцпюллш опх ббнде 0, йюй гмюлемюрекъ
		{
			cerr << "Error: denominator is less or equal 0";
			exit(0);
		}
		oper(smth);  //ондявер вюярмнцн х нярюрйю
		cout << "The quotient = " << smth.quotient << endl;
		cout << "The residual = " << smth.residual << endl;
		system("pause");
}