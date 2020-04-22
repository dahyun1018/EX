//SWExpertAcademy 1206 조망권 구하기 View
#include<iostream>
using namespace std;

int main(int argc, char** argv)
{
	int testCase;

	for (int a = 0; a < 10; a++) {
		int viewCount = 0;
		int building[1000] = { 0, };

		cin >> testCase;

		//빌딩의 높이를 배열에 저장
		for (int T = 0; T < testCase; T++) {
			cin >> building[T];		
		}

		//조망권 구하기
		for (int i = 2; i < testCase - 2; i++) {		//각 배열의 첫번째,두번째,마지막-1,마지막은 0이므로 그 인덱스는 제외
			for (int j = 0; j <= building[i]; j++) {	//현재 위치가 양 옆의 4개 빌딩의 위치보다 높으면 viewCount 추가
				if ((j > building[i - 1]) && (j > building[i - 2]) && (j > building[i + 1]) && (j > building[i + 2]))
					viewCount++;
			}
		}

		cout << "#" <<a+1<<" "<<viewCount << endl;

	}

	return 0;
}