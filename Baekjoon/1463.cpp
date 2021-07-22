#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int N = 0;
	cin >> N;
	vector<int>DP(N + 1, 1000001);
	int num = 0;
	DP[0] = 0;
	DP[1] = 0;
	while (++num < N) {
		if (num * 3 <= N)
			DP[num * 3] = min(DP[num * 3], DP[num] + 1);
		if (num * 2 <= N)
			DP[num * 2] = min(DP[num * 2], DP[num] + 1);
		DP[num + 1] = min(DP[num + 1], DP[num] + 1);
	}

	cout << DP[N];
}