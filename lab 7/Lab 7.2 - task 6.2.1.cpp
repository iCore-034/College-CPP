#include <iostream>
using namespace std;
const int MAX = 20;

typedef struct QUQUE {
	int data[MAX];
	size_t size;
};
void push(QUQUE* arr, int value) {
	if (arr->size >= MAX) {
		exit(0);
	}
	arr->data[arr->size] = value;
	arr->size++;
}
int pop(QUQUE* arr) {
	if (arr->size == 0) {
		exit(0);
	}
	for (int i = 0; i < arr->size; i++)
		arr->data[i] = arr->data[i + 1];

	arr->size--;
}
void peek(const QUQUE* arr) {
	if (arr->size <= 0) {
		exit(0);
	}
	cout << arr->data[arr->size - 1] << '\n';
}
void printQUQUEValue(int value) {
	cout << " " <<  value;
}
void printQUQUE(const QUQUE* arr) {
	int i;
	int len = arr->size - 1;
	cout << "Очередь ", arr->size;
	for (i = 0; i < len; i++) {
		printQUQUEValue(arr->data[i]);
		cout << " | ";
	}
	if (arr->size != 0) {
		printQUQUEValue(arr->data[i]);
	}
	cout << "\n";
}
inline void asking() {
	cout << "Выберите операцию над очередью\n";
	cout << "1. Добавить элемент в очередь\n";
	cout << "2. Убрать элемент из очереди\n";
	cout << "3. Посмотреть на вершину очереди\n";
	cout << "4. Выход\n\n";
}
int main() {
	setlocale(0, "");
	QUQUE arr;
	arr.size = 0;
	while (true)
	{
		asking();
		int j = 0;
		cin >> j;
		cout << ("\n");
		int n = 0;
		switch (j)
		{
		case 1:
			cout << "Введите значение\n";
			cin >> n;
			push(&arr, n);
			printQUQUE(&arr);
			break;

		case 2:
			cout << "\n", pop(&arr);
			printQUQUE(&arr);
			break;

		case 3:
			cout << "Вершина очереди: \n", peek(&arr);
			cout << "\n";
			break;

		case 4:
			exit(0);
		default:
			cout << ("Такого варианта нет!\n");
		}
	}
	return 0;
}
