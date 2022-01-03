#include <iostream>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n,m = 0;
	cin >> n;
	cout << fixed;
	cout.precision(3);
	
	for (int i = 0; i < n;i++) {
		int result = 0;
		float sum = 0;

		cin >> m;
		int*arr = new int[m];
		
		for (int j = 0; j < m; j++) {
			cin >> arr[j];
			sum += arr[j];
			
		}
		

		for (int k = 0; k < m; k++) {
			if (arr[k] > (float)sum/m) {
				result++;
			}
		}
		cout << (float)result / m * 100 <<"%"<< "\n";

		sum = 0;
		m = 0;
		result = 0;
	}

}