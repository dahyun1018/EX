//BOJ 1065 �Ѽ�

#include <iostream>
using namespace std;

int main() {
	int N;
	int count=0;
	cin >> N;

	//N�� ���ڸ����� ������ �Ѽ�
	if (N < 100)		
		count = N;	

	//N�� ���ڸ�����
	else {					 
		count += 99;						//99���� �Ѽ�
		for (int i = 100; i <= N; i++) {	//100�̻���
			if (((i / 100) - ((i / 10) % 10)) == ((i / 10) % 10) - (i % 10))	//�� �ڸ����� ���� ������
				count++;					//count ����
		}

	}

	cout << count;

	return 0;
}