#include <iostream>
using namespace std;

int main() {
	int N, X=5, Y=3;
	int result=0;
	cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);
	cin >> N;


	while (N>=0) {
		if (N % X == 0) {
			result += N / X;
			cout << result;
			return 0;
		}
		N -= Y;
		result++;
	}
	cout << -1;


}