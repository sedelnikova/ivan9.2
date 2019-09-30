// ivan9.2.Робот может перемещаться в четырех направлениях («С» — север, «З» — запад, «Ю» — юг, «В» — восток) и принимать три цифровые команды:
//0 — продолжать движение, 1 — поворот налево, −1 — поворот направо. Дан символ C — исходное направление робота и целое число N — посланная ему команда. 
//Вывести направление робота после выполнения полученной команды 
//

#include <iostream>
#include <windows.h>
#include <cmath>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Russian");
	char S;
	int  N;
	cout << "Введите символ направления";
	cin >> S;
	cout << "Введите цифровую команду для робота";
	cin >> N;
	cout << "Направление - ";
	switch (N) {
	case 1:
		switch (S) {
		case 'С':
			cout << "B"; break;
		case 'Ю':
			cout << "З"; break;
		case 'з':
			cout << "С"; break;
		case 'В':
			cout << "В"; break;
		} break;
	case -1:
		switch (S) {
		case 'С':
			cout << "В"; break;
		case 'Ю':
			cout << "З"; break;
		case 'З':
			cout << "С"; break;
		case 'В':
			cout << "Ю"; break;
		} break;
	case 0: switch (S) {
	case 'С':
		cout << "С"; break;
	case 'Ю':
		cout << "Ю"; break;
	case 'З':
		cout << "З"; break;
	case 'В':
		cout << "В"; break;
	}break;
	}
	return 0;
}
