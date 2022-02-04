#include <iostream>
using namespace std;
int main() {
	int a, n = 0;
	int arr[42] = {0};
	for (int i = 0; i < 10; i++) {
		cin >> a;
		arr[a % 42]++ ;
	}

	for (int i = 0; i < 42;i++) {
		if (arr[i] > 0) {
			n++;
		}
	}
	cout << n << "\n";
}