#include <iostream>
#include <vector>
#include <queue>      // BFS를 위한 큐
#include <algorithm>  // sort 함수
#include <cstring>    // memset 함수 (배열 초기화)

using namespace std;

int N, M, V;
// 인접 행렬: 1001x1001 크기 (1-based index)
// adj[i][j] = 1이면 i와 j가 연결됨, 0이면 연결되지 않음
int adj[1001][1001]; 
bool visited[1001];  // 방문 여부 배열

/**
 * @brief 깊이 우선 탐색 (DFS) - 인접 행렬 버전
 * @param u 현재 방문 중인 정점
 */
void dfs(int u) {
    // 1. 현재 노드를 방문 처리
    visited[u] = true;
    cout << u << " ";

    // 2. 1번 정점부터 N번 정점까지 모두 확인
    for (int v = 1; v <= N; ++v) {
        // 3. 현재 노드 u와 v가 연결되어 있고 (adj[u][v] == 1)
        //    아직 v를 방문하지 않았다면 (visited[v] == false)
        if (adj[u][v] == 1 && !visited[v]) {
            dfs(v); // 재귀적으로 방문
        }
    }
}

/**
 * @brief 너비 우선 탐색 (BFS) - 인접 행렬 버전
 * @param startNode 탐색을 시작할 정점
 */
void bfs(int startNode) {
    queue<int> q; // BFS를 위한 큐
    
    // 1. 시작 노드를 큐에 넣고 방문 처리
    q.push(startNode);
    visited[startNode] = true;

    while (!q.empty()) {
        // 2. 큐에서 노드 하나를 꺼냄
        int u = q.front();
        q.pop();
        cout << u << " ";

        // 3. 1번 정점부터 N번 정점까지 모두 확인
        for (int v = 1; v <= N; ++v) {
            // 4. 현재 노드 u와 v가 연결되어 있고
            //    아직 v를 방문하지 않았다면
            if (adj[u][v] == 1 && !visited[v]) {
                visited[v] = true; // 방문 처리 (큐에 넣을 때!)
                q.push(v);         // 큐에 삽입
            }
        }
    }
}

int main() {
    // 입출력 속도 향상 (선택 사항)
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> N >> M >> V;

    // 인접 행렬과 방문 배열 초기화
    // (C++에서 전역 변수로 선언된 배열은 0으로 자동 초기화되지만, 명시적으로 할 수도 있습니다)
    // memset(adj, 0, sizeof(adj)); 

    // M개의 간선 정보 입력
    for (int i = 0; i < M; ++i) {
        int u, v;
        cin >> u >> v;
        // 양방향 간선이므로 둘 다 1로 설정
        adj[u][v] = 1;
        adj[v][u] = 1;
    }
    
    // [참고] 인접 행렬은 정렬할 필요가 없습니다.
    // 어차피 for문으로 1번부터 N번까지 순차적으로 확인하기 때문입니다.

    // --- 1. DFS 수행 ---
    // visited 배열을 false로 초기화
    memset(visited, false, sizeof(visited));
    dfs(V);
    cout << '\n';

    // --- 2. BFS 수행 ---
    // visited 배열을 false로 다시 초기화
    memset(visited, false, sizeof(visited));
    bfs(V);
    cout << '\n';

    return 0;
}