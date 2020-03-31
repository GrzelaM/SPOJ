#include <iostream>
#include <string>
#include <map>
using namespace std;
int main()
{
    string sentence; 
    map<int, int> cl; // kod ascii - ilość wystąpień
    map<int, int>::iterator itr;
    while (getline(cin, sentence)) {
        sentence += '\n'; 
        for (int i = 0; i < sentence.length(); i++) { // Zwykły char (ten z std::string) może przechowywać wartości od -128 do 127. Typ unsigned char może od 0 - 255.
            if (cl.end() == cl.find(static_cast<unsigned char>(sentence[i]))) { 
                cl.insert(pair<int, int>(static_cast<unsigned char>(sentence[i]), 1));
            }
            else {
                itr = cl.find(static_cast<unsigned char>(sentence[i]));
                itr->second += 1;
            }
        }
    }
    for (itr = cl.begin(); itr != cl.end(); itr++) {
        cout << itr->first << " " << itr->second << endl;
    }
    return 0;
}
