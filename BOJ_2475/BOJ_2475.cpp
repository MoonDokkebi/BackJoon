#include <iostream>


using namespace std;
int main() {
	int num,total=0;
	int result;
	for (int i = 0; i < 5; i++) {
		cin >> num;
		total += num *num ;
	}
	result = total % 10;
	cout << result;
}