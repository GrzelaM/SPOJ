#include<iostream>
using namespace std;

int main() {
	int  num1, num2;
	char znak;
	while (cin >> znak >> num1 >> num2) {
		switch (znak) {
		case '+':
			cout << num1 + num2 << endl;
			break;
		case '-':
			cout << num1 - num2 << endl;
			break;
		case '%':
			cout << num1 % num2 << endl;
			break;
		case '/':
			cout << num1 / num2 << endl;
			break;
		case '*':
			cout << num1 * num2 << endl;
		}
	}
	return 0;
}