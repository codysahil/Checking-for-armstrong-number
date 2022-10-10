#include<iostream>
#include<math.h>
using namespace std;
int main() {
	int n;
	cout << "Enter number to check" << endl;
	cin >> n;
	int count = 0;
	int k = n;
	while (k) {
		count++;
		k = k / 10;
	}
	int temp = n;
	int p = 0;
	while (n > 0) {
		int rem = n % 10;
		p = (p) + pow(rem,count);
		n = n / 10;
	}
	if (p == temp) {
		cout << "It is an armstrong number";
	}
	else {
		cout << " It is not";
	}
	return 0;
}