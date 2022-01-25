#include<iostream>
#include<string>
using namespace std;

int main() {
	string X;
	int num[] = {3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,8,8,8,8,9,9,9,10,10,10,10};
	int time=0;
	
	getline(cin,X);
	for (int i = 0; i < X.length();i++) {
		time += num[X[i]-65];
	}
	cout << time;
}