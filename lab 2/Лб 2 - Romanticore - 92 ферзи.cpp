#include <iostream>
#include <vector> // Just for fun
using namespace std; 
const int eight = 8; // йнмярюмрю (ножхнмюкэмн), хяонкэгсеряъ б тсмйжхх "co" (ChekingOut)
int counter_results = 0; //явервхй бепмшу пегскэрюрнб
// люяяхб сярюмнбйх х намнбкемхъ тепгеи
int comp[8][8] =
{/*0*/{ 0, 0, 0, 0, 0, 0, 0, 0},
/*1*/ { 0, 0, 0, 0, 0, 0, 0, 0},
/*2*/ { 0, 0, 0, 0, 0, 0, 0, 0},
/*3*/ { 0, 0, 0, 0, 0, 0, 0, 0},
/*4*/ { 0, 0, 0, 0, 0, 0, 0, 0},
/*5*/ { 0, 0, 0, 0, 0, 0, 0, 0},
/*6*/ { 0, 0, 0, 0, 0, 0, 0, 0},
/*7*/ { 0, 0, 0, 0, 0, 0, 0, 0} };
/////// 0   1   2   3   4   5   6   7


// бейрнп-сйюгюрекэ онкнфемхъ тепгъ мю дняйе, нм фе онйюгшбюер, йюй дняйю пюяонкнфемю
vector<vector<int>> variants =
{/*0*/{ 1,  2,  3,  4,  5,  6,  7,  8},
/*1*/ { 9, 10, 11, 12, 13, 14, 15, 16},
/*2*/ {17, 18, 19, 20, 21, 22, 23, 24},
/*3*/ {25, 26, 27, 28, 29, 30, 31, 32},
/*4*/ {33, 34, 35, 36, 37, 38, 39, 40},
/*5*/ {41, 42, 43, 44, 45, 46, 47, 48},
/*6*/ {49, 50, 51, 52, 53, 54, 55, 56},
/*7*/ {57, 58, 59, 60, 61, 62, 63, 64} };

//тсмйжхъ намскемхъ люяяхбю дкъ якедсчыеи опнбепйх
void zeroing() {
	for (int k = 0; k < eight; k++)
	{
		for (int l = 0; l < eight; l++)
		{
			comp[k][l] = 0;
		}
	}
}
// ялемю едхмхж мю вхякеммне онкнфемхе тепгъ мю дняйе
void printing() {
		for (int k = 0; k < eight; k++)
		{
			for (int l = 0; l < eight; l++)
			{
				if (comp[k][l] == 1)
				{
					comp[k][l] = variants[k][l];
				}
			}
		}
		for (int k = 0; k < eight; k++)
		{
			for (int l = 0; l < eight; l++)
			{
				cout << comp[k][l] << " ";
			}
			cout << endl;
		}
		cout << endl;
		counter_results++;
		cout << "RESULT No"<<counter_results << endl;
}
//опнбепйю онкнфемхъ тепгъ он бепрхйюкх, цнпхгнмрюкх х наехл дхюцнмюкъл
bool co(int i, int j) {
	//right
	for (int a = 1; a < eight - j; a++)
	{
		if (comp[i][j] == comp[i][j + a])
		{
			return false;
		}
	}
	//left
	for (int b = 1; b < j + 1; b++)
	{
		if (comp[i][j] == comp[i][j - b])
		{
			return false;
		}
	}
	//down
	for (int e = 1; e < eight - i; e++)
	{
		if (comp[i][j] == comp[i + e][j])
		{
			return false;
		}
	}
	//up
	for (int f = 1; f < i + 1; f++)
	{
		if (comp[i][j] == comp[i - f][j])
		{
			return false;
		}
	}
	//right-down
	for (int c = 1; c < eight - i && c < eight - j; c++)
	{
		if (comp[i][j] == comp[i + c][j + c])
		{
			return false;
		}
	}
	//left-up
	for (int d = 1; d < i + 1 && d < j + 1; d++)
	{
		if (comp[i][j] == comp[i - d][j - d])
		{
			return false;
		}
	}
	//left_down
	for (int g = 1; g < eight - i && g < j + 1; g++)
	{
		if (comp[i][j] == comp[i + g][j - g])
		{
			return false;
		}
	}
	// right_up
	for (int h = 1; h < i + 1 && h < eight - j; h++)
	{
		if (comp[i][j] == comp[i - h][j + h])
		{
			return false;
		}
	}
	return true;
}
// оепеанп онкнфемхи тепгеи
void setter() {
	for (int z = 0; z < eight; z++)
	{
		for (int x = 0; x < eight; x++)
		{
			for (int c = 0; c < eight; c++)
			{
				for (int v = 0; v < eight; v++)
				{
					for (int b = 0; b < eight; b++)
					{
						for (int n = 0; n < eight; n++)
						{
							for (int m = 0; m < eight; m++)
							{
								for (int s = 0; s < eight; s++)
								{
									comp[0][z] = comp[1][x] = comp[2][c] = comp[3][v] = comp[4][b] = comp[5][n] = comp[6][m] = comp[7][s] = 1;
									
									if (co(0, z)&&co(1, x)&&co(2, c)&&co(3, v)&&co(4, b)&&co(5, n)&&co(6, m)&&co(7, s))
									{
										printing();
										zeroing();
									}
									zeroing();
								}
							}
						}
					}
				}
			}
		}
	}
}
int main() {
	setter();
	system("pause");
	return 0;
}