#include <iostream>
using namespace std;

int main() {
	int A, B;
	cin >> A >> B;
	if (A <= 0 || B >= 10 || B == 0) return -1;

	printf("%.13f", (double)A / (double)B); // �Ҽ��� �Ʒ� n��°�� ������ ��Ÿ���� ������ .nf ����

	return 0;
}