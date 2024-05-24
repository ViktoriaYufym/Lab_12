#pragma once

struct Date {
    int day;
    int month;
    int year;
};

extern Date date1;
extern Date date2;

void inputDate(Date &date);
void printDate(const Date &date);
bool isEarlier(const Date &date1, const Date &date2);
void compareAndPrint(const Date &date1, const Date &date2);
