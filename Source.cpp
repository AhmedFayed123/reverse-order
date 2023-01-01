#include<iostream>
using namespace std;
int main() {
	int x, reverse = 0, y;
	cout << "enter number limit 12 :";
	cin >> x;
	while (x != 0) {
		y = x % 10;
		reverse = reverse * 10 + y;
		x /= 10;
	}
	cout << "reverse number is :" << reverse << endl;
	return 0;
}