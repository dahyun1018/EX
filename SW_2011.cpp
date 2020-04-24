
#include<iostream>
#include<cstring>
using namespace std;

int ladder[101][101];
int visited[101][101];
int dis, departure;
;
int dx[] = { 0,0,-1 };	//����, ������, �Ʒ���
int dy[] = { -1,1,0 };

//��� ���� ã��
void findDeparture(int x1, int y1) {
	int x = x1;
	int y = y1;
	int localDistance=0;

	while (1) {
		if (x == 0) {
			if (dis > localDistance) {
				dis = localDistance;
				departure = y;
			}return;
		}
		
		for (int i = 0; i < 3; i++) {
			int newX = x + dx[i];	//�����¿�� �����̱�
			int newY = y + dy[i];
			

			if (newX < 0 || newX >= 100 || newY < 0 || newY >= 100)	//�迭�� Ż�� �� ��
				continue;
			if (ladder[newX][newY] == 0)	//��ٸ��� �ƴ� ��
				continue;
			if (visited[newX][newY])
				continue;

			x = newX;
			y = newY;
			localDistance++;
			visited[newX][newY] = 1;
			break;
		}
	}
	return;
}

int main() {
	int num;

	for (int T = 1; T <11; T++) {
		memset(ladder, 0, sizeof(int) * 101 * 101);	//0���� 2���� �迭 �ʱ�ȭ
		dis = 1000;
		cin >> num;

		for (int i = 0; i < 100; i++) {
			for (int j = 0; j < 100; j++) {
				cin >> ladder[i][j];
			}
		}

		for (int i = 0; i < 100; i++) {
			memset(visited, 0, sizeof(int) * 101 * 101);

			if (ladder[99][i])
				findDeparture(99, i);
		}
		cout << "#" << num << " " << departure << "\n";
	}


	return 0;
}