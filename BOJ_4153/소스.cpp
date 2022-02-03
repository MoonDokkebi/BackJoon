#include <iostream>
using namespace std;
int main() {
	int x, y, z;
	
	while (1)
	{
		cin >> x >> y >> z;
		if (x == 0 && y == 0 && z == 0)
			break;

		if (x * x + y * y == z * z || x * x + z * z == y * y || y * y + z * z == x * x)
			cout << "right" << "\n";
		else
			cout << "wrong" << "\n";


	}
	

}