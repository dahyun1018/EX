//BOJ 1065 한수

#include <iostream>
using namespace std;

int main() {
	int N;
	int count=0;
	cin >> N;

	//N이 두자릿수면 무조건 한수
	if (N < 100)		
		count = N;	

	//N이 세자릿수면
	else {					 
		count += 99;						//99까지 한수
		for (int i = 100; i <= N; i++) {	//100이상은
			if (((i / 100) - ((i / 10) % 10)) == ((i / 10) % 10) - (i % 10))	//각 자리수의 차가 같으면
				count++;					//count 증가
		}

	}

	cout << count;

	return 0;
}