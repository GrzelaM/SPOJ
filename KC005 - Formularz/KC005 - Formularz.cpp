#include <iostream>
#include <sstream>
using namespace std;

void getTheData(string, string *, string *,  int *, int *, int *); 
bool checkNameOrSurname(string, bool); 
bool checkDate(int, int, int); 
int result(bool, bool, bool); 
int main()
{
    string oneLine; 
    while (getline(cin, oneLine)) {
        oneLine += "!";
        string  II, NN, *pointerName = &II, *pointerLastName = &NN; // II - imie, NN - nazwisko,  RR - rok, MM - miesiąc, DD - dzień
        int RR, MM, DD, *pointerYear = &RR, *pointerMonth = &MM, *pointerDay = &DD; 
        getTheData(oneLine, pointerName, pointerLastName, pointerYear, pointerMonth, pointerDay);
        cout << result(checkNameOrSurname(II,true), checkNameOrSurname(NN, false), checkDate(RR, MM, DD)) << endl;
    }
    return 0;
}

int result(bool name, bool lastName, bool date) {
    if (name) {
        if (lastName) {
            if (date) {
                return 3;
            }
            else {
                return 2;
            }
        }
        else {
            return 1;
        }
    }
    return 0;
}

bool checkDate(int year, int month, int day) {
    if (year >= 1900 && year <= 2000) {
        if (month >= 1 && month <= 12) {
            if (day >= 1 && day <= 31) {
                return true;
            }
            else {
                return false;
            }
        }
        else {
            return false;
        }
    }
    return false;
}

bool checkNameOrSurname(string name_lastName, bool ifName) {
    if (ifName) { // jeśli imie == true wtedy imię, w przeciwnym wypadku nazwisko
        if (name_lastName.length() > 10) {
            return false;
        }
    }
    else {
        if (name_lastName.length() > 20) {
            return false;
        }
    }
    if (isupper(name_lastName[0])) {
        for (int i = 1; i < name_lastName.length(); i++) {
            if (!islower(name_lastName[i])) {
                return false;
            }
        }
        return true;
    }
    return false;
}

void getTheData(string oneLine, string *pointerName, string *pointerLastName, int *pointerYear, int *pointerMonth, int *pointerDay) {
    int i = 6;
    string year, month, day;
    while (char(oneLine[i]) != ';') {
        *pointerName += char(oneLine[i]);
        i++;
    }
    i += 12;
    while (char(oneLine[i]) != ';') {
        *pointerLastName += char(oneLine[i]);
        i++;
    }
    i += 12;
    while (char(oneLine[i]) != '-') {
        year += char(oneLine[i]);
        i++;
    }
    i++;
    while (char(oneLine[i]) != '-') {
        month += char(oneLine[i]);
        i++;
    }
    i++;
    while (char(oneLine[i]) != '!') {
        day += char(oneLine[i]);
        i++;
    }
    stringstream y(year), m(month), d(day); // wstępnie sprawdzam rok, miesiąc oraz dzień pod względem długości oraz poprawności użytych znaków
    if (year.length() != 4 || int(year[0]) < 48 || int(year[0]) > 57 || int(year[1]) < 48 || int(year[1]) > 57 || int(year[2]) < 48 || int(year[2]) > 57 || int(year[3]) < 48 || int(year[3]) > 57) {
        *pointerYear = 100;
    }
    else if (month.length() != 2 || int(month[0]) < 48 || int(month[0]) > 57 || int(month[1]) < 48 || int(month[1]) > 57) {
        *pointerMonth = 100;
    }
    else if (day.length() != 2 || int(day[0]) < 48 || int(day[0]) > 57 || int(day[1]) < 48 || int(day[1]) > 57) {
        *pointerDay = 100;
    }
    else {
        y >> *pointerYear;
        m >> *pointerMonth;
        d >> *pointerDay;
    }
}
