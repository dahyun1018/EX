//SW 1209 Sum 2차원 배열 최댓값 구하기
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

		//각 행의 합
		for (i = 0; i < 100; i++) {
			for (j = 0; j < 100; j++) {
				cin >> arr[i][j];
				sum += arr[i][j];
			}
			if (sum > ans)
				ans = sum;
			sum = 0;
		}
		//각 열의 합
		for (i = 0; i < 100; i++) {
			for (j = 0; j < 100; j++) {
				sum += arr[j][i];
			}
			if (sum > ans)
				ans = sum;
			sum = 0;
		}
		//대각선의 합
		for (i = 0; i < 100; i++) {
			sum += arr[i][i];
		}
		if (sum > ans)
			ans = sum;
		sum = 0;
		//역대각선의 합
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