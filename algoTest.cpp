//세자리 수의 곱 구하기
#include<iostream>
using namespace std;

int main() {

	int a, b, c;
	cin >> a >> b;
	c = b;
	for (int i = 0; i < 3; i++) {
		cout << a * (c % 10) << endl;	//c의 마지막 자릿수 곱하기
		c = c / 10;						//c의 마지막 자릿수 없애기
	}

	cout << a * b;

	return 0;
}