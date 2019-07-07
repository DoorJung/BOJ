#include<iostream>
#include <iomanip>
using namespace std;
int main() {
	int cases;
	cin >> cases;
	while (cases--) {
		int studentNum = 0, score[1000] = { 0, };
		double avg = 0, overNum = 0;
		cin >> studentNum;
		for (int i = 0; i < studentNum; i++) {
			cin >> score[i];
			avg += score[i];
		}
		avg /= studentNum;
		for (int i = 0; i < studentNum; i++) {
			if (avg < score[i])
				overNum++;
		}
		cout << fixed;
		cout.precision(3);
		cout << (overNum / studentNum) * 100 << "%" << endl;
	}
	return 0;
}