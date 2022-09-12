// Sample function setup source code that you may choose to include as part of your functional decomposition of the calendar program
#include <iostream>
#include <cstdlib>
#include <iomanip> //for setw

using namespace std;
//function prototypes
bool isLeapYear (/*in*/int); //a value-returning function returns a truth value
int startDayInputYear (/*in*/int );//a value-returning function returns an int
//other function prototypes

int main()
{
    int year, firstDayInCurrentMonth;
    int currentMonth = 1;
    int numDays;
    bool leap;
    string str; //maybe needed for input validation
    char choice;

    //prompt for input
    cout << "What year do you want a calendar for? ";
    cin >>year; // str?

    leap = isLeapYear( year ); //function call returns bool truth value
                             //needed to determine number of days in month for leap and non leap year

    firstDayInCurrentMonth = startDayInputYear( year ); // function call returns start day.
                                                        // Days of week numbered 0 through 9 for Sunday through Saturday.

    cout<< year << " " << leap << " " << firstDayInCurrentMonth <<endl; //remove statement - used to test key variable values

    //your code / function calls here

    return 0;
}


//function definitions with function related documentation

/*function IsLeapYear returns true if year is a leap year and
/ false otherwise.*/
bool isLeapYear (/*in*/int year)
//pre:value parameter has an assigned value
//post: //Is year not divisible by 4? If so, can't be a leap year
        //Is year not a multiple of 100? If so, is a leap year
        //Is year not a multiple of 400? If so, then is not a leap year
        //returns a truth value
{
    return   ((year%4==0) && (year%100 !=0))||(year%400==0)  ;
}

//function uses a value parameter in four calculated values
//to determine and return startday.
int  startDayInputYear(/*in*/int year)
//pre: value parameter has an assigned value
//post: returns a startday in the range of  0 to 6
{
    int startday;
    int num1, num2, num3;
    num1 = (year - 1)/ 4;
    num2 = (year - 1)/ 100;
    num3 = (year - 1)/ 400;
    startday = (year + num1 - num2 + num3) %7;
    return startday;
}
