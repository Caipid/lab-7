#include <iostream>
#include <locale>
using namespace std;
//�������� ������� f(x,y), ����������� ������ �� ������ ��������� � ������� � ��������� ������������ � ������� �� ��� OX. ���� ������, �� ������� ������ ������� 1, ����� � 0.
int f1(double x, double y) {
	if ((x <= 0.0) && (y >= 0.0)) {
		return 1;
	}
	else {
		return 0;
	}
}

void f2(double x, double y, int *otvet) {
	if ((x <= 0.0) && (y >= 0.0)) {
		*otvet = 1;
	}
	else {
		*otvet = 0;
	}
}

void f3(double x, double y, int& otvet) {
	if ((x <= 0.0) && (y >= 0.0)) {
		otvet = 1;
	}
	else {
		otvet = 0;
	}
}

int main() {
	double c1,c2;
	int a2 = 0;
	int a3 = 0;
	cin >> c1 >> c2;
	int f = f1(c1, c2);
	cout << f << endl;
	f2(c1, c2,&a2);
	cout << a2 << endl;
	f3(c1, c2, a3);
	cout << a3 << endl;
}