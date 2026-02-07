#include<iostream>
#include<cstring>
#include<queue>
using namespace std;
int N, M, H, box[101][101][101];
int dx[] = { -1,1,0,0,0,0 }, dy[] = { 0,0,-1,1,0,0 }, dz[] = { 0,0,0,0,-1,1 };
bool visited[101][101][101];
struct Node {
	int z, y, x;
};
int BFS();

int main() {
	memset(visited, false, sizeof(visited));
	memset(box, 0, sizeof(box));

	cin >> M >> N >> H;

	for (int z = 1; z <= H; z++) {
		for (int y = 1; y <= N; y++) {
			for (int x = 1; x <= M; x++) {
				cin >> box[z][y][x];
			}
		}
	}

	int days = BFS();

	cout << days << endl;


	return 0;
}

int BFS() {
	queue<Node> q;
	int days = 0, flag = 0;

	for (int z = 1; z <= H; z++) {
		for (int y = 1; y <= N; y++) {
			for (int x = 1; x <= M; x++) {
				if (box[z][y][x] == 1) {
					Node A = { z,y,x };
					q.push(A);
				}
				else if (box[z][y][x] == 0) {
					flag++;
				}
					
			}
		}
	}

	if (!flag)
		return days;

	while (!q.empty()) {
		days++;
		int SIZE = q.size();

		for (int i = 0; i < SIZE; i++) {
			Node B = q.front();
			q.pop();

			for (int k = 0; k < 6; k++) {
				int Z = B.z + dz[k], Y = B.y + dy[k], X = B.x + dx[k];
				if (Z >= 1 && Z <= H && Y >= 1 && Y <= N && X >= 1 && X <= M && !box[Z][Y][X]) {
					box[Z][Y][X] = 1;
					Node C = { Z,Y,X };
					q.push(C);
				}
			}
		}
	}

	for (int z = 1; z <= H; z++) {
		for (int y = 1; y <= N; y++) {
			for (int x = 1; x <= M; x++) {
				if (box[z][y][x] == 0)
					return -1;

			}
		}
	}

	return days-1;
}


	