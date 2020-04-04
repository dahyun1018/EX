//BOJ 1152 단어의 개수 
#include<iostream>	
#include<string>
using namespace std;

int main() {
	string S;
	int count = 1;

	getline(cin, S);	//줄 단위로 문자 입력받기

	for (int i = 0; i < S.length(); i++) {			

		if (S[i] == ' ') {	//공백이면
			count++;		//count++

			if (i == 0 || i == S.length() - 1) {	//맨 앞 뒤 공백이면
				count--;							//count--
			}
		}

	}
	if (S.compare(" ") == 0)	//문장이 공백이면
		cout << '0';			//단어의 갯수 0
	else 
		cout << count;			//공백의 수(+1)로 단어의 갯수 구하기

	return 0;
}