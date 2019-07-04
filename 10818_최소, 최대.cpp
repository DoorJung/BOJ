#include<iostream>
using namespace std;
int  n[1000000];
int main() {
	int cases, max, min;
	cin >> cases;
	for (int i = 0; cases - i > 0; ++i)
		cin >> n[i];
	max = min = n[0];
	for (int i = 0; i < cases - 1; ++i) {
		if (max < n[i + 1])
			max = n[i + 1];
		if(min > n[i + 1])
			min = n[i + 1];
	}
	printf("%d %d", min, max);
	return 0;
}