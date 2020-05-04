//SWEA 1218 괄호 짝짓기
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
			//스택이 비어있지 않고
			if (!bracket.empty()) {		
				//괄호의 짝이 맞으면 맨 위의 요소 없애기
				if((bracket.top() == '[' && b[i] == ']') || (bracket.top() == '{' && b[i] == '}')		
					|| (bracket.top() == '(' && b[i] == ')') || (bracket.top() == '<' && b[i] == '>'))
					bracket.pop();
				//아니면 요소 삽입
				else bracket.push(b[i]);
			}
		
			else {
				//비어있는데 들어오는 요소가 오른쪽 괄호이면 0 출력
				if (b[i] == '}' || b[i] == '>' || b[i] == ']' || b[i] == ')') {
					cout << "#" << T << " " << "0" << "\n";
					break;
				}
				//아니면 요소 삽입 
				else
					bracket.push(b[i]);
			}
		
		}

		//루프 후 스택이 비어있으면 1 출력
		if (bracket.empty())
			ans = 1;
		
		cout << "#" << T << " " << ans<<"\n";

		//스택과 string 초기화
		bracket = {};
		b = "";

	}


	return 0;
}