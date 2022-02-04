#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);

	int n;
	cin >> n;
	int ar[100000];
	
	for (int i = 0; i < n; i++) {
		cin >> ar[i];
	}
	sort(ar, ar + n);
	cout << ar[0] << " " << ar[n-1];
	return 0;



}




