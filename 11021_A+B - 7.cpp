#include<iostream>
using namespace std;
int main() {
	int cases, a, b;
	cin >> cases;
	for (int i = 1; i <= cases; ++i) {
		cin >> a >> b;
		printf("Case #%d: %d\n", i, a + b);
	}
	return 0;
}