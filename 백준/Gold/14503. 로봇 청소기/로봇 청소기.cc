#include<iostream> 
#include <queue>
#include <string>
#include<cstring> 
using namespace std;
int N, M, room[51][51], cnt =0;


struct Robot {
	int x;
	int y;
	int head;
};

void DFS(Robot& robo);

Robot robo;

int main() {

	
	cin >> N >> M >> robo.x >> robo.y >> robo.head;

	for (int i = 0; i < N; i++) {
		for (int k = 0; k < M; k++) {
			cin >> room[i][k];
		}
	}

	DFS(robo);

	cout << cnt;

	return 0;
	
	
	}


void DFS(Robot& robo) {

	if (room[robo.x][robo.y] == 0) {
		room[robo.x][robo.y] = -1;
		cnt++;
	}

	if (robo.x + 1 < N && !room[robo.x + 1][robo.y] || robo.x - 1 >= 0 && !room[robo.x - 1][robo.y] || robo.y + 1 < M && !room[robo.x][robo.y + 1] || robo.y - 1 >= 0 && !room[robo.x][robo.y - 1]) {
		if (robo.head == 0)
			robo.head = 3;
		else
			robo.head -= 1;

		switch (robo.head) {
		case 0:
			if (robo.x - 1 >= 0 && !room[robo.x - 1][robo.y]) {
				robo.x -= 1;
			}
			break;
		case 1:
			if (robo.y + 1 < M && !room[robo.x][robo.y + 1]) {
				robo.y += 1;
			}
			break;
		case 2:
			if (robo.x + 1 < N && !room[robo.x+1][robo.y]) {
				robo.x += 1;
			}
			break;
		case 3:
			if (robo.y - 1 >= 0 && !room[robo.x][robo.y-1]) {
				robo.y -= 1;
			}
			break;


		}

	}
	else {
		switch (robo.head) {
		case 0:
			if (robo.x + 1 < N && room[robo.x + 1][robo.y] != 1) {
				robo.x += 1;
			}
			else
				return;

			break;
			
		case 1:
			if (robo.y - 1 >= 0 && room[robo.x][robo.y-1] != 1) {
				robo.y -= 1;
			}
			else
				return;

			break;
			
		case 2:
			if (robo.x - 1 >= 0 && room[robo.x-1][robo.y] != 1) {
				robo.x -= 1;
			}
			else
				return;

			break;
			
		case 3:
			if (robo.y + 1 < M && room[robo.x][robo.y+1] != 1) {
				robo.y += 1;
			}
			else
				return;

			break;
		
		}
	}

	DFS(robo);

}
