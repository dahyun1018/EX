//1210 Ladder 사다리 문제
#include<iostream>
#include<cstring>
using namespace std;

int ladder[101][101];

int dx[] = { 0,0,-1 };	//왼쪽, 오른쪽, 윗쪽
int dy[] = { -1,1,0 };

//출발 지점 찾기
int findDeparture(int x1, int y1) {
	int x = x1;
	int y = y1;

	while (1) {
		if (x == 0) return y;	//첫번째 행에서 출발하므로 x==0
		
		for (int i = 0; i < 3; i++) {
			int newX = x + dx[i];	//상하좌우로 움직이기
			int newY = y + dy[i];

			if (newX < 0 || newX >= 100 || newY < 0 || newY >= 100)	//배열을 탈출 할 때
				continue;
			if (ladder[newX][newY] == 0)	//사다리가 아닐 때
				continue;

			x = newX;
			y = newY;
			ladder[newX][newY] = 0;	//0으로 만들기
			break;
		}
	}
	return y;
}

int main() {
	int num;

	for (int T = 1; T <11; T++) {
		memset(ladder, 0, sizeof(int) * 101 * 101);	//0으로 2차원 배열 초기화
		cin >> num;

		for (int i = 0; i < 100; i++) {
			for (int j = 0; j < 100; j++) {
				cin >> ladder[i][j];
			}
		}

		for (int i = 0; i < 100; i++) {
			if (ladder[99][i] == 2) {			//도착 지점은 99번째 행이므로
				int ans = findDeparture(99, i);	
				cout << "#" << num << " " << ans << "\n";
				break;
			}
		}
	}
	return 0;
}