#include <iostream>
#include <algorithm>
using namespace std;
int n,k,tmp;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	cin >> n; 

	for (int i = 0; i < n; i++) {
		
		cin >> k;
		int sum = 0;
		for (int j = 0; j < k; j++) {
			cin >> tmp;
			sum += tmp;
		}

		
		if (sum % k == 0) cout << 0 << '\n';
		else cout << 1 << '\n';
	}
}