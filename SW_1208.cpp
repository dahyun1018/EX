//1208 Flatten 평탄화
#include<iostream>
using namespace std;

int main(int argc, char** argv)
{
	int dump;
	int boxHeight[100];

	for (int T = 0; T < 10; T++) {

		int heightCount[101] = { 0, };
		int maxHeight = 0;
		int minHeight = 101;

		cin >> dump;
		
		for (int i = 0; i < 100; i++) {
			cin >> boxHeight[i];
			heightCount[boxHeight[i]]++;	//박스의 높이를 받아서 카운트함

			if (boxHeight[i] > maxHeight)	//박스 높이의 최대값, 최소값을 구함
				maxHeight = boxHeight[i];
			if (boxHeight[i] < minHeight)
				minHeight = boxHeight[i];
		}

		for (int i = 0; i < dump;i++) {		//범프 횟수 만큼 루프
			if (maxHeight - minHeight == 0 || maxHeight - minHeight == 1)	//최대 최소값이 똑같거나 1차이일때 루프 탈출
				break;

			heightCount[maxHeight]--;		//최대값 카운트 줄이고
			heightCount[maxHeight - 1]++;	//최대값 전 카운트 높이고
			heightCount[minHeight]--;		//최소값 카운트 줄이고
			heightCount[minHeight + 1]++;	//최소값 후 카운트 높이기

			if (heightCount[maxHeight] == 0)	//최대 높이 카운트가 0이 되면
				maxHeight--;					//최대 높이 -1 하기
			if (heightCount[minHeight] == 0)	//최소 높이 카운트가 0이 되면
				minHeight++;					//최소 높이 +1 하기

		}

		//최대 높이와 최소 높이의 차이 출력
		cout << "#" <<T+1<<" "<< maxHeight - minHeight << endl;

	}

	return 0;
}