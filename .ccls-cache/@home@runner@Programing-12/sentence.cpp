#include "sentence.h"
#include <iostream>
using namespace std;

Date date1;
Date date2;

void inputDate(Date &date) {
    char colon; // Для символу ':'
    cin >> date.day >> colon >> date.month >> colon >> date.year;
}

void printDate(const Date &date) {
    if (date.day < 10) cout << "0";
    cout << date.day << ":";
    if (date.month < 10) cout << "0";
    cout << date.month << ":";
    if (date.year < 10) cout << "0";
    cout << date.year;
}

bool isEarlier(const Date &d1, const Date &d2) { // Параметри перейменовано для уникнення конфлікту імен
    if (d1.year != d2.year) {
        return d1.year < d2.year;
    } else if (d1.month != d2.month) {
        return d1.month < d2.month;
    } else {
        return d1.day < d2.day;
    }
}

void compareAndPrint(const Date &d1, const Date &d2) { // Параметри перейменовано для уникнення конфлікту імен
    if (isEarlier(d1, d2)) {
        printDate(d1);
        cout << " ";
        printDate(d2);
    } else {
        printDate(d2);
        cout << " ";
        printDate(d1);
    }
    cout << endl;
}
