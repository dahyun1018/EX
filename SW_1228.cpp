//SWEA 1228 ��ȣ��1
#include<iostream>
#include<list>
using namespace std;

int main() {
	int n, orderN;
	int tmp, x, y, z;
	char a;
	list<int> password;

	for (int T = 1; T < 11; T++) {
		cin >> n;	//���� ��ȣ���� ����
		for (int i = 0; i < n; i++) {
			cin >> tmp;	//���� ��ȣ��
			password.push_back(tmp);	//list�� �߰�
		}
		cin >> orderN;	//��ɾ��� ����
		for (int j = 0; j < orderN; j++) {
			cin >> a>> x >> y;	//��ɾ�
			list<int> plus;
			for (int k = 0; k < y; k++) {
				cin >> z;
				plus.push_back(z);	//�߰� ��ȣ��
			}
			//���� ��ȣ������ x�� ��ġ ã��
			list<int> ::iterator iter;
			iter = password.begin();	
			while (x > 0) {
				iter++;
				x--;
			}
			//iter�� ����Ű�� �� �տ� �߰� ��ȣ�� ����
			password.splice(iter, plus);	 
		}
		//��ȣ�� 10�� ���
		cout << "#" << T << " ";
		for (int m = 0; m < 10; m++) {
			cout << password.front() << " ";
			password.pop_front();
		}
		cout << "\n";
		//����Ʈ ��ü ����
		password.clear();
	}


	return 0;
}