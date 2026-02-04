#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
struct Node {
	int x, y;
};

int main() {
	int N;
	cin >> N;
	vector<pair<int, int>> v(N);

	for (int i = 0; i < N; i++) {
		int a, b;
		cin >> a >> b;
		v[i] = { a,b };
	}

	sort(v.begin(), v.end());
	

	for (int i = 0; i < N; i++) {
		cout << v[i].first << " " << v[i].second << '\n';
	}

	return 0;
}
