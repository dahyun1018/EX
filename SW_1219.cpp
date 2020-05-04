//SWEA 1219 ��ã�� (DFS)
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
		//�湮�迭�� �׷��� �迭 0���� �ʱ�ȭ
		memset(visited, 0, sizeof(visited));
		memset(graph, 0, sizeof(graph));
		check = false;
		cin >> t >> edge;

		for (int i = 0; i < edge; i++) {
			cin >> v1 >> v2;
			graph[v1][v2] = 1;
		}

		//�����(0)���� ����
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
	//�������� ����(99)�ϸ� true ��ȯ
	if (v == 99) {
		check = true;
		return;
	}
	//�湮���� �ʾҰ� �׷����� ���� �ִٸ� dfs ����
	for (int i = 0; i < 100; i++) {
		if (!visited[i] && graph[v][i])
			dfs(i);
	}
}