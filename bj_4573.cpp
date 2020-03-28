//BOJ 4573 셀프넘버

#include<iostream>
#define N 10001				//배열 10000까지 이므로				

using namespace std;
bool arr[N];

//셀프넘버 판별 함수
int D(int n) {
	int sum = n;			//자기 자신을 먼저 더해주고
	while (1) {				//1의 자리수 계속 더해주는 무한 루프
		if (n == 0) break;	//0이 되면 break
		sum += n % 10;		//1의 자리 더해주고
		n /= 10;			//한자리씩 없애기
	}
	return sum;
}

int main() {
	for (int i = 0; i < N; i++) {
		int idx = D(i);

		if (idx <= N) {
			arr[idx] = true;		//셀프넘버이면 true로 변경
		}
	}
	for (int i = 1; i < N; i++) {
		if (!arr[i])				//false인 수 출력
			cout << i<<"\n";
	}
	return 0;
}