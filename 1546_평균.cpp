#include<iostream>
using namespace std;
int main() {
	int N, arr[1000], M = 0, sum = 0;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
		if (M < arr[i])
			M = arr[i];
		sum += arr[i];
	}
	cout << (double)(sum * 100) / (M * N);

	return 0;
}