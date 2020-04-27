//SW 1216 회문2 
#include<iostream>
#include<string>
using namespace std;

int main() {
	char word[100][100];
	int length;
	int i, j,k;
	int num;

	for (int T = 1; T < 11; T++) {
		
		cin >> num;

		for (int i = 0; i < 100; i++) {
			for (int j = 0; j < 100; j++) {
				cin >> word[i][j];
			}
		}

		int ans = 0;
		bool flag = true;

		//가로 회문 구하기
		for (length = 1; length <= 100; length++) {	//회문의 길이가 1~100까지
			for (i = 0; i < 100; i++) {
				for (j = 0; j <= 100 - length; j++) {
					flag = true;
					for (k = 0; k < length / 2; k++) {
						if (word[i][j + k] != word[i][length - 1 + j - k])
							flag = false;
					}
					if (flag && ans < length)	//최대 길이 구하기
						ans=length;
				}
			}

		}

		//세로 회문 구하기
		for (length = 1; length <= 100; length++) {
			for (i = 0; i < 100; i++) {
				for (j = 0; j <= 100 - length; j++) {
					flag = true;
					for (k = 0; k < length / 2; k++) {
						if (word[j+k][i] != word[length-1+j-k][i])
							flag = false;
					}
					if (flag && ans < length)
						ans = length;
				}
			}

		}

		cout << "#" <<T<< " " << ans<<"\n";
	}
	
	
	return 0;
}