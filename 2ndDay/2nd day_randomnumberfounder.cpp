/******************************************************************************

                              2nd day of challenge
                         abdelhamidmhnitich@gmail.com
            a code that generates a random number and looks for it
*******************************************************************************/

#include <iostream>
using namespace std;
int numberToguess; // numbet to guess
int currentplayerNumber; //  guessing low Limits
int highlimit; // high limit of guessing
int guessCount; // guessing counter
int playerNumber = 1; // initial number given by a player

main()
{
    numberToguess = rand() %100 + 1;// not a pure random number
    currentplayerNumber = 0;// initial guessing low Limits
    highlimit = 100 ;// initial high limit of guessing
    guessCount = 0;// initialize guessing counter
    cout<<"numberToguess :"<<numberToguess<<'\n';//show number to guess on std output
    while(playerNumber != numberToguess) //while automatique generated playerNumber doesn't equal  the numberToguess
    {
        cout<<"Limits"<< currentplayerNumber<< '\n'; //the current player Number
         cout<<"value ["<<guessCount<<"]?"; // guessing counter
         guessCount++; // increment guessing counter
         if (playerNumber == numberToguess) // if player number equals number to guess
         {
             break; // bingo   
         }else // if not
           {

             playerNumber++;// increment player number

            }

     }

    cout <<"bingo °=°"; // bingo we found the random number
    return playerNumber;
}
