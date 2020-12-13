#include <iostream>
#include <vector> // Just for fun
using namespace std;
int items_desk; //  хяонкэгсеряъ б тсмйжхх "co" (ChekingOut)
int counter_results = 0; //явервхй бепмшу пегскэрюрнб
// люяяхб сярюмнбйх х намнбкемхъ тепгеи
vector<vector<int>> comp;
void zeroing_main_vector() {
	vector<vector<int>> comp_twin(items_desk, vector<int>(items_desk, 0));
	comp = comp_twin;
}
// бейрнп-сйюгюрекэ онкнфемхъ тепгъ мю дняйе, нм фе онйюгшбюер, йюй дняйю пюяонкнфемю
vector<vector<int>> variants;
void digit_position_of_F() {
	vector<vector<int>> variants_twin(items_desk, vector<int>(items_desk, 0));
	int digit_pos = 1;
	for (size_t i = 0; i < items_desk; i++)
	{
		for (size_t j = 0; j < items_desk; j++)
		{
			variants_twin[i][j] = digit_pos;
			digit_pos++;
		}
	}
	variants = variants_twin;
}
void zeroing() {
	for (size_t i = 0; i < items_desk; i++)
	{
		for (size_t j = 0; j < items_desk; j++)
		{
			*&comp[i][j] = 0;
		}
	}
}
// ялемю едхмхж мю вхякеммне онкнфемхе тепгъ мю дняйе
void printing() {
	counter_results++;
	cout << "RESULT No" << counter_results << endl;
	for (int k = 0; k < items_desk; k++)
	{
		for (int l = 0; l < items_desk; l++)
		{
			cout << comp[k][l] << " ";
		}
		cout << endl;
	}
	cout << endl;
}
//опнбепйю онкнфемхъ тепгъ он бепрхйюкх, цнпхгнмрюкх х наехл дхюцнмюкъл
bool co(int i, int j) {
	//right
	for (int a = 1; a < items_desk - j; a++)
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
	for (int e = 1; e < items_desk - i; e++)
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
	for (int c = 1; c < items_desk - i && c < items_desk - j; c++)
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
	for (int g = 1; g < items_desk - i && g < j + 1; g++)
	{
		if (comp[i][j] == comp[i + g][j - g])
		{
			return false;
		}
	}
	// right_up
	for (int h = 1; h < i + 1 && h < items_desk - j; h++)
	{
		if (comp[i][j] == comp[i - h][j + h])
		{
			return false;
		}
	}
	return true;
}
// оепеанп онкнфемхи тепгеи
int *key =  new int(0);
void setter() {

	for (size_t i = 0; i < items_desk; i++)
	{
		// ГЮОНКМЕМХЕ ХМХЖХЮКХГХПНБЮММНЦН БЕЙРНПЮ ПЮГЛЕПМНЯРЭЧ item_desks
		comp[*key][i] = 1;
		if (co(*key, i))
		{
			if (*key != items_desk-1)
			{
				*key += 1;
				setter();
			}
			else
			{
				printing();
			}
		}
		if (i == items_desk-1)
		{
			comp[*key][i] = 0;
			*key -= 1;
		}
		else
		{
		comp[*key][i] = 0;
		}
	}
}
int main() {
	cout << "Input amount of elements: ";
	cin >> items_desk;
	cout << endl;
	zeroing_main_vector();
	digit_position_of_F();
	setter();
	system("pause");
	return 0;
}