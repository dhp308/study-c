#include<iostream> 
#include <queue>
#include <string>
#include<cstring> 
#include<cmath>
using namespace std;
int N, M;
pair<int, int> Node[102];
bool visited[102];
int BFS(pair<int, int>* Node);
int Distance(pair<int, int>& A, pair<int, int>& B);

int main() {

	
	

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> M;

		for (int k = 0; k < M + 2; k++) {
			cin >> Node[k].first >> Node[k].second;
		}

		memset(visited, false, sizeof(visited));

		int cango;
		cango = BFS(Node);

		if (cango)
			cout << "happy" << endl;
		else
			cout << "sad" << endl;
		

	}

	return 0;
	
	}


int BFS(pair<int, int>* Node) {
	queue<pair<int, int>> q;
	q.push(Node[0]);
	visited[0] = true;

	while (!q.empty()) {
		pair<int, int> U = q.front();
		q.pop();

		for (int pos = 0; pos < M + 2; pos++) {
			if (!visited[pos] && Distance(U, Node[pos]) <= 1000) {
				q.push(Node[pos]);
				visited[pos] = true;
			}
		}
	}

	if (visited[M + 1] == 1)
		return 1;
	else
		return 0;



	
}


int Distance(pair<int, int>& A, pair<int, int>& B) {
	return abs(A.first - B.first) + abs(A.second - B.second);
}