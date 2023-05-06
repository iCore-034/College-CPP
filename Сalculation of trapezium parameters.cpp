#include <iostream>
#include <string>
#include <list>
#include <algorithm>
#include <math.h>
using namespace std;

class Trapezium
{
public:

    double x1, x2, x3, x4, y1, y2, y3, y4;

    double A, B, C, D;
    double perimetrS = Perimetr();

    void Lines()
    {

        A = ((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
        B = ((x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2));
        C = ((x4 - x3) * (x4 - x3) + (y4 - y3) * (y4 - y3));
        D = ((x1 - x4) * (x1 - x4) + (y1 - y4) * (y1 - y4));

    }

    void OutLines()
    {
        Lines();
        cout << "������ ������� �: "<<  A << " ��" << endl;
        cout << "������ ������� B: "<< B << " ��" << endl;
        cout << "������ ������� C: " << C << " ��" << endl;
        cout << "������ ������� D: " << D << " ��" << endl;
    }

    double Perimetr()
    {
        double perimetr = A + B + C + D;
        return perimetrS = perimetr;
    }

    void  Heith()
    {
        double per = perimetrS / 2;
        double S = ((A + B) / (A - B)) * (sqrt((per - A) * (per - B) * (per - A - C) * (per - A - D))) / 10;
        if (S < 0)
        {
            cout << "������� �������� ��������." << endl;
        }
        else
        {
            cout << S << " ��";
        }
    }
};
double Input() {
    double j = 0;
    cin >> j;
    return j;
}
void main() {
    setlocale(0, "");
    Trapezium T;
    double i = 0;
    cout << "������� �������� ����� x1,y1: ";
    T.x1 = Input();
    T.y1 = Input();
    cout << "\n������� �������� ����� x2,y2: ";
    T.x2 = Input();
    T.y2 = Input();
    cout << "\n0������� �������� ����� x3,y3: ";
    T.x3 = Input();
    T.y3 = Input();
    cout << "\n������� �������� ����� x4,y4: ";
    T.x4 = Input();
    T.y4 = Input();


    cout << "\n���������: \n";
    T.OutLines();


    double per = T.Perimetr();
    cout << "\n�������� ��������: " << per << " ��" << endl;;

    cout << "\n������� ��������: ";
    T.Heith();
    cout << endl;
    system("pause");
}
    



