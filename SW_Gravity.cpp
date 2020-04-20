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

		//�濡 ���ڵ��� ä���
		for (i = 0; i < roomWidth; i++) {
			cin >> boxTop[i];
			for (int j = 0; j < boxTop[i]; j++) {
				room[i][j] = BOX;
			}
		}

		//�� ���� ���� ���� ���� �ִ� ������ ������ ���Ѵ�
		for (i = 0; i < roomWidth; i++) {
			if(boxTop[i]>0){
				countEmptySpace = 0;
				for (int j = i + 1; j < roomWidth; j++) {
					//room[i][j]�� �ڽ� �� �� ��ĭ�� ������ ���� = ����
					if (room[j][boxTop[i] - 1] == EMPTY)
						countEmptySpace += 1;
					
				}

					//������ ���� �������� ���� ������ ũ�� ������Ʈ �Ѵ�
					if (countEmptySpace > maxFallen)
						maxFallen = countEmptySpace;

			}
		}

		cout << maxFallen;
	}



	return 0;
}
