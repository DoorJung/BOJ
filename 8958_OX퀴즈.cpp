#include<iostream>
#include<string>
using namespace std;
#define MAX 80
int main() {
	string quiz;
	int cases;
	cin >> cases;
	while (cases--) {
		int count = 0, ret = 0;
		cin >> quiz;
		for (int i = 0; i < quiz.size(); i++) {
			if (quiz[i] == 'O') {
				count++;
				ret += count;
			}
			else
				count = 0;
		}
		cout << ret << endl;
	}
	return 0;
}