#include <iostream>
using namespace std;

/*
 * Class definition for DayOfYear
 * Represents a specific day in a year with month and day attributes.
 */
class DayOfYear
{
private:
    int month;
    int day;

public:
    void output();                       // Function to print the stored month and day
    void set(int new_month, int new_day) // Function to set new values for month and day
    {
        month = new_month;
        day = new_day;
    }

    // Constructor with default values (January 1 by default)
    DayOfYear(int initialMonth = 1, int initialDay = 1)
    {
        month = initialMonth;
        day = initialDay;
    }
};

/*
 * Member function to print the month and day.
 */
void DayOfYear::output()
{
    cout << "month = " << month;
    cout << ", day = " << day << endl;
}

int main()
{
    // Creating objects of DayOfYear class
    DayOfYear Birthday; // Uses default constructor (month = 1, day = 1)
    DayOfYear Today;    // Uses default constructor
    DayOfYear OtherDay; // Uses default constructor

    // The following lines were commented out but show another way to set values in the variables were public:
    // Birthday.day = 5;   // Direct access to private members is not allowed
    // Birthday.month = 9; // This would cause an error if uncommented

    // Setting values using the set() method
    Birthday.set(9, 5); // Sets Birthday to September 5

    Birthday.output(); // Prints: month = 9, day = 5
    Today.output();    // Prints: month = 1, day = 1 (default values)
    OtherDay.output(); // Prints: month = 1, day = 1 (default values)

    return 0;
}