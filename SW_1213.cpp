//SW 1213 String �ݺ� ���ڿ� ã��
#include<iostream>
#include<string>
using namespace std;

int main() {

	string findString;
	string fullString;
	
	for (int i = 0; i < 10; i++) {
		int T;
		int count = 0;

		cin >> T;
		cin >> findString;
		cin >> fullString;

		//�ݺ��Ǵ� ���ڿ��� ���� �� ���� ����
		while (fullString.find(findString) != string::npos)	//ã�� ���ڿ��� ���� ��� string::npos ��ȯ
		{
			count++;
			fullString[fullString.find(findString)] = ' ';
		}

		cout << "#" << i + 1 << " " << count << "\n";
	}
	return 0;
}