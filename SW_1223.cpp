//1225 ��ȣ������ queue �⺻ Ȱ��
#include<iostream>
#include<queue>

using namespace std;

int main() {
	queue<int> password;
	int a;
	int num;

	for (int T = 1; T < 11; T++) {
		int tmp = 1;
		bool flag = true;

		cin >> num;
		for (int i = 0; i < 8; i++) {
			cin >> a;
			password.push(a);
		}
		
		//0�� �ɶ� ���� 1~5�� �����ϸ� ��ȣ ����
		while (tmp > 0) {
			for (int j = 1; j < 6; j++) {
				tmp = password.front() - j;
				//0 ���� �̸� �ݺ��� Ż��
				if (tmp < 0 || tmp==0) {
					flag = false;
					break;
				}
				else {
					password.push(tmp);
					password.pop();
				}
				
			}
			if (flag == false) break;
		}
		
		tmp = 0;
		password.push(tmp);
		password.pop();

		cout << "#" << T << " ";
		for (int k = 0; k < 8; k++) {
			cout << password.front() << " ";
			password.pop();
		}
		cout << endl;
		
		//queue �ʱ�ȭ
		while (!password.empty())
		{
			password.pop();
		}
	
	}

	return 0;
}