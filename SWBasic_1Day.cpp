//최빈수 구하기 : 1000명의 성적을 받아 가장 많이 나온 점수를 출력하라(여러 개 일 땐 가장 큰 점수 출력)
#include<iostream>
using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
	int arrScore[1000];		//1000명의 성적 넣을 배열
	
	cin >> T;
	
	for (test_case = 1; test_case <= T; test_case++)
	{
		int maxCount = 0;
		int maxScore = 0;
		int arrCount[101] = { 0, };		//0~100점 빈도수 체크하는 배열

		cin >> test_case;

		for (int i = 0; i < 1000; i++) {	
			
			cin >> arrScore[i];			//학생 성적 입력
			arrCount[arrScore[i]]++;	//점수 빈도수 올리기

			if (arrCount[arrScore[i]] > maxCount) {		
				maxCount = arrCount[arrScore[i]];	
				maxScore = arrScore[i];	
			}
			else if (arrCount[arrScore[i]] == maxCount)	//같은 빈도수 일 때 큰 점수 저장
				maxScore = arrScore[i];

		}

		cout <<"#"<<test_case<<" "<< maxScore << endl;
	}

	return 0;
}