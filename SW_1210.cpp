//1210 Ladder ��ٸ� ����
#include<iostream>
#include<cstring>
using namespace std;

int ladder[101][101];

int dx[] = { 0,0,-1 };	//����, ������, ����
int dy[] = { -1,1,0 };

//��� ���� ã��
int findDeparture(int x1, int y1) {
	int x = x1;
	int y = y1;

	while (1) {
		if (x == 0) return y;	//ù��° �࿡�� ����ϹǷ� x==0
		
		for (int i = 0; i < 3; i++) {
			int newX = x + dx[i];	//�����¿�� �����̱�
			int newY = y + dy[i];

			if (newX < 0 || newX >= 100 || newY < 0 || newY >= 100)	//�迭�� Ż�� �� ��
				continue;
			if (ladder[newX][newY] == 0)	//��ٸ��� �ƴ� ��
				continue;

			x = newX;
			y = newY;
			ladder[newX][newY] = 0;	//0���� �����
			break;
		}
	}
	return y;
}

int main() {
	int num;

	for (int T = 1; T <11; T++) {
		memset(ladder, 0, sizeof(int) * 101 * 101);	//0���� 2���� �迭 �ʱ�ȭ
		cin >> num;

		for (int i = 0; i < 100; i++) {
			for (int j = 0; j < 100; j++) {
				cin >> ladder[i][j];
			}
		}

		for (int i = 0; i < 100; i++) {
			if (ladder[99][i] == 2) {			//���� ������ 99��° ���̹Ƿ�
				int ans = findDeparture(99, i);	
				cout << "#" << num << " " << ans << "\n";
				break;
			}
		}
	}
	return 0;
}