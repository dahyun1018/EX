//SW 1209 Sum 2���� �迭 �ִ� ���ϱ�
#include<iostream>
using namespace std;

int main(int argc, char** argv)
{
	int i, j,num;

	for (int T = 0; T < 10; T++) {
		int arr[100][100] = { 0, };
		int sum = 0;
		int ans = 0;

		cin >> num;

		//�� ���� ��
		for (i = 0; i < 100; i++) {
			for (j = 0; j < 100; j++) {
				cin >> arr[i][j];
				sum += arr[i][j];
			}
			if (sum > ans)
				ans = sum;
			sum = 0;
		}
		//�� ���� ��
		for (i = 0; i < 100; i++) {
			for (j = 0; j < 100; j++) {
				sum += arr[j][i];
			}
			if (sum > ans)
				ans = sum;
			sum = 0;
		}
		//�밢���� ��
		for (i = 0; i < 100; i++) {
			sum += arr[i][i];
		}
		if (sum > ans)
			ans = sum;
		sum = 0;
		//���밢���� ��
		for (i = 0; i < 100; i++) {
			sum += arr[i][99-i];
		}
		if (sum > ans)
			ans = sum;
		sum = 0;

		cout << "#"<<T+1<<" "<<ans<<endl;

	}

	return 0;
}