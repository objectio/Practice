#include <iostream>
using namespace std;

int main() {
	int A, B;
	cin >> A >> B;
	if (A <= 0 || B >= 10 || B == 0) return -1;

	printf("%.13f", (double)A / (double)B); // 소수점 아래 n번째의 수까지 나타내고 싶으면 .nf 쓰기

	return 0;
}