#include<iostream>
#include<string>
#include<sstream>
using namespace std;

int main(){
	
	int x;
	string word;
	cin >> x;
	for (int i = 0; i < x; i++){
		cin >> word;
		cout << word.substr(0, word.length() / 2) << endl;
	}

	return 0;
}