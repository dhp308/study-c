#include<iostream> 
#include <queue>
#include <string>
#include<cstring>
using namespace std; 
int tomatto[101][101][101], M, N, H;
int day = 0;



struct Point {
	int x;
	int y;
	int z;
};

void BFS(queue<Point>& q, int MAX);

int main() { 
	memset(tomatto, 0, sizeof(tomatto));
	int num_of_queue = 0;

	cin >> M >> N >> H;

	for (int h = 1; h <= H; h++) {
		for (int n = 1; n <= N; n++) {
			for (int m = 1; m <= M; m++) {
				cin >> tomatto[h][n][m];
			}
		}
	}

	queue<Point> q;

	for (int h = 1; h <= H; h++) {
		for (int n = 1; n <= N; n++) {
			for (int m = 1; m <= M; m++) {
				if (tomatto[h][n][m] == 1) {
					
					Point a;
					a.z = h;
					a.y = n;
					a.x = m;
					q.push(a);
					num_of_queue++;

				}
			}
		}
	}

	BFS(q, num_of_queue);
	
	for (int h = 1; h <= H; h++) {
		for (int n = 1; n <= N; n++) {
			for (int m = 1; m <= M; m++) {
				if (tomatto[h][n][m] == 0) {

					cout << -1;
					return 0;

				}
			}
		}
	}

	cout << day-1;
		
		
	

	return 0;
}


void BFS(queue<Point>& q, int MAX) {
	day++;
	if (q.empty()) {
		day--;
		return;
	}
		

	queue<Point> P;

	for (int i = 0; i < MAX; i++)
 {
		int X, Y, Z;
		Point u = q.front();
		Z = u.z;
		Y = u.y;
		X = u.x;
		q.pop();

		if (Z + 1 <= H && tomatto[Z + 1][Y][X] == 0) {
			tomatto[Z + 1][Y][X] = 1;
			Point v;
			v = u;
			v.z += 1;
			P.push(v);
		}
		if (Z - 1 >= 1 && tomatto[Z - 1][Y][X] == 0) {
			tomatto[Z - 1][Y][X] = 1;
			Point v;
			v = u;
			v.z -= 1;
			P.push(v);
		}
		if (Y + 1 <= N && tomatto[Z][Y + 1][X] == 0) {
			tomatto[Z][Y + 1][X] = 1;
			Point v;
			v = u;
			v.y += 1;
			P.push(v);
		}
		if (Y - 1 >= 1 && tomatto[Z][Y - 1][X] == 0) {
			tomatto[Z][Y - 1][X] = 1;
			Point v;
			v = u;
			v.y -= 1;
			P.push(v);
		}
		if (X + 1 <= M && tomatto[Z][Y][X + 1] == 0) {
			tomatto[Z][Y][X + 1] = 1;
			Point v;
			v = u;
			v.x += 1;
			P.push(v);
		}
		if (X - 1 >= 1 && tomatto[Z][Y][X - 1] == 0) {
			tomatto[Z][Y][X - 1] = 1;
			Point v;
			v = u;
			v.x -= 1;
			P.push(v);
		}
	}

	BFS(P, P.size());
}