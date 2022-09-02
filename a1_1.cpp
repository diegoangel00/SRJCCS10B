#include <iostream>

using namespace std;

int main(){
    //sep is the "/" symbol used to separate the inputs
    char sep;
    //variable declaration for the date format
    int day;
    int month;
    int year;

    //prompt for the user
    cout<< "Enter a date in the format month/day/2-digit-year:";

    //input from the user *This does not validate the users input*
    //input is separated into 3 different variables for easy comparison in next partz
    std::cin >> month >> sep >> day >> sep >> year;

    // uses conditional statement to...
    // checks to see it the month*day is equal to the last 2 digits of the year
    // if this is true, output is magic, otherwise not
    if(month*day == year)
        cout<<"The date is magic!"<<endl;
    else
        cout<<"The date is not magic"<<endl;
    return 0;
}
