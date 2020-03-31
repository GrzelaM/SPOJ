#include <iostream>
#include <map>
#include <string>
#include <cmath>
using namespace std;
int main()
{
	int counter = 0, round_percent =0; 
	string sentence;
	map<char, double> letters; // klucz = litera, wartość = ilośc wystąpień
	map<char, double>::iterator itr;

	for (int i = 65; i <= 90; i++) {
		letters.insert(pair<char, double>(char(i), 0.0));
	}

	getline(cin, sentence);

	for (int i = 0; i < sentence.length(); i++) {
		if (sentence[i] != ' ') {
			itr = letters.find(sentence[i]);
			itr->second += 1;
			counter++;
		}
	}

	for (itr = letters.begin(); itr != letters.end(); ++itr) {
		round_percent = round((itr->second / counter) * 100);
		itr->second = round_percent;
	}

	for (itr = letters.begin(); itr != letters.end(); ++itr) {
		cout << itr->first;
		for (int i = 0; i < itr->second; i++) {
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}
