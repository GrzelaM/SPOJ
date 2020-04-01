#include <iostream>
#include <math.h>
using namespace std;

struct wsp {
    int x;
    int y;
};

int main()
{
    int series, days, theFastestSailor;
    wsp start, meta;
    double distance;
    bool no;
    string wind;
    std::ios_base::sync_with_stdio(false);
    cin >> series;
    for (int s = 0; s < series; s++) {
        no = true;
        distance = 0.0;
        theFastestSailor = 0;
        cin >> start.x >> start.y >> meta.x >> meta.y >> days;
        cin >> wind;
        if (start.x == meta.x && start.y == meta.y) {
            cout << theFastestSailor << '\n';
            no = false;
        }
        else {
            for (int i = 0; i < days; i++) {
                theFastestSailor++;
                distance = sqrt(pow((meta.x - start.x), 2) + pow((meta.y - start.y), 2));
                switch (wind[i]) {
                case 'N':
                    if (distance > sqrt(pow((meta.x - start.x), 2) + pow((meta.y - (start.y + 1)), 2))) {
                        start.y++;
                    }
                    break;
                case 'S':
                    if (distance > sqrt(pow((meta.x - start.x), 2) + pow((meta.y - (start.y - 1)), 2))) {
                        start.y--;
                    }
                    break;
                case 'E':
                    if (distance > sqrt(pow((meta.x - (start.x + 1)), 2) + pow((meta.y - start.y), 2))) {
                        start.x++;
                    }
                    break;
                case 'W':
                    if (distance > sqrt(pow((meta.x - (start.x - 1)), 2) + pow((meta.y - start.y), 2))) {
                        start.x--;
                    }
                    break;
                default:
                    break;
                }
                if (start.x == meta.x && start.y == meta.y) {
                    cout << theFastestSailor << '\n';
                    no = false;
                    break;
                }
            }
        }
        if (no) {
            cout << "NIE" << '\n';
        }
    }
    return 0;
}