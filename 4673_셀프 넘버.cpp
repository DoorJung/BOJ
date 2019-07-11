#include <iostream>
#include <string>
using namespace std;
int arr[10001] = { 0, };
int sumDigit(int num) {
	int sum = 0;
	string mNum = to_string(num);
	for (int i = 0; i < mNum.size(); i++)
		sum += mNum[i] - 48;
	return sum;
}
int main() {
	for (int num = 1; num <= 10000; num++) {
		int sum = num + sumDigit(num);
		while (sum <= 10000) {
			arr[sum] = true;
			sum += sumDigit(sum);
		}
	}
	for (int i = 1; i <= 10000; i++) {
		if (!arr[i])
			cout << i << endl;
	}
	return 0;
}