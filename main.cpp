#include "Employee.h"
#include <iostream>
using namespace std;

int main(){
    Employee employees[5];
    unsigned short numEmployees;
    std::cout << "Number of employees: ";
    std::cin >> numEmployees;

    for (int i = 0; i < numEmployees; i++) {
        std::cout << "==============================================================\n";
        employees[i].Read();
    }

    for (int i = 0; i < numEmployees; i++){
        std::cout << "==============================================================\n";
        employees[i].Write();
    }
}
