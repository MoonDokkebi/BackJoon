#include<iostream>
#include<string>
using namespace std;

int main() {
	string s;
	int sum;
	cin >> s;
	sum = s.length();
	for (int i = 0; i < s.length();i++) {

		if (s[i]== '-') {
			if (s[i - 1] == 'c' || s[i - 1] == 'd') {
				sum--;
		}
		}
		if (s[i] == 'j') {
			if (s[i - 1] == 'l' || s[i - 1] == 'n') {
				sum--;
			}
		}
		if (s[i] == '=') {
			if (s[i - 1] == 's' || s[i - 1] == 'c') {
				sum--;
			}
			if (s[i - 1] == 'z') {
				sum--;
				if (s[i - 2] == 'd') {
					sum --;
				}
			}
		}
	}
	cout << sum;
}