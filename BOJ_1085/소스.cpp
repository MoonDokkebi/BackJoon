#include <iostream>
using namespace std;
int main() {
	int x, y, w, h;
	int reX, reY;
	cin >> x >> y >> w >> h;
	if (w/2 >= x)//x���� ���ݺ��� ������
		reX = x;
	if (w/2 < x)
		reX = w-x;
	if (h/2 >= y)
		reY = y;
	if (h/2 < y)
		reY = h-y;

	if (reX <= reY)
		cout << abs(reX);
	else if (reX > reY)
		cout << abs(reY);

}