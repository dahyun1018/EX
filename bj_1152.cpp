//BOJ 1152 �ܾ��� ���� 
#include<iostream>	
#include<string>
using namespace std;

int main() {
	string S;
	int count = 1;

	getline(cin, S);	//�� ������ ���� �Է¹ޱ�

	for (int i = 0; i < S.length(); i++) {			

		if (S[i] == ' ') {	//�����̸�
			count++;		//count++

			if (i == 0 || i == S.length() - 1) {	//�� �� �� �����̸�
				count--;							//count--
			}
		}

	}
	if (S.compare(" ") == 0)	//������ �����̸�
		cout << '0';			//�ܾ��� ���� 0
	else 
		cout << count;			//������ ��(+1)�� �ܾ��� ���� ���ϱ�

	return 0;
}