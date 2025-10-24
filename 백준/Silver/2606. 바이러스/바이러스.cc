#include<iostream> 
#include <queue>
#include<cstring>

using namespace std; 
void BFS(int startNode);

int N, M;
int map[101][101];
bool visited[101];
int sum = 0;

int main() { 

	memset(map, 0, sizeof(map));
	memset(visited, false, sizeof(visited));

	cin >> N >> M;
	
	for (int k = 0; k < M; k++) {
		int a, b;
		cin >> a >> b;
		map[a][b] = 1;
		map[b][a] = 1;
	}

	BFS(1);

	cout << sum;

	return 0;
	
	
}

void BFS(int startNode) {
	
	queue<int> q;
	q.push(startNode);
	visited[startNode] = true;

	while (!q.empty()) {
		int u = q.front();
		q.pop();

		for (int v = 1; v < N + 1; v++) {
			if (map[u][v] == 1 && !visited[v]) {
				q.push(v);
				visited[v] = true;
				sum++;
			}
		}
	}


	
}


