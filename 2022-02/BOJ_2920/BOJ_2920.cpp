#include <iostream>

using namespace std;
int main() {
	int num[8];
	int as=0;
	int ds=0;
	for (int i = 0; i < 8; i++) {
		cin >> num[i];
	}
	for (int i = 0; i < 4;i++) {
		if (num[i] == i + 1 && num[i]+num[7-i]==9)
			as++;
		else if (num[7 - i] == i + 1 && num[i] + num[7 - i] == 9)
			ds++;
		
	}
	if (as == 4)
		cout << "ascending";
	else if (ds == 4)
		cout << "descending";
	else
		cout << "mixed";
}