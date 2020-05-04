//SWEA 1219 길찾기 (DFS)
#include<iostream>
#include<cstring>
using namespace std;
int visited[100];
int graph[100][100];
bool check;
void dfs(int v);

int main() {
	int t, v1, v2, edge;

	for (int T = 1; T < 11; T++) {
		//방문배열과 그래프 배열 0으로 초기화
		memset(visited, 0, sizeof(visited));
		memset(graph, 0, sizeof(graph));
		check = false;
		cin >> t >> edge;

		for (int i = 0; i < edge; i++) {
			cin >> v1 >> v2;
			graph[v1][v2] = 1;
		}

		//출발지(0)부터 시작
		dfs(0);

		cout << "#" << t << " ";
		if (check)
			cout << 1;
		else
			cout << 0;
		cout << endl;

	}

	return 0;
}

void dfs(int v) {
	visited[v] = 1;
	//목적지에 도착(99)하면 true 반환
	if (v == 99) {
		check = true;
		return;
	}
	//방문하지 않았고 그래프에 길이 있다면 dfs 수행
	for (int i = 0; i < 100; i++) {
		if (!visited[i] && graph[v][i])
			dfs(i);
	}
}