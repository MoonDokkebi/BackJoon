#include <iostream>
using namespace std;
int main() {
	int n = 0;
	int score = 0, sum = 0;
	string OX;
	cin >> n;

	
	for (int i = 0; i < n;i++) {
		cin >> OX;
		
		for (int j = 0; j < OX.length();j++) {
			if (OX[j] == 'O') {
				score++;
				sum += score;
			}
			if (OX[j] == 'X') {
				score = 0;
			}
		}
		cout << sum << "\n";
		score = 0;
		sum = 0;

	}
}