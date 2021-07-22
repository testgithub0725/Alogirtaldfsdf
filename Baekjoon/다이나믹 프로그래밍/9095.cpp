#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int T = 0;
	int n = 0;
	int x = 0;
	cin >> T;

	while (T-->0) {
		cin >> n;
		vector<int>DP(n + 1, 0);
		DP[1] = 1;
		DP[2] = 2;
		DP[3] = 4;
		for (x = 4; x <= n; ++x) {
			DP[x] = DP[x - 1] + DP[x - 2] + DP[x - 3];
		}
		cout << DP[n] << "\n";
	}
	
}