#include<iostream>

using namespace std;

int main(){

	int liczba, wynik=0;

	for (int i = 0; i < 10; i++){
		cin >> liczba;
		wynik += liczba;
		cout << wynik << endl;
	}

	return 0;
}