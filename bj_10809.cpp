//BOJ 10809 ���ĺ� ã��
#include <iostream>
#include <cstring>		//��� ������ �� 
using namespace std;

int main() {
	char S[100];
	int arr[26];		//������ ���� ��ŭ �迭 �����

	for (int i = 0; i < 26; i++) {	//�迭 -1�� �ʱ�ȭ
		arr[i] = -1;
	}

	cin >> S;

	for (int i = 0; i < strlen(S); i++) {
		if (arr[S[i] - 97] == -1)			//'a'=97, 'b'=98 ... ����-97�� ���ĺ� ����
			arr[S[i] - 97] = i;				//���ĺ��� ������ arr�迭�� �ֱ�
	}

	for (int i = 0; i < 26; i++) {
		cout<<arr[i]<<" ";
	}
	
	return 0;
}