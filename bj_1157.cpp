//BOJ 1157 �ܾ����
#include<iostream>	
#include<string>
using namespace std;

int main() {
	string S;
	int alpabetCnt[26] = { 0, };			//���ĺ� �ݺ� �� �����ϴ� �迭
	
	cin >> S;

	for (int i = 0; i < S.length(); i++) {	//���� ���� ��ŭ �ݺ�
		if (S[i] >= 97)						//�ҹ��� �̸� ('a'=97)
			alpabetCnt[S[i] - 32 - 65]++;	//�빮�ڷ� ��ȯ�ϰ� ('A'=65)�� ��
		else alpabetCnt[S[i] - 65]++;		//���ĺ� ������� ����

	}

	int max = 0;
	char c = '?' ;

	for (int i = 0; i < 26; i++) {	
		if (alpabetCnt[i] > max) {		//���ĺ� �ݺ� �� �� max���� ũ��
			max = alpabetCnt[i];		//max �ٲٰ�
			c = i + 65;					//c�� ����
		}
		else if (alpabetCnt[i] == max) {	//max���� �����ϸ� 
			c = '?';						//���� ���� �����Ƿ� ? ���
		}
	}

	cout << c;
	
	return 0;
}