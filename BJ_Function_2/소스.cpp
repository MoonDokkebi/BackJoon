#include<iostream>
#define N 10001
using namespace std;

bool arr[N];
int F(int n) {
	int sum = n;
	while (n)
	{
		if (n == 0) {
			false;
		}
		sum += n % 10;
		n = n / 10;
	}
	return sum;
}

int main() {
	for (int i = 1; i < N;i++) {
		if (F(i)<=N) {
			arr[F(i)] = true;
		}
		if (!arr[i]) {
			cout << i << "\n";
		}


	}
}