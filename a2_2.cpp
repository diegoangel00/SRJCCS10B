
//Methods: input validation
//Nested loops


#include <iostream>

using namespace std;

int main(){
    //char that the user inputs after computer guess
    int sizes;
    char play;
    char filled;
    //variable that is changed by the algorithm
    int guess;
    const string ast = "*";  // Define a line of a black square
    const string space = " ";

    do{
        //Deciding how big the triangle should be
        //
        do{
            //prompts the user
            cout<< "Enter a value to represent the base of a pyramid (not to exceed 20):";
            //validates the input
            if (!(std::cin >> sizes) ) {
                cin.clear();
                cin.ignore(10000, '\n');
            }
            //if the input was correct it exits the loop
            if(sizes>=5 && sizes<=20)
                break;
            cout <<"OOPS! Looks like you typed some bad data here!"<<endl;
            cout <<"The acceptable base for the pyramid should range from 5 to 20..."<<endl<<endl;
        }while((sizes<5 || sizes>20));

        //deciding filled or not filled by the user

        do{
            //prompts the user
            cout <<endl<<"Enter pyramid type to display on postcard...Type 'f' for filled or 'h' for a hollow pyramid:";
            //validates the input
            if(!(std::cin >> filled) ) {
                cin.clear();
                cin.ignore(10000, '\n');
            }
            //if the input was correct it exits the loop
            if((filled == 'f')||(filled=='h'))
                break;
            cout <<"OOPS! Looks like you typed some bad data here!"<<endl;
        //validates the user input and runs until acceptable input
        }while((filled != 'f')||(filled!='h'));


        //*************************************************************************
        //Creates the image itself

        for (int j = 0; j < sizes/2; j++) {
        // White Rows
            for (int i = 0; i < sizes; i++) {
                cout<<space;
                cout<<ast;
                cout<<space;
            }
        }





        //asks the user if they want to play again
        cout <<"Type Y for Yes and N for No to generate another postcard:";
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

    //while for entire game, to repeat or not
    }while(play != 'n');
    cout <<"Now exiting the Postcard from Giza program......."<<endl;

    return 0;
}
