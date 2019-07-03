#include<iostream>
using namespace std;
int main() {
	int n, orgin, first, second, count = 0;
	cin >> n;
	orgin = n;
	while (1) {
		++count;
		if (n < 10) first = 0;
		else first = n / 10;
		second = n % 10;

		n = second * 10 + (first + second) % 10;

		if (orgin == n)
			break;
	}
	cout << count;

	return 0;
}