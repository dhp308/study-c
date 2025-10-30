#include<iostream> 
#include <queue>
#include <string>
#include<cstring> 
using namespace std;
void BFS(int& S, int G, int U, int D);
const int MAX = 1000001;
bool visited[MAX];
int F, S, G, U, D, cnt = 0;




int main() {
	memset(visited, false, sizeof(visited));

	cin >> F >> S >> G >> U >> D;

	if (S == G) {
		cout << 0;
		return 0;
	}

	BFS(S, G, U, D);

	if (S == G) {
		cout << cnt - 1;
	}
	else {
		cout << "use the stairs";
	}


	return 0;

	
}

void BFS(int& S, int G, int U, int D) {

	
	queue<int> q;
	q.push(S);
	visited[S] = true;

	while (!q.empty()) {

		cnt++;

		int size_of_q;
		size_of_q = q.size();

		for (int i = 0; i < size_of_q; i++) {
			int v = q.front();

			if (v == G) {
				S = v;
				return;
			}
				
			

			q.pop();

			if (v + U <= F && !visited[v + U]) {
				q.push(v + U);
				visited[v + U] = true;
			}

			if (v - D > 0 && !visited[v - D]) {
				q.push(v - D);
				visited[v - D] = true;
			}

		}
	}

}