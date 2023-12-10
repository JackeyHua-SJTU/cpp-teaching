#include <iostream>
#include <string>

using namespace std;

int main() {
	// read two integer
	// separated by a space, a tab and a newline
	int x, y;
	cin >> x >> y;
	cout << "x is " << x << endl << "y is " << y << endl;

	// read a character
	// just A character, including space and newline
	char c;
	cin.get(c);
	cout << "c is " << c << endl;

	// read a line
	string str;
	getline(cin, str);
	cout << "str is " << str << endl;

	return 0;
}
