#include <iostream>
using namespace std;

void echanger(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}
int main() {
	int x, y;
	cout << " valeur de x:";
	cin >> x;
	cout << "valeur de y:";
	cin >> y;

	cout << "x=" << x << endl;
	cout << "y=" << y << endl;

	echanger(&x,&y);
	cout << "x=" << x << endl;
	cout << "y=" << y << endl;

	return 0;
}