#include <iostream>
using namespace std;
int main()
{
	string word; 
	int current = 0, sum = 0, counterForward = 0, counterBackward = 0, pom = 0, series; 
	cin >> series;
	for (int s = 0; s < series; s++) {
		current = 65; 
		sum = 0; 
		cin >> word;
		for (int i = 0; i < word.length(); i++) {
			pom = current;
			while (pom != int(word[i])) {
				if (pom + 1 > 90) {
					pom = 65;
				}
				else {
					pom++;
				}
				counterForward++;
			}
			pom = current;
			while (pom != int(word[i])) {
				if (pom - 1 < 65) {
					pom = 90;
				}
				else {
					pom--;
				}
				counterBackward++;
			}
			if (counterForward <= counterBackward) {
				sum += counterForward;
			}
			else {
				sum += counterBackward;
			}
			counterForward = 0;
			counterBackward = 0;
			current = int(word[i]);
		}
		cout << sum << endl;
	}
	return 0;
}
