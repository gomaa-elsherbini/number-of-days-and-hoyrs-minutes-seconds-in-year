#include <iostream>
#include <string>
//#include <vector>
using namespace std;




int readYear()
{
    int num;

    cout << "\nPlease Enter Number? ";
    cin >> num;

    return num;
}


bool isLeapYear(short year)
{
    return (year % 400 == 0 || ((year % 4 == 0) && (year % 100 != 0)));
}

short numberOfDaysInYear(short year)
{
    return isLeapYear(year) ? 366 : 365;
}

int numberOfHoursInYear(short year)
{
    return (numberOfDaysInYear(year)*24);
}

int numberOfMinutesInYear(short year)
{
    return numberOfHoursInYear(year) * 60;
}

int numberOfSecondsInYear(short year)
{
    return numberOfMinutesInYear(year) * 60;
}


int main()
{
    short year   = readYear();
    
    cout << "\nNumber Of Days  in year : [" << year << "] is " << numberOfDaysInYear(year) << "\n";
    cout << "Number Of Hours   in year : [" << year << "] is " << numberOfHoursInYear(year) << "\n";
    cout << "Number Of Minutes in year : [" << year << "] is " << numberOfMinutesInYear(year) << "\n";
    cout << "Number Of Seconds in year : [" << year << "] is " << numberOfSecondsInYear(year) << "\n";



    cout << "\n";
    system("pause>0");

    return main();

}