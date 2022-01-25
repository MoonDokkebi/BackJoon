#include<iostream>
#include<string>
using namespace std;
int main() {
	string a, b;
	string x;
	
	cin >> a >> b;

	for (int i = 2; i >= 0; i--) {
		if (a[i] < b[i]) {
			x = b; break;
		}
		else if (a[i] > b[i]) {
			x = a; break;
		}
	}
	
	cout << x[2] << x[1] << x[0];
}