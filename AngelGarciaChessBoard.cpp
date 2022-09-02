//******************************************************************
// Chessboard program
// This program prints a chessboard pattern that is built up from
// basic strings of white and black characters.
//******************************************************************
#include <iostream>
#include <string>
using namespace std;

const string BLACK = "%%%%%";  // Define a line of a black square
const string BLACKSIDE = "%   %";
const string WHITE = "     ";  // Define a line of a white square

int main ()
{
  string whiteRow;          // A row beginning with a white square
  string blackRow;          // A row beginning with a black square
  string blackMid;          // A row beginning with a black square
  string whiteMid;          // A row beginning with a black square

  // Create a white-black row by concatenating the basic strings
  whiteRow = WHITE + BLACK + WHITE + BLACK + WHITE + BLACK + WHITE + BLACK;
  whiteMid = WHITE + BLACKSIDE + WHITE + BLACKSIDE + WHITE + BLACKSIDE + WHITE + BLACKSIDE;
  // Create a black-white row by concatenating the basic strings
  blackRow = BLACK + WHITE + BLACK + WHITE + BLACK + WHITE + BLACK + WHITE;
  blackMid = BLACKSIDE + WHITE + BLACKSIDE + WHITE + BLACKSIDE + WHITE + BLACKSIDE + WHITE;
/*
for (int j = 0; j < 4; j++) {
    // White Rows
    for (int i = 0; i < 8; i++) {
        //if statement chooses top and bottom to be solid line
        if(i==0 || i == 7){
            cout << whiteRow << endl;
        }
        //else is used to print normal hollow middle
        else{
            cout << whiteMid << endl;
        }
    }
    // Black Row
    for (int i = 0; i < 8; i++) {
        //if statement chooses top and bottom to be solid line
        if(i==0 || i == 7){
            cout << blackRow << endl;
        }
        //else is used to print normal hollow middle
        else{
            cout << blackMid << endl;
        }
    }
}
*/
/*
int num;
int total = 0;
cout << "Enter a number 1 to 10:";
cin >> num;
switch(num)
{
case 1:
case 2: total = 5;
case 3:total = 10;
case 4:total = total + 3;
case 8:total = total + 6;
default:total = total + 4;

}
cout << total << endl;

int donuts = 10;
if (donuts=1)
    donuts = 0;
else donuts +=2;
cout << donuts << endl;

int x = -1;
cout<< "Enter a 0 or 1:"<<endl;
cin >> x;
if (x)
    cout<<"true"<<endl;
else
    cout<<"false"<<endl;
*/
int x = 5;
if(x=2)
    cout << "This true" <<endl;
else
    cout << "This false" <<endl;
    cout<<"THat's all"<<endl;


//  system("PAUSE"); //to pause console output
  return 0;
}

//Step #6 for part 1:
/*
I would Write 2 functions, one that writes the white rows and another that writes the black rows
I would pass 2 numbers to the function, that would be the dimensions of how wide and how tall the rows should be
Within these functions I would also declare each of the rows so then the main program would simply just be the for loop of how many white/black rows there should be
Parameters Passes to both functions: (width,height) which are integers.
Function 1: Declares and creates White Rows
Function 2: Declares and creates Black Rows
*/

//******************************************************************
//2. Short Answer Questions
//******************************************************************
/*
1.What computer are you using? Mac, PC or other?
Answer: I am using a desktop PC and a Laptop, I haven't figure out which one I will stick with yet for the year.

2.Which operating system are you using?
Answer: Windows 10 Pro

3.Which C++ system are you using? CodeBlocks, Visual C++, XCode (MAC) or an online compiler such as repl.it
Answer: CodeBlocks

4.How many files where created as a result of writing, debugging and compiling each program?
Answer:

5.Describe a few features while programming in C++ that you found quite useful.
Answer: I found the autofill the most useful since it was suggested and I can autofill it with enter to type faster.

6.Describe any challenges you faced while programming in C++.
Answer: I mainly had been using Matlab for years so seeing all the other Logs and multiple boxes pop up instead of one maybe me a little nervous.
Also getting used to declaring the variables before being used is something to get used to instead of being able to declare it without needing to specify the type of variable.
*/
