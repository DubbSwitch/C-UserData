
class Employee{
    private: char name[32];
    private: int age;
    private: bool isAdult = false;
    private: int zipcode;
    private: short wage;
    private: int daysWorked;
    private: int hoursWorkedPerDay[7];
    static const double TAX;

    int hours;
    int taxableHours;

    double grossIncome;
    double netIncome;
    double taxDeducted;


public: void Read();
public: void Write();

};