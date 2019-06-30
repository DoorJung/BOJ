#include <iostream>
#include <cmath>
using namespace std;
int getDigit(int digit, int num) {
	while (digit) {
		--digit;
		if (digit == 0)
			return num % 10;

		num /= 10;
	}
}
int main() {
	int a, b;
	cin >> a >> b;
	printf("%d\n%d\n%d\n%d", a * getDigit(1, b), a * getDigit(2, b), a * getDigit(3, b), a * b);
	return 0;
}