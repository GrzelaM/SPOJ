#include <iostream>
#include <cmath>
using namespace std;
const double PI = acos(-1.0);
int main()
{
	int series, persons, cut = 0;
	double resultCmCut = 0.0, cm = 0.0;
	cin >> series;
	for (int i = 0; i < series; i++) {
		cin >> cm >> persons;
		(persons % 2 == 0) ? cut = persons / 2: cut = persons;
		resultCmCut = (2 * PI * (cm / 2)) / cut / 2;
		printf("%.3f %d\n", resultCmCut, cut);
	}
	return 0;
}