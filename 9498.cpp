#include <iostream>
using namespace std;

int main() {
	int score;
	cin >> score;

	if (score >= 90) printf("%s\n", "A");
	else if (score >= 80) printf("%s\n", "B");
	else if (score >= 70) printf("%s\n", "C");
	else if (score >= 60) printf("%s\n", "D");
	else printf("%s\n", "F");

	return 0;
}