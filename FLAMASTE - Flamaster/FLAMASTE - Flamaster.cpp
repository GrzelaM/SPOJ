#include<iostream>
#include<string>
using namespace std;

int main() {
	int howManySeries; 
	cin >> howManySeries;
	for (int i = 0; i < howManySeries; i++) {
		string sentence; 
		cin >> sentence;
		for (int j = 0; j < sentence.length(); j++) {
			int counter = 1;
			if (sentence[j] == sentence[j + 1]) {
				while (sentence[j] == sentence[j + 1]) {
					counter++;
					j++;
				}
				if (counter < 3) {
					cout << sentence[j] << sentence[j];
				}
				else {
					cout << sentence[j] << counter;
				}
			}
			else {
				cout << sentence[j];
			}
		}
		cout << endl;
	}
	return 0;
}
