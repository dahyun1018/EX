//BOJ 1157 단어공부
#include<iostream>	
#include<string>
using namespace std;

int main() {
	string S;
	int alpabetCnt[26] = { 0, };			//알파벳 반복 수 저장하는 배열
	
	cin >> S;

	for (int i = 0; i < S.length(); i++) {	//문자 길이 만큼 반복
		if (S[i] >= 97)						//소문자 이면 ('a'=97)
			alpabetCnt[S[i] - 32 - 65]++;	//대문자로 변환하고 ('A'=65)를 뺌
		else alpabetCnt[S[i] - 65]++;		//알파벳 순서대로 저장

	}

	int max = 0;
	char c = '?' ;

	for (int i = 0; i < 26; i++) {	
		if (alpabetCnt[i] > max) {		//알파벳 반복 수 가 max보다 크면
			max = alpabetCnt[i];		//max 바꾸고
			c = i + 65;					//c도 갱신
		}
		else if (alpabetCnt[i] == max) {	//max값과 동일하면 
			c = '?';						//동일 값이 있으므로 ? 출력
		}
	}

	cout << c;
	
	return 0;
}