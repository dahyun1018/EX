//1208 Flatten ��źȭ
#include<iostream>
using namespace std;

int main(int argc, char** argv)
{
	int dump;
	int boxHeight[100];

	for (int T = 0; T < 10; T++) {

		int heightCount[101] = { 0, };
		int maxHeight = 0;
		int minHeight = 101;

		cin >> dump;
		
		for (int i = 0; i < 100; i++) {
			cin >> boxHeight[i];
			heightCount[boxHeight[i]]++;	//�ڽ��� ���̸� �޾Ƽ� ī��Ʈ��

			if (boxHeight[i] > maxHeight)	//�ڽ� ������ �ִ밪, �ּҰ��� ����
				maxHeight = boxHeight[i];
			if (boxHeight[i] < minHeight)
				minHeight = boxHeight[i];
		}

		for (int i = 0; i < dump;i++) {		//���� Ƚ�� ��ŭ ����
			if (maxHeight - minHeight == 0 || maxHeight - minHeight == 1)	//�ִ� �ּҰ��� �Ȱ��ų� 1�����϶� ���� Ż��
				break;

			heightCount[maxHeight]--;		//�ִ밪 ī��Ʈ ���̰�
			heightCount[maxHeight - 1]++;	//�ִ밪 �� ī��Ʈ ���̰�
			heightCount[minHeight]--;		//�ּҰ� ī��Ʈ ���̰�
			heightCount[minHeight + 1]++;	//�ּҰ� �� ī��Ʈ ���̱�

			if (heightCount[maxHeight] == 0)	//�ִ� ���� ī��Ʈ�� 0�� �Ǹ�
				maxHeight--;					//�ִ� ���� -1 �ϱ�
			if (heightCount[minHeight] == 0)	//�ּ� ���� ī��Ʈ�� 0�� �Ǹ�
				minHeight++;					//�ּ� ���� +1 �ϱ�

		}

		//�ִ� ���̿� �ּ� ������ ���� ���
		cout << "#" <<T+1<<" "<< maxHeight - minHeight << endl;

	}

	return 0;
}