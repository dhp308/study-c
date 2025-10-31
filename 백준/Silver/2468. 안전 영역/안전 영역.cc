#include<iostream> 
#include <queue>
#include <string>
#include<cstring> 
using namespace std;
int map[101][101], N;
bool visited[101][101];
int BFS(int rain);

int main() {
	
	int  MAX = -1, max_of_range = -1;

	cin >> N;

	for (int i = 1; i <= N; i++) {
		for (int k = 1; k <= N; k++) {
			cin >> map[i][k];
			if (map[i][k] > MAX) {
				MAX = map[i][k];
			}
			
		}
	}

	for (int n = 0; n < MAX; n++) {
		memset(visited, false, sizeof(visited));
		int temp = BFS(n);
		if (temp > max_of_range)
			max_of_range = temp;
	}

	cout << max_of_range;

	return 0;

}

int BFS(int rain) {

	queue<pair<int, int>> q;
	int cnt = 0;

	for (int i = 1; i <= N; i++) {
		for (int k = 1; k <= N; k++) {

			if (map[i][k] <= rain)
				visited[i][k] = true;
			

		}
	}

	for (int i = 1; i <= N; i++) {
		for (int k = 1; k <= N; k++) {

			if (!visited[i][k]) {
				cnt++;
				q.push({ i,k });
				visited[i][k] = true;

				while (!q.empty()) {
					int X = q.front().first;
					int Y = q.front().second;
					q.pop();

					if (X + 1 <= N && !visited[X + 1][Y]) {
						visited[X + 1][Y] = true;
						q.push({ X + 1,Y });
					}
					if (X - 1 > 0 && !visited[X - 1][Y]) {
						visited[X - 1][Y] = true;
						q.push({ X - 1,Y });
					}
					if (Y + 1 <= N && !visited[X][Y + 1]) {
						visited[X][Y + 1] = true;
						q.push({ X ,Y + 1 });
					}
					if (Y - 1 > 0 && !visited[X][Y - 1]) {
						visited[X][Y - 1] = true;
						q.push({ X ,Y - 1 });
					}
				}
			}


		}
	}

	return cnt;

	
}
