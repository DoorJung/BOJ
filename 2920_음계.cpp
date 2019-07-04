#include<iostream>
using namespace std;
int n[8];
int main() {
	int max, location = 1;
	bool isAscend = true, isDescend = true;
	for (int i = 0; 8 - i > 0; ++i)
		cin >> n[i];
	for (int i = 1; i <= 8; ++i) {
		if (i != n[i - 1])
			isAscend = false;
		if (9 - i != n[i - 1])
			isDescend = false;
	}
	if (isAscend)
		cout << "ascending";
	else if(isDescend)
		cout << "descending";
	else
		cout << "mixed";

	return 0;
}