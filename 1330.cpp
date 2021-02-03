#include <iostream>
using namespace std;

int main() {
	int A, B;
	cin >> A >> B;

	if (A > 10000 || B > 10000 || A < -10000 || B < -10000) return -1;

	if (A > B) printf("%s\n", ">");
	if (A < B) printf("%s\n", "<");
	if (A == B) printf("%s\n", "==");

	return 0;
}