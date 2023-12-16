#include <iostream>
#include <locale>
//Дан массив размера N. Найти номера тех элементов массива, кото-рые больше своего правого соседа, и количество таких элементов. Найден-ные номера выводить в порядке их возрастания.
using namespace std;
int valid(int n,int size) {
	if (((1 > n) || (n > size))) {
		cout << "Ошибка, неверный размер масива";
		return 1;
	}
	else {
		return 0;
	}
}

int counter(int n, int count) {
	double a[10];
	cout << "Введите первый элемент масcива:";
	cin >> a[0];
	for (int i = 1; i < n; i++) {
		cout << "\nВведите следующий элемент масива:";
		cin >> a[i];
		if (a[i - 1] > a[i]) {
			cout << "Порядковый номер:" << (i);
			count++;
		}
	}
	return count;
}


int main() {
	setlocale(LC_ALL, "RU");
	const int SIZE = 10;
	int n;
	int count = 0;
	cout << "Введите количество элементов массива";
	cin >> n;
	if (valid(n, SIZE)){
		return 0;
	}
	cout << "\nКоличество чисел удовлетворяющих условию:" << counter(n,count);
}
