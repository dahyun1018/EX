//SWEA 1218 ��ȣ ¦����
#include<iostream>
#include<stack>
using namespace std;

int main(void) {
	stack<char> bracket;
	string b;
	int num;
	int ans;

	for (int T = 1; T < 11; T++) {
		ans = 0;

		cin >> num;

		for (int i = 0; i < num; i++) {
			cin >> b[i];
			//������ ������� �ʰ�
			if (!bracket.empty()) {		
				//��ȣ�� ¦�� ������ �� ���� ��� ���ֱ�
				if((bracket.top() == '[' && b[i] == ']') || (bracket.top() == '{' && b[i] == '}')		
					|| (bracket.top() == '(' && b[i] == ')') || (bracket.top() == '<' && b[i] == '>'))
					bracket.pop();
				//�ƴϸ� ��� ����
				else bracket.push(b[i]);
			}
		
			else {
				//����ִµ� ������ ��Ұ� ������ ��ȣ�̸� 0 ���
				if (b[i] == '}' || b[i] == '>' || b[i] == ']' || b[i] == ')') {
					cout << "#" << T << " " << "0" << "\n";
					break;
				}
				//�ƴϸ� ��� ���� 
				else
					bracket.push(b[i]);
			}
		
		}

		//���� �� ������ ��������� 1 ���
		if (bracket.empty())
			ans = 1;
		
		cout << "#" << T << " " << ans<<"\n";

		//���ð� string �ʱ�ȭ
		bracket = {};
		b = "";

	}


	return 0;
}