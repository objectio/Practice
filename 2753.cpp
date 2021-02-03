#include <iostream>
using namespace std;

int main() {
	int year;
	cin >> year;

	if (year % 4 == 0 && year % 100 != 0) printf("%1d", 1);
	else if(year % 400 == 0) printf("%1d", 1);
	else printf("%1d", 0);

	return 0;
}