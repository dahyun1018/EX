//BOJ 10809 알파벳 찾기
#include <iostream>
#include <cstring>		//없어도 컴파일 됨 
using namespace std;

int main() {
	char S[100];
	int arr[26];		//영문자 갯수 만큼 배열 만들기

	for (int i = 0; i < 26; i++) {	//배열 -1로 초기화
		arr[i] = -1;
	}

	cin >> S;

	for (int i = 0; i < strlen(S); i++) {
		if (arr[S[i] - 97] == -1)			//'a'=97, 'b'=98 ... 문자-97은 알파벳 순서
			arr[S[i] - 97] = i;				//알파벳의 순서를 arr배열에 넣기
	}

	for (int i = 0; i < 26; i++) {
		cout<<arr[i]<<" ";
	}
	
	return 0;
}