#include "sentence.h"  // Додано включення заголовного файлу з оголошеннями функцій та структури
#include <iostream>
using namespace std;
extern Date date1;//глобальна зміна 
extern Date date2;

int main() {
    // Введення дат
    cout << "Введіть першу дату (ДД:ММ:РР): ";
    inputDate(date1);
    cout << "Введіть другу дату (ДД:ММ:РР): ";
    inputDate(date2);
    compareAndPrint(date1, date2);
    isEarlier(date1, date2);
    return 0;
}
