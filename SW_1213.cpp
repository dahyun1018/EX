//SW 1213 String 반복 문자열 찾기
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

		//반복되는 문자열이 있을 때 까지 루프
		while (fullString.find(findString) != string::npos)	//찾는 문자열이 없는 경우 string::npos 반환
		{
			count++;
			fullString[fullString.find(findString)] = ' ';
		}

		cout << "#" << i + 1 << " " << count << "\n";
	}
	return 0;
}