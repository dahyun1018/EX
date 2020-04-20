#define EMPTY 0
#define BOX 1

#include<iostream>
using namespace std;

int main(void) {

	int i;
	int testCase,T;
	int roomWidth, roomHeight;
	int maxFallen;
	
	int room[100][100] = { EMPTY, };
	int boxTop[100] = { 0, };
	int countEmptySpace;

	cin >> testCase;

	for (T = 0; T < testCase; T++) {
		cin >> roomWidth >> roomHeight;
		maxFallen = 0;

		//방에 상자들을 채운다
		for (i = 0; i < roomWidth; i++) {
			cin >> boxTop[i];
			for (int j = 0; j < boxTop[i]; j++) {
				room[i][j] = BOX;
			}
		}

		//각 상자 열의 가장 위에 있는 상자의 낙차를 구한다
		for (i = 0; i < roomWidth; i++) {
			if(boxTop[i]>0){
				countEmptySpace = 0;
				for (int j = i + 1; j < roomWidth; j++) {
					//room[i][j]가 박스 일 때 빈칸의 갯수를 센다 = 낙차
					if (room[j][boxTop[i] - 1] == EMPTY)
						countEmptySpace += 1;
					
				}

					//이전에 구한 낙차보다 현재 낙차가 크면 업데이트 한다
					if (countEmptySpace > maxFallen)
						maxFallen = countEmptySpace;

			}
		}

		cout << maxFallen;
	}



	return 0;
}
