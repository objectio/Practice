#include <iostream>
using namespace std;

int main() {
	int A, B;
	cin >> A >> B;

	if (A < 1 || B > 10000 || B == 0) return -1;
	printf("%d\n", A + B);
	printf("%d\n", A - B);
	printf("%d\n", A * B);
	printf("%d\n", A / B);
	printf("%d\n", A % B);

	return 0;
}