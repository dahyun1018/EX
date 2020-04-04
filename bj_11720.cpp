//BOJ 11720 숫자의 합
#include <iostream>
using namespace std;

int main() {
	int N;
	char C;			//char형으로 C 정의
	int sum = 0;

	cin >> N;						//숫자의 갯수 입력

	for (int i = 0; i < N; i++) {	
		cin >> C;					//C가 char형이므로 자동으로 한 글자씩 받아짐
		sum += (C - '0');			//'0'=48, '1'=49, '2'=50 ... 문자 '0'을 빼주면 정수형 값이 나옴
	}

	cout << sum;

	return 0;
}