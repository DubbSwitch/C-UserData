#include "Employee.h"
#include <iostream>
using namespace std;

const double Employee::tax = 100 * 0.2f;

void Employee::Read() {
    cout << "\nEnter your name, mate: ";
    cin >> name;
    cout << "\nEnter your last initial: ";
    cin >> initial;
    cout << "\nEnter your age, mate: ";
    cin >> age;
    cout << "\nEnter your zip code, mate: ";
    cin >> zipcode;
    cout << "\nWhat are your hourly wages, mate?: ";
    cin >> wage;
    cout << "\nHow many days did you work this week?: ";
    cin >> daysWorked;
    cout << "\n";

    unsigned int day = 0;
    if (age > 19) isAdult = true;
    for (int i = 0; i < daysWorked; i++) {
        cout << "\n\tHow many hours did you work for day " << day + 1 << ": "; day++;
        cin >> hoursWorkedPerDay;
        taxableHours += hoursWorkedPerDay;
    }

    Employee::grossIncome = taxableHours * wage;
    Employee::netIncome = grossIncome - tax;
  };

void Employee::Write() {
    cout << "\n" << name << " " << initial << " worked " << taxableHours << " hours this week at $" << wage << " per hour.";
    cout << "\n" << name << " is " << age << " years of age.";

    cout << "\n\n" << "Gross Income: " << grossIncome;
    cout << "\n" << "Net Income: " << netIncome << "\n";
};
