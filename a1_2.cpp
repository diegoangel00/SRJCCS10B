#include <iostream>

using namespace std;

int main(){

    //variable declaration for the date format
    int day;
    int month;
    int year;

    //used for second prompt
    int choice;

    //prompt for the user
    cout<< "Please enter a date (three integers: month, day, year):";

    //input from the user *This does not validate the users input*
    //input is separated into 3 different variables for easy comparison in next partz
    std::cin >> month >> day >> year;

    //prompt for user
    cout <<"How would you like to print your date?"<<endl;
    cout <<"Month date, full year. (January 11, 1999): Enter 1."<<endl;
    cout <<"Abbreviated month date, full year (Jan. 1, 1999): Enter 2."<<endl;
    cout <<"Month/date/year (12/1/1999): Enter 3."<<endl;

    //conditional statement from user input
    cin>>choice;
    switch(choice){
        //case 1 for normal options
        case 1:
            switch(month){
                case 1:
                    cout<<"January "<<day<<", "<<year<<endl;
                    break;
                case 2:
                    cout<<"February "<<day<<", "<<year<<endl;
                    break;
                case 3:
                    cout<<"March "<<day<<", "<<year<<endl;
                    break;
                case 4:
                    cout<<"April "<<day<<", "<<year<<endl;
                    break;
                case 5:
                    cout<<"May "<<day<<", "<<year<<endl;
                    break;
                case 6:
                    cout<<"June "<<day<<", "<<year<<endl;
                    break;
                case 7:
                    cout<<"July "<<day<<", "<<year<<endl;
                    break;
                case 8:
                    cout<<"August "<<day<<", "<<year<<endl;
                    break;
                case 9:
                    cout<<"September "<<day<<", "<<year<<endl;
                    break;
                case 10:
                    cout<<"October "<<day<<", "<<year<<endl;
                    break;
                case 11:
                    cout<<"November "<<day<<", "<<year<<endl;
                    break;
                case 12:
                    cout<<"December "<<day<<", "<<year<<endl;
                    break;

                default: // default is for when you enter a number out of 1-12 range. for instance, 13
                    cout<<"invalid input!"<<endl;
            }break; //end of case 1 for normal options

        // Case 2 for output options
        case 2:
            // converts int into abbreviated month based on
            // input of the month variable
            switch(month){
                case 1:
                    cout<<"Jan. "<<day<<", "<<year<<endl;
                    break;
                case 2:
                    cout<<"Feb. "<<day<<", "<<year<<endl;
                    break;
                case 3:
                    cout<<"Mar. "<<day<<", "<<year<<endl;
                    break;
                case 4:
                    cout<<"Apr. "<<day<<", "<<year<<endl;
                    break;
                case 5:
                    cout<<"May. "<<day<<", "<<year<<endl;
                    break;
                case 6:
                    cout<<"Jun. "<<day<<", "<<year<<endl;
                    break;
                case 7:
                    cout<<"Jul. "<<day<<", "<<year<<endl;
                    break;
                case 8:
                    cout<<"Aug. "<<day<<", "<<year<<endl;
                    break;
                case 9:
                    cout<<"Sep. "<<day<<", "<<year<<endl;
                    break;
                case 10:
                    cout<<"Oct. "<<day<<", "<<year<<endl;
                    break;
                case 11:
                    cout<<"Nov. "<<day<<", "<<year<<endl;
                    break;
                case 12:
                    cout<<"Dec. "<<day<<", "<<year<<endl;
                    break;

                default: // default is for when you enter a number out of 1-12 range. for instance, 13
                    cout<<"invalid input!"<<endl;
            }break; // end of case 2

        //case 3 from normal options
        case 3:
            cout <<month<<"/"<<day<<"/"<<year<<endl;;
            break;
        default:
            cout<<"Invalid Selection"<<endl;
            break;
    }

    return 0;
}
