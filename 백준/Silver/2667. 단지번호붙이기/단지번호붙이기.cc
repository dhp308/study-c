#include<iostream> 
#include <queue>
#include <string>
#include<cstring>
#include<vector>
#include<algorithm>
using namespace std; 
int BFS(int a, int b);

int N;
int map[26][26];
bool visited[26][26];
vector<vector<int>> house;

int main() { 

	
	memset(visited, false, sizeof(visited));
	house.resize(1);
	int org = 0;
	cin >> N;
	
	for (int i = 1; i <= N; i++) {

		string num;
		cin >> num;

		for (int k = 1; k <= N; k++) {
			
			map[i][k] = num[k-1] - '0';
		}
	}

	for (int i = 1; i <= N; i++) {
		for (int k = 1; k <= N; k++) {
			if (map[i][k] == 1 && !visited[i][k]) {
				org++;
				int u = BFS(i, k);
				house[0].push_back(u);

			}
		}
	}

	sort(house[0].begin(), house[0].end());
	

	cout << org << endl;
	for (int c : house[0]) {
		cout << c << endl;
	}
	
	return 0;
	
}


int BFS(int a, int b) {

	int num_of = 1;
	queue < pair <int, int> > q;
	
	q.push({ a,b });
	visited[a][b] = true;

	while (!q.empty()) {
		int x, y;
		x = q.front().first;
		y = q.front().second;
		q.pop();

		if (x + 1 <= N && map[x + 1][y] == 1 && !visited[x + 1][y]) {
			q.push({ x + 1,y });
			visited[x + 1][y] = true;
			num_of++;
		}
		if (x - 1 >= 1 && map[x - 1][y] == 1 && !visited[x - 1][y]) {
			q.push({ x - 1,y });
			visited[x - 1][y] = true;
			num_of++;
		}
		if (y + 1 <= N && map[x][y+1] == 1 && !visited[x][y+1]) {
			q.push({ x ,y+1 });
			visited[x][y+1] = true;
			num_of++;
		}
		if (y - 1 >= 1 && map[x][y-1] == 1 && !visited[x][y-1]) {
			q.push({ x ,y - 1 });
			visited[x][y - 1] = true;
			num_of++;
		}
	}
	return num_of;
}