
class Employee{
    private: char name;
    private: char initial;
    private: int age;
    private: bool isAdult = false;
    private: int zipcode;
    private: short wage;
    private: int daysWorked;
    private: int hoursWorkedPerDay;
    static const double TAX;

    int hours;
    int taxableHours;

    double grossIncome;
    double netIncome;
    double taxDeducted;


public: void Read();
public: void Write();

};
