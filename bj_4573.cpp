//BOJ 4573 �����ѹ�

#include<iostream>
#define N 10001				//�迭 10000���� �̹Ƿ�				

using namespace std;
bool arr[N];

//�����ѹ� �Ǻ� �Լ�
int D(int n) {
	int sum = n;			//�ڱ� �ڽ��� ���� �����ְ�
	while (1) {				//1�� �ڸ��� ��� �����ִ� ���� ����
		if (n == 0) break;	//0�� �Ǹ� break
		sum += n % 10;		//1�� �ڸ� �����ְ�
		n /= 10;			//���ڸ��� ���ֱ�
	}
	return sum;
}

int main() {
	for (int i = 0; i < N; i++) {
		int idx = D(i);

		if (idx <= N) {
			arr[idx] = true;		//�����ѹ��̸� true�� ����
		}
	}
	for (int i = 1; i < N; i++) {
		if (!arr[i])				//false�� �� ���
			cout << i<<"\n";
	}
	return 0;
}