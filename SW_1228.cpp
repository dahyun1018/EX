//SWEA 1228 암호문1
#include<iostream>
#include<list>
using namespace std;

int main() {
	int n, orderN;
	int tmp, x, y, z;
	char a;
	list<int> password;

	for (int T = 1; T < 11; T++) {
		cin >> n;	//원본 암호문의 길이
		for (int i = 0; i < n; i++) {
			cin >> tmp;	//원본 암호문
			password.push_back(tmp);	//list에 추가
		}
		cin >> orderN;	//명령어의 개수
		for (int j = 0; j < orderN; j++) {
			cin >> a>> x >> y;	//명령어
			list<int> plus;
			for (int k = 0; k < y; k++) {
				cin >> z;
				plus.push_back(z);	//추가 암호문
			}
			//원본 암호문에서 x의 위치 찾기
			list<int> ::iterator iter;
			iter = password.begin();	
			while (x > 0) {
				iter++;
				x--;
			}
			//iter가 가리키는 곳 앞에 추가 암호문 삽입
			password.splice(iter, plus);	 
		}
		//암호문 10개 출력
		cout << "#" << T << " ";
		for (int m = 0; m < 10; m++) {
			cout << password.front() << " ";
			password.pop_front();
		}
		cout << "\n";
		//리스트 전체 삭제
		password.clear();
	}


	return 0;
}