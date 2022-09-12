//Methods: input validation
//Functions
//File processing + validation
//Nested loops + validation loops

//**************
//What does this program do?
//Loads in file and completes a...
//ROT13—A Caesar Cipher Program
#include <iostream>
#include <string>
#include <fstream>

using namespace std;


//string rot13(string); // Function prototype


int main(){
    //char that the user inputs after computer guess

    ifstream inputFile;
    int sizes;
    char play; // Char to check if the user wants to play again
    char filled;
    string filename;
    string character;


    //Welcome message
    cout<<"*****************************************"<<endl;
    cout<<"ROT13 - A Caesar cipher program"<<endl;
    cout<<"*****************************************"<<endl;
    do{
            //prompts the user
            cout<< "Enter the data output file to store Caesar cipher translated text:";
            cin >> filename;

            //opens if valid
            if(inputFile){
                //opens file
                inputFile.open(filename);
                while (! inputFile.eof()){
                    //getline(inputFile,character);
                    inputFile >> character;
                    cout<< character;
                }
                cout<< "\nSuccess"<<endl;
                //closes file
                inputFile.close();
            }
            else{
                //Error Message:
                cout<<"Please enter a valid filename. "<<endl;
            }



            //deciding filled or not filled by the user



            //asks the user if they want to play again
            cout <<"Great! Do you want to try another file to convert to ROT13 (y/n)? ";

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

//***************************************************************


//string rot13(/*in*/ string character) {// The function heading
//        for (int i = 0; i < character.size; i++) {
//            switch(character(i)){
//                case 'a':

                    //break;
                //case 'b':
                  //  play = 'n';
                   // break;
                //case 'c':
                 //   play = 'y';
                  //  break;
                //case 'd':
                  //  play = 'y';
                   // break;
           // }
        //}
        //return "Bye";
    //}

