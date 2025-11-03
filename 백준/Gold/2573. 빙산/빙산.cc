#include<iostream> 
#include <queue>
#include <string>
#include<cstring> 
using namespace std;
int N, M, map[301][301];
int visited[301][301];
int BFS(int x, int y);

int main() {

	int cnt = 0;

	cin >> N >> M;

	for (int i = 1; i <= N; i++) {
		for (int k = 1; k <= M; k++) {
			cin >> map[i][k];
		}
	}
	
	while (1) {
		int X, Y, flag = 0;

		for (int c = 2; c < N && !flag; c++) {
			for (int v = 2; v < M; v++) {
				if (map[c][v] != 0) {
					X = c, Y = v;
					flag = 1;
					break;
				}
			}
		}

		if (flag == 0) {
			cout << 0;
			return 0;
		}


		memset(visited, 0, sizeof(visited));

		int num = BFS(X, Y);

		if (num == 1) {
			cnt++;
		}
		else if (num == -1) {
			cout << cnt;
			return 0;
		}
	}



	

}

int BFS(int x, int y) {

	int check = 1, Compare = 0;

	for (int c = 2; c < N; c++) {
		for (int v = 2; v < M; v++) {
			if (map[c][v] != 0)
				Compare++;
		}

	}

	queue<pair<int, int>> q;
	visited[x][y] = 1;
	q.push({ x,y });

	while (!q.empty()) {
		int a, b;
		a = q.front().first;
		b = q.front().second;
		q.pop();

		

		if (a + 1 <= N && !visited[a + 1][b]) {
			if (map[a + 1][b] == 0 && map[a][b] != 0) {
				map[a][b] -= 1;
			}
			else if (map[a + 1][b] != 0) {
				check++;
				visited[a + 1][b] = 1;
				q.push({ a + 1, b });
			}

		}

		if (a - 1 >= 1 && !visited[a - 1][b]) {
			if (map[a - 1][b] == 0 && map[a][b] != 0) {
				map[a][b] -= 1;
			}
			else if (map[a - 1][b] != 0) {
				check++;
				visited[a - 1][b] = 1;
				q.push({ a - 1, b });
			}

		}

		if (b + 1 <= M && !visited[a][b+1]) {
			if (map[a][b+1] == 0 && map[a][b] != 0) {
				map[a][b] -= 1;
			}
			else if (map[a][b+1] != 0) {
				check++;
				visited[a][b+1] = 1;
				q.push({ a , b+1 });
			}

		}

		if (b - 1 >= 1 && !visited[a][b-1]) {
			if (map[a][b-1] == 0 && map[a][b] != 0) {
				map[a][b] -= 1;
			}
			else if (map[a][b-1] != 0) {
				check++;
				visited[a][b-1] = 1;
				q.push({ a , b - 1 });
			}

		}


	}

	

	



	if (check == Compare)
		return 1;
	else
		return -1;
}

