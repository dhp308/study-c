#include<iostream> 
#include <queue>
#include <string>
#include<cstring> // memset을 위해 필요합니다.
using namespace std; 

void BFS(int N, int K);
int cnt = 0;

// 1. 방문 여부를 기록할 배열을 전역으로 선언
bool visited[100001];

int main() { 
	int  N, K;
	cin >> N >> K;

	// 2. N과 K가 같은 경우 0을 출력하고 바로 종료
	if (N == K) {
		cout << 0;
		return 0;
	}

	// 3. visited 배열을 모두 false로 초기화
	memset(visited, false, sizeof(visited));

	BFS(N, K);

	cout << cnt; // BFS가 끝나면 cnt 출력 (원래 구조 유지)

	return 0;
}


void BFS(int N, int K) {
	queue<int> q;
	q.push(N);
	visited[N] = true; // 4. 시작점 N을 방문 처리

	while (1) { // 원래 코드의 while(1) 루프 유지
		cnt++; // 원래 코드의 cnt 증가 시점 유지
		
		int M = q.size();
		
		for (int i = 0; i < M; i++) {

			int u = q.front();
			q.pop();

			// 5. 각 다음 위치에 대해 '방문하지 않았는지'(!visited[...]) 확인

			// 2 * u (잘못된 최적화였던 'u < K' 조건 제거)
			if (2 * u <= 100000 && !visited[2 * u]) {
				if (2 * u == K)
					return; // 찾았으면 함수 종료
				visited[2 * u] = true; // 방문 처리
				q.push(2 * u);
			}

			// u - 1
			if (u - 1 >= 0 && !visited[u - 1]) { // (u > 0 대신 0 이상인지 확인)
				if (u - 1 == K)
					return;
				visited[u - 1] = true; // 방문 처리
				q.push(u - 1);
			}

			// u + 1
			if (u + 1 <= 100000 && !visited[u + 1]) { // (u < 100000 대신 10만 이하인지 확인)
				if (u + 1 == K)
					return;
				visited[u + 1] = true; // 방문 처리
				q.push(u + 1);
			}
		}
	}
}