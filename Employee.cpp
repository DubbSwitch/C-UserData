#include "Employee.h"
#include <iostream>
using namespace std;

const double Employee::TAX = 0.02f;

void Employee::Read() {
    cout << "Enter you first and last name: ";
    cin >> name;
    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter your zipcode: ";
    cin >> zipcode;
    cout << "Enter your hourly wage: ";
    cin >> wage;
    cout << "How many days did you work this week?: ";
    cin >> daysWorked;
    cout << "\n";

    unsigned int day = 0;
    if (age > 19) isAdult = true;
    for (int i = 0; i < daysWorked; i++) {
        cout << "\bHow many hours did you work for day " << day + 1 << ": ";
        cin >> hoursWorkedPerDay[day];
        day++;
    }
    day = 0;
    for (int i = 0; i < daysWorked; i++) {
        hours = hoursWorkedPerDay[i] + taxableHours;
        taxableHours = hours;
    }

    grossIncome = taxableHours * wage;
    netIncome = TAX * grossIncome;
    taxDeducted = TAX * grossIncome;
  };

void Employee::Write() {
    cout << "\n\t" << name << " worked " << taxableHours << " hours this week at $" << wage << " per hour.";
    cout << "\t" << name << " is " << age << " years of age.";

    cout << "\n\t" << "Gross Income: " << grossIncome;
    cout << "\t" << "Net Income: " << netIncome;
    cout << "\t" << "Net Income: " << netIncome;
};
