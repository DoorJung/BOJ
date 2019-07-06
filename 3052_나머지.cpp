#include<iostream>
#include<string>
using namespace std;
int n[10] = { 0, };
int remain[1000] = { 0, };
int main() {
	int count = 0;
	for (int i = 0; i < 10; i++) {
		cin >> n[i];
		++remain[(n[i] % 42)];
	}
	for (int i = 0; i < 1000; i++) {
		if (remain[i] != 0)
			count++;
	}
	cout << count;
	return 0;
}