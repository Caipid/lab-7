#include <iostream>
#include <locale>
//��� ������ ������� N. ����� ������ ��� ��������� �������, ����-��� ������ ������ ������� ������, � ���������� ����� ���������. ������-��� ������ �������� � ������� �� �����������.
using namespace std;
int valid(int n,int size) {
	if (((1 > n) || (n > size))) {
		cout << "������, �������� ������ ������";
		return 1;
	}
	else {
		return 0;
	}
}

int counter(int n, int count) {
	double a[10];
	cout << "������� ������ ������� ���c���:";
	cin >> a[0];
	for (int i = 1; i < n; i++) {
		cout << "\n������� ��������� ������� ������:";
		cin >> a[i];
		if (a[i - 1] > a[i]) {
			cout << "���������� �����:" << (i);
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
	cout << "������� ���������� ��������� �������";
	cin >> n;
	if (valid(n, SIZE)){
		return 0;
	}
	cout << "\n���������� ����� ��������������� �������:" << counter(n,count);
}
