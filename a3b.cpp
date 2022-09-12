
//Methods: Functional Decomposition
//Functions
//Loops
//Data validation

#include <iostream>
#include <iomanip>

using namespace std;

//Functions
bool isLeapYear (/*in*/int); //a value-returning function returns a truth value
bool exitPrompt();                              // Prompts user if true, reruns program, otherwise quits
int  startDayInputYear(/*in*/int year);
int  prompt1();                                 // Prompts user and validates input

void daysOfWeek();
void CalendarMonthHeader (/*in*/ int);          // prints header for each month
void printMonth (/*in*/ int&);        // prints month days and sends out the first day of the next month
void whitespace (/*in*/int);                    // prints the specified amount of spaces or leading white spaces


//global variables
const int header = 7; //Changes the indentation of the header
int currentMonth = 1;  //initializes the month

int main(){
    //char that the user inputs after computer guess
    int sizes;
    char filled;
    //variable that is changed by the algorithm
    int guess;

    int year, firstDayInCurrentMonth;
    int monthsInYear = 12; //Number of months in a year
    int numDays;
    bool leap;
    bool cont;
    string str; //maybe needed for input validation
    char choice;

    //******************************************************************

    do{     //outermost do while statement if the user wants to enter another calender date.

        //Calls the prompt and validates the users answer
        year = prompt1();
        cout<<"\n  Calendar - "<<year<<endl<<endl;

        leap = isLeapYear( year ); //function call returns bool truth value
                             //needed to determine number of days in month for leap and non leap year

        firstDayInCurrentMonth = startDayInputYear( year ); // function call returns start day.
                                                        // Days of week numbered 0 through 7 for Sunday through Saturday.

        for (int i = 0; i < monthsInYear; i++) {
            CalendarMonthHeader(currentMonth);
            daysOfWeek();
            printMonth(firstDayInCurrentMonth);
        }

        cont = exitPrompt();

    //while for entire game, to repeat or not
    }while(cont);
    cout <<"\nNow exiting the calendar generator program......."<<endl;

    return 0;
}
//*****************************************************************
//Functions:

//isLeapYear and startDayInputYear are functions borrowed from leapyear.cpp
// Provided by Instructor: Sujan Sarkar

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
int prompt1(){
    int number;
    currentMonth = 1;
    do{ //Data validation for the entered date
        //prompts the user
        cout<< "What year do you want a calendar for?";

        //validates the input
        if (!(std::cin >> number) ) {
            cin.clear();
            cin.ignore(10000, '\n');
        }
        //if the input was correct it exits the loop
        if(number>0)
            break;

        //cout only occurs if calender year is wrong
        cout <<"non digit entered"<<endl;
    }while((number <= 0)); //end of data validation
    return number;
}
bool exitPrompt(){
        //asks the user if they want to play again
        char play;
        cout <<"Type Y to display a calendar for another year or any other key to exit: ";
        //gets the user input about whether or not they want to play again
        cin >> play;
        switch(play){
            case 'n':
                play = 'n';
                break;
            case 'N':
                play = 'n';
                break;
            case 'y':
                play = 'y';
                break;
            case 'Y':
                play = 'y';
                break;
                //if invalid input the program ends
            default: cout<<"invalid choice"<<endl;
                play = 'n';
        }
    if(play == 'y')
        return true;
    else
        return false;
}

void daysOfWeek (){
//prints the header for days of the week
cout <<" S  M  T  W  T  F  S"<<endl;
cout<<"____________________"<<endl;
}
//*********************************************
void printMonth (int& firstDay){
    firstDay++;
    int days = 0;
    //February
    if(currentMonth == 2){
        //29 days
        if(isLeapYear){
            days = 29;
        }
        //28 days
        else{
            days = 28;
        }
    }

    // April, June, September, November all have 30 days
    else if ((currentMonth == 4)||(currentMonth == 6)||
             (currentMonth == 9)||(currentMonth == 11)){
        days = 30;
    }

    // remaining months have 31 days
    else{
        days = 31;
    }

       switch(firstDay){
        case 1:
            whitespace(1);
            break;
        case 2:
            whitespace(4);
            break;
        case 3:
            whitespace(7);
            break;
        case 4:
            whitespace(10);
            break;
        case 5:
            whitespace(13);
            break;
        case 6:
            whitespace(16);
            break;
        case 7:
            whitespace(19);
            break;
        default: // default is for when you enter a number out of 1-12 range. for instance, 13
            cout<<"More than 7 days in a week!"<<endl;
        }
        cout<<"1"<<endl;
        for (int i = 0; i < days; i++) {

        }

        //changes the first day of the month
        switch(days){
        case 28:
            break;
        case 29:
            if(days==7)
                firstDay = (7 - firstDay) + 1;
            else
                firstDay;
            break;
        case 30:
            if(days >= 6)
                firstDay = (7 - firstDay) + 1;
            else
                firstDay++;
            break;
        case 31:
            if(days>=4)
                firstDay = (7 - firstDay) + 2;
            else
                firstDay+=2;
            break;
        default: // default is for when you enter a number out of 1-12 range. for instance, 13
            cout<<"More than 7 days in a week!"<<endl;
        }

}

void CalendarMonthHeader (/*in*/ int month){          // prints header for each month
//Displays the current month in an appropriately styled header
    whitespace(header);
           switch(month){
                case 1:
                    cout<<"January"<<endl;
                    break;
                case 2:
                    cout<<"February"<<endl;
                    break;
                case 3:
                    cout<<"March"<<endl;
                    break;
                case 4:
                    cout<<"April"<<endl;
                    break;
                case 5:
                    cout<<"May"<<endl;
                    break;
                case 6:
                    cout<<"June"<<endl;
                    break;
                case 7:
                    cout<<"July"<<endl;
                    break;
                case 8:
                    cout<<"August"<<endl;
                    break;
                case 9:
                    cout<<"September"<<endl;
                    break;
                case 10:
                    cout<<"October"<<endl;
                    break;
                case 11:
                    cout<<"November"<<endl;
                    break;
                case 12:
                    cout<<"December"<<endl;
                    break;
                default: // default is for when you enter a number out of 1-12 range. for instance, 13
                cout<<"More than 12 months!"<<endl;
            }
            //increments the months so that
            currentMonth++;
}

void whitespace (/*in*/int spaces){
//Creates a specific number of white spaces
    for (int i = 0; i < spaces; i++) {
        cout<<" ";
    }
}



//********************************
