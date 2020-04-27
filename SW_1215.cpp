//SW 1215 회문1
#include<iostream>
#include<string>
using namespace std;

int main() {
	char word[8][8];
	int length;

	for (int T = 1; T < 11; T++) {
		cin >> length;

		for (int i = 0; i < 8; i++) {
			for (int j = 0; j < 8; j++) {
				cin >> word[i][j];
			}
		}

		int ans = 0;
		bool flag = true;

		//가로에서 회문 찾기
		for (int i = 0; i < 8; i++) {
			for (int j = 0; j <= 8 - length; j++) {
				flag = true;
				for (int k = 0; k < length / 2; k++) {
					if (word[i][j + k] != word[i][length - 1 + j - k])	//앞뒤가 다르면 false 반환
						flag = false;
				}
				if (flag)
					ans++;
			}

		}

		//세로에서 회문 찾기
		for (int i = 0; i < 8; i++) {
			for (int j = 0; j <= 8 - length; j++) {
				flag = true;
				for (int k = 0; k < length / 2; k++) {
					if (word[j + k][i] != word[length - 1 + j - k][i])
						flag = false;
				}
				if (flag)
					ans++;
			}

		}

		cout << "#" <<T<< " " << ans<<"\n";
	}
	
	
	return 0;
}