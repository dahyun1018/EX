//�ֺ�� ���ϱ� : 1000���� ������ �޾� ���� ���� ���� ������ ����϶�(���� �� �� �� ���� ū ���� ���)
#include<iostream>
using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
	int arrScore[1000];		//1000���� ���� ���� �迭
	
	cin >> T;
	
	for (test_case = 1; test_case <= T; test_case++)
	{
		int maxCount = 0;
		int maxScore = 0;
		int arrCount[101] = { 0, };		//0~100�� �󵵼� üũ�ϴ� �迭

		cin >> test_case;

		for (int i = 0; i < 1000; i++) {	
			
			cin >> arrScore[i];			//�л� ���� �Է�
			arrCount[arrScore[i]]++;	//���� �󵵼� �ø���

			if (arrCount[arrScore[i]] > maxCount) {		
				maxCount = arrCount[arrScore[i]];	
				maxScore = arrScore[i];	
			}
			else if (arrCount[arrScore[i]] == maxCount)	//���� �󵵼� �� �� ū ���� ����
				maxScore = arrScore[i];

		}

		cout <<"#"<<test_case<<" "<< maxScore << endl;
	}

	return 0;
}