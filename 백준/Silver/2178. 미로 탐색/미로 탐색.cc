#include<iostream> 
#include <queue>
#include<cstring>
#include<vector>
using namespace std; 
void BFS(int startNode);
int N, M;
int map[101][101];
vector<int> Distance;
vector<vector<int>> graph;
vector<bool> visited;
int main() { 
	
	
	

	
	
	cin >> N >> M;
	graph.resize(N * M + 1);
	visited.resize(N*M + 1, false);
	Distance.resize(N * M + 1, 0);


	for (int n = 1; n <= N; n++) {
		string s; // 1. string 변수 선언
		cin >> s;   // 2. int 대신 string으로 한 줄을 통째로 읽음

		// 3. 0번 인덱스부터 M-1번 인덱스까지 순회
		for (int i = 0; i < M; i++) {
			// map[n][i+1] : 맵은 (1,1)부터 시작
			// s[i] : 문자열은 0부터 시작
			// s[i] - '0' : '1'(문자)를 1(숫자)로 변환
			map[n][i + 1] = s[i] - '0';
		}
	}

	for (int x = 1; x <= N; x++) {
		for (int y = 1; y <= M; y++) {
			if (map[x][y] == 0) {
				continue;
			}
			if ((y - 1) >= 1 && map[x][y-1] == 1) {
				graph[(x - 1) * M + y].push_back((x - 1) * M + y - 1);
			}
			if ((y + 1) <= M && map[x][y+1] == 1) {
				graph[(x - 1) * M + y].push_back((x - 1) * M + y + 1);
			}
			if ((x - 1) >= 1 && map[x-1][y] == 1) {
				graph[(x - 1) * M + y].push_back((x - 2) * M + y);
			}
			if ((x + 1) <= N && map[x+1][y ] == 1) {
				graph[(x - 1) * M + y].push_back(x * M + y );
			}
		}
	}


	BFS(1);
	
	return 0;
}



void BFS(int start_node) {
	queue<int> q;

	
	q.push(start_node);
	visited[start_node] = true;
	Distance[start_node] = 1;
	// 2. 큐가 빌 때까지 반복
	while (!q.empty()) {
		int v = q.front();
		if (v == N*M) {
			cout << Distance[v];
			return;
		}
			
		q.pop();

		// 큐에서 꺼낸 순서가 방문 순서이므로 출력
		

		// 3. 현재 노드와 연결된 이웃 노드들을 (정렬된 순서대로) 확인
		for (int neighbor : graph[v]) {
			// 4. 아직 방문하지 않은 이웃이라면
			if (!visited[neighbor]) {
				// 방문 처리하고 큐에 추가
				visited[neighbor] = true;
				q.push(neighbor);
				Distance[neighbor] = Distance[v] + 1;
				
			}
			
				

		}

		
	}
}
