#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main(void) {
	stack<string> forward, backward;
	string now = "http://www.acm.org/", command, cinSite;
	while (1) {
		cin >> command;
		if (command == "QUIT") break;
		if (command == "VISIT") {
			while (forward.empty()==false) forward.pop();
			backward.push(now);
			cin >> cinSite;
			now = cinSite;
			cout << now << "\n";
		}
		else if (command == "BACK") {
			if (backward.empty() == true) cout << "Ignored\n";
			else {
				forward.push(now);
				now = backward.top();
				backward.pop();
				cout << now << "\n";
			}
		}
		else if (command == "FORWARD") {
			if (forward.empty()==true) cout << "Ignored\n";
			else {
				backward.push(now);
				now = forward.top();
				forward.pop();
				cout << now << "\n";
			}
		}
	}
	return 0;
}