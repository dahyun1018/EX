//BOJ 11720 ������ ��
#include <iostream>
using namespace std;

int main() {
	int N;
	char C;			//char������ C ����
	int sum = 0;

	cin >> N;						//������ ���� �Է�

	for (int i = 0; i < N; i++) {	
		cin >> C;					//C�� char���̹Ƿ� �ڵ����� �� ���ھ� �޾���
		sum += (C - '0');			//'0'=48, '1'=49, '2'=50 ... ���� '0'�� ���ָ� ������ ���� ����
	}

	cout << sum;

	return 0;
}