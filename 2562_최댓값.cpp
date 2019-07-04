#include<iostream>
using namespace std;
int  n[9];
int main() {
	int cases = 9, max, location = 1;
	for (int i = 0; cases - i > 0; ++i)
		cin >> n[i];
	max = n[0];
	for (int i = 0; i < cases - 1; ++i) {
		if (max < n[i + 1]) {
			max = n[i + 1];
			location = i + 2;
		}
	}
	printf("%d\n%d", max, location);
	return 0;
}