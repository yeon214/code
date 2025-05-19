#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
int main(void){
	int x;
	cin >> x;
	switch (x / 10) {
	case 10:
		cout << "A++";
		break;
	case 9:
		cout << "A";
		if (x % 10 > 6) cout << "+";
		if (x % 10 < 3) cout << "-";
		break;
	case 8:
		cout << "B";
		if (x % 10 > 6) cout << "+";
		if (x % 10 < 3) cout << "-";
		break;
	case 7:
		cout << "C";
		if (x % 10 > 6) cout << "+";
		if (x % 10 < 3) cout << "-";
		break;
	case 6:
		cout << "D";
		if (x % 10 > 6) cout << "+";
		if (x % 10 < 3) cout << "-";
		break;
	default:
		cout << "F";
	}
	return 0;
}