//BOJ 2675 문자열 반복
#include<iostream>	
#include<string>
using namespace std;

int main() {
	int T,R;
	string S;		//문자열으로 입력됨
	cin >> T;

	for (int i = 0; i < T; i++) {
		cin >> R >>S;
		for (int k = 0; k < S.length(); k++) {	
			for (int j = 0; j < R; j++) {		
				cout << S[k];					//S의 한 글자씩 R만큼 반복
			}
		}
		cout << endl;
	}

	return 0;
}