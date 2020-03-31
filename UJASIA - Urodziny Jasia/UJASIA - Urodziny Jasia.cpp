#include<iostream> 
using namespace std;
////////////////////////////////////////////////////////////////////////////////////////
//                                                                                    //
//          Problem Józefa Flawiusza (także: permutacja Józefa Flawiusza)             // 
//           https://pl.wikipedia.org/wiki/Problem_J%C3%B3zefa_Flawiusza              //
//   https://www.youtube.com/watch?time_continue=817&v=uCsD3ZGzMgE&feature=emb_title  //
//                                                                                    //
////////////////////////////////////////////////////////////////////////////////////////
int remove(int n) {
    if (n == 1)
        return 1;

    if (n % 2 == 0)
        return 2 * remove(n / 2) - 1;
    else
        return 2 * remove(((n - 1) / 2)) + 1;
}
 
int main() {
    int series, age;
    cin >> series;
    for (int i = 0; i < series; i++) {
        cin >> age;
        cout << remove(age) << "\n";
    }
    return 0;
}