//SWExpertAcademy 1206 ������ ���ϱ� View
#include<iostream>
using namespace std;

int main(int argc, char** argv)
{
	int testCase;

	for (int a = 0; a < 10; a++) {
		int viewCount = 0;
		int building[1000] = { 0, };

		cin >> testCase;

		//������ ���̸� �迭�� ����
		for (int T = 0; T < testCase; T++) {
			cin >> building[T];		
		}

		//������ ���ϱ�
		for (int i = 2; i < testCase - 2; i++) {		//�� �迭�� ù��°,�ι�°,������-1,�������� 0�̹Ƿ� �� �ε����� ����
			for (int j = 0; j <= building[i]; j++) {	//���� ��ġ�� �� ���� 4�� ������ ��ġ���� ������ viewCount �߰�
				if ((j > building[i - 1]) && (j > building[i - 2]) && (j > building[i + 1]) && (j > building[i + 2]))
					viewCount++;
			}
		}

		cout << "#" <<a+1<<" "<<viewCount << endl;

	}

	return 0;
}