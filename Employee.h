
class Employee{
    private: char name[32];
    private: char initial;
    private: int age;
    private: bool isAdult = false;
    private: int zipcode;
    private: short wage;
    private: int daysWorked;
    private: int hoursWorkedPerDay;
    static const double tax;

    int hours;
    int taxableHours = 0;

    double grossIncome;
    double netIncome;

public: void Read();
public: void Write();

};
