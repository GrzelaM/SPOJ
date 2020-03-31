#include <iostream> 
#include <cstring>  
#include<string>
using namespace std;

//0-północ
//1-południe
//2-zachód
//3-wschód
struct wsp {
	int x = 0;
	int y = 0;
};

int main() {
	int ile, n, a, b;
	cin >> ile;
	for (int i = 0; i < ile; i++) {
		cin >> n;
		wsp s;
		for (int j = 0; j < n; j++) {
			cin >> a >> b;
			for (int k = 0; k < b; k++) {
				switch (a) {
				case 0:
					s.y++;
					break;
				case 1:
					s.y--;
					break;
				case 2:
					s.x--;
					break;
				case 3:
					s.x++;
					break;
				}
			}
		}
		if (s.x == 0 && s.y == 0) {
			cout << "studnia" << endl;
		}
		else {
			if (s.x == 0) {
				if (s.y < 0) {
					cout << "1 " << abs(s.y) << endl;
				}
				else {
					cout << "0 " << abs(s.y) << endl;
				}
			}
			else if (s.y == 0) {
				if (s.x < 0) {
					cout << "2 " << abs(s.x) << endl;
				}
				else {
					cout << "3 " << abs(s.x) << endl;
				}
			}
			else {
				if (s.y < 0) {
					cout << "1 " << abs(s.y) << endl;
				}
				else {
					cout << "0 " << abs(s.y) << endl;
				}
				if (s.x < 0) {
					cout << "2 " << abs(s.x) << endl;
				}
				else {
					cout << "3 " << abs(s.x) << endl;
				}
			}
		}

	}
	return 0;
}
