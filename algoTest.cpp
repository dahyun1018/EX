//���ڸ� ���� �� ���ϱ�
#include<iostream>
using namespace std;

int main() {

	int a, b, c;
	cin >> a >> b;
	c = b;
	for (int i = 0; i < 3; i++) {
		cout << a * (c % 10) << endl;	//c�� ������ �ڸ��� ���ϱ�
		c = c / 10;						//c�� ������ �ڸ��� ���ֱ�
	}

	cout << a * b;

	return 0;
}