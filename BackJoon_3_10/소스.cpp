#include <iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	int x,y;
	cin >> n >> x;

	for (int i = 1; i <= n; i++) {
		cin >> y;
		if (y<x) {
			cout << y << " ";
	}
	}
}