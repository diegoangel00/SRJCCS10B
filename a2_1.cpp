
/*
This file is  plays a number guessing game with a Human user.
The Human user will think of a number between 1 and 100, inclusive.
The program will make guesses and the user will tell the program to guess higher or lower.
*/
//Methods: Binary Search


#include <iostream>

using namespace std;

int main(){
    //char that the user inputs after computer guess
    char TheUser;
    char play;
    //variable that is changed by the algorithm
    int guess;
    int mid;
    int maxi;
    int mini;
    do{
        guess = 50;
        maxi = 100;
        mini = 1;

        //prompt for the user
        cout<< "Think of a number between 1 and 100."<<endl;
        do{
            cout<< "My guess is "<< guess;
            cout << " Enter 'l' if your number is lower, 'h' if it is higher, 'c' if it is correct: ";
            cin >> TheUser;
            //mid = (maxi-mini)/2;
            switch(TheUser){
                case 'l':
                    //stores this guess as the highest going forward
                    maxi = guess;
                    // stores the midpoint between the highest and lowest values for next guess
                    guess = (maxi+mini)/2;
                    break;

                case 'h':
                    //stores this guess as the lowest going forward
                    mini = guess;
                    // stores the midpoint between the highest and lowest values for next guess
                    guess = (maxi+mini)/2 ;
                    break;

                case 'c':
                    //ends the loop since the guess is now correct
                    break;
            }
        }while(TheUser != 'c');
        cout <<"Great! Do you want to play again (y/n)? ";

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
            default: cout<<"invalid choice"<<endl;
                break;
        }

    }while(play != 'n');
    return 0;
}

