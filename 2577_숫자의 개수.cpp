#include<iostream>
#include<string>
using namespace std;
int n[10] = { 0, };
int main() {
	int a, b, c;
	cin >> a >> b >> c;
	string num = to_string(a * b * c);
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j <= sizeof(num) / sizeof(int); j++) {
			if (i + 48 == num[j])
				n[i]++;
		}
	}
	for (int i = 0; i < 10; i++) {
		cout << n[i] << endl;
	}
	return 0;
}