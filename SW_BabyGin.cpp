#include<iostream>
using namespace std;

int main(void) {
	int input;
	int tri=0, run=0;
	int i;
	int c[10] = { 0, };

	cin >> input;

	//�� �ڸ� ���� ī����
	for (i = 0; i < 6; i++) {
		c[(input % 10)]++;
		input /= 10;
	}

	
	for (i = 0; i < 10; i++) {
		//triplete ����
		if (c[i] >= 3) {
			c[i] -= 3;
			tri += 1;
			i--;
		}
		//run ����
		if ((c[i] >= 1) && (c[i + 1] >= 1) && (c[i + 2] >= 1)) {
			c[i] -= 1;
			c[i + 1] -= 1;
			c[i + 2] -= 1;
			run += 1;
			i--;
		}
	}
	if (run + tri == 2)
		cout << "Baby Gin";
	else cout << "Lose";

	return 0;
}