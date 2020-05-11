//1225 암호생성기 queue 기본 활용
#include<iostream>
#include<queue>

using namespace std;

int main() {
	queue<int> password;
	int a;
	int num;

	for (int T = 1; T < 11; T++) {
		int tmp = 1;
		bool flag = true;

		cin >> num;
		for (int i = 0; i < 8; i++) {
			cin >> a;
			password.push(a);
		}
		
		//0이 될때 까지 1~5씩 감소하며 암호 생성
		while (tmp > 0) {
			for (int j = 1; j < 6; j++) {
				tmp = password.front() - j;
				//0 이하 이면 반복문 탈출
				if (tmp < 0 || tmp==0) {
					flag = false;
					break;
				}
				else {
					password.push(tmp);
					password.pop();
				}
				
			}
			if (flag == false) break;
		}
		
		tmp = 0;
		password.push(tmp);
		password.pop();

		cout << "#" << T << " ";
		for (int k = 0; k < 8; k++) {
			cout << password.front() << " ";
			password.pop();
		}
		cout << endl;
		
		//queue 초기화
		while (!password.empty())
		{
			password.pop();
		}
	
	}

	return 0;
}