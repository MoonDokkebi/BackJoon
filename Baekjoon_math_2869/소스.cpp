#include <iostream>
using namespace std;
int main() {
	cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);
	int a, b, c;
	int cnt=1;
	cin >> a >> b >> c;

	cnt += (c - a) / (a - b);

	if ((c - a) % (a - b) != 0)
		cnt++;
	if (c <= a)
		cout << 1;
	else
		cout << cnt;

}