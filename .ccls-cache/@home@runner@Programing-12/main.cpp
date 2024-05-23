#include "sentence.h"  // Додано включення заголовного файлу з оголошеннями функцій та структури
#include <iostream>
using namespace std;
 Data date1;
 Data date2;

int main() {
    // Введення дат
    cout << "Введіть першу дату (ДД:ММ:РР): ";
    inputDate(date1);
    cout << "Введіть другу дату (ДД:ММ:РР): ";
    inputDate(date2);

    // Порівняння та виведення дат у хронологічному порядку
    compareAndPrint(date1, date2);

    return 0;
}
