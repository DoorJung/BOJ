#include<iostream>
#include<string>
using namespace std;
int arr[10001] = { 0, };
int getHansu(int n) {
	int sum = 0;
	for (int i = 1; i <= n; i++) {
		if (i < 100)
			sum++;
		else {
			string num = to_string(i);
			int d = num[0] - num[1];
			for (int j = 0; j < num.size() - 1; j++) {
				if (d != (num[j] - num[j + 1]))
					break;
				if (j == num.size() - 2)
					sum++;
			}
		}
	}
	return sum;
}
int main() {
	int n;
	cin >> n;
	cout << getHansu(n);
	return 0;
}