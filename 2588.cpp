#include <iostream>
using namespace std;

int main() {
	int A, B, C, D, E;
	cin >> A >> B;

	C = A * (B % 10);
	D = A * (B % 100 / 10);
	E = A * (B / 100);

	printf("%d\n", C);
	printf("%d\n", D);
	printf("%d\n", E);
	printf("%d\n", C + (D * 10) + (E * 100));

	return 0;
}