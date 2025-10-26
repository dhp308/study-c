#include<iostream> 
#include <queue>
#include <string>
#include<cstring>
using namespace std; 
void DFS(int start, int target);
int N, check = 0;
int map[101][101];
bool visited[101];
int chon = 0;

int main() { 
	memset(visited, false, sizeof(visited));

	cin >> N;

	int start, target, num_of_relation;
	cin >> start >> target >> num_of_relation;

	for (int i = 0; i < num_of_relation; i++) {
		int x, y;
		cin >> x >> y;
		map[x][y] = 1;
		map[y][x] = 1;
	}

	DFS(start, target);

	if (check == 1) {
		cout << chon;
	}
	else {
		cout << -1;
	}

	

	return 0;

	
}


void DFS(int start, int target) {
	if (start == target) {
		check = 1;
		return;
	}

	visited[start] = true;

	for (int i = 1; i <= N; i++) {
		if (map[start][i] == 1 && !visited[i]) {
			
			chon++;

			DFS(i, target);

			if (check == 1) {
				return;
			}

			chon--;
		}
	}

	
	

}