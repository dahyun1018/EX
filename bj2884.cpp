//45�� ������ �˶� ���߱�
#include<iostream>
using namespace std;

int main() {

	int H, M;
	cin >> H >> M;

	if (M >= 45) {
		M -= 45;
	}
	else {
		if (H >= 1) {	
			H -= 1;
			
		}
		else {			//00�� �� ��
			H = 23;
		}
		M += 15;
	}
	cout << H << " " << M;

	return 0;
}