//BOJ 2675 ���ڿ� �ݺ�
#include<iostream>	
#include<string>
using namespace std;

int main() {
	int T,R;
	string S;		//���ڿ����� �Էµ�
	cin >> T;

	for (int i = 0; i < T; i++) {
		cin >> R >>S;
		for (int k = 0; k < S.length(); k++) {	
			for (int j = 0; j < R; j++) {		
				cout << S[k];					//S�� �� ���ھ� R��ŭ �ݺ�
			}
		}
		cout << endl;
	}

	return 0;
}