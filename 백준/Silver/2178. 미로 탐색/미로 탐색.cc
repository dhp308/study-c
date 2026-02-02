#include<iostream>
#include<cstring>
#include<queue>
using namespace std;

int N, M, map[101][101],dist=0;
bool visited[101][101];
int dx[] = { -1,1,0,0 };
int dy[] = { 0,0,-1,1 };

struct Node {
	int x = 0;
	int y = 0;
};

void BFS(Node A);

int main() {
	cin >> N >> M;

	for (int i = 1; i <= N; i++) {
		string a;
		cin >> a;
		for (int k = 1; k <= M; k++) {
			map[i][k] = a[k - 1] - '0';
		}
	}

	Node A = { 1,1 };
	BFS(A);

	cout << dist;

	return 0;
}

void BFS(Node A) {
	
	queue<Node> q;
	q.push(A);
	visited[A.x][A.y] = true;

	while (!q.empty()) {
		dist++;
		int SIZE = q.size();

		for (int i = 0; i < SIZE; i++) {

			Node B = q.front();
			q.pop();
			if (B.x == M && B.y == N)
				return;

			for (int i = 0; i < 4; i++) {
				int X = B.x + dx[i], Y = B.y + dy[i];
				if (X >= 1 && X <= M && Y >= 1 && Y <= N && visited[X][Y] == false && map[Y][X] == 1) {
					visited[X][Y] = true;
					Node C = { X,Y };
					q.push(C);
				}
			}
		}
	}
}