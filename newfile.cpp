/*
David Chen
2017
TicTacToe Program in C++
*/

//include libraries
#include <iostream>
#include <stdlib.h>

using namespace std;
//declare global variables and other functions
void board(char array[][3]);
int X = 0;
int O = 0;
int T = 0;

//main function
int main()
{
  //declare local variables if any exist
  char input [2] = {' '};
  char array[3][3] = {' '};
  cout << "Welcome to the TicTacToe Game!" << endl;

  //cin move and check to see if move is legal, enter move if it is legal (using a 2d array).  Start with X.  Each

  while(1)
    {
      cout << "Input move (ex: a1): " << endl;
      cin >> input;

      if ((input[0] = 'a' || 'b' || 'c') && (input[1] = '1' || '2' || '3')) {
	cout << "Your move is legal." << endl;
	board(array);
	//make the move on the board
	cout << "Player 2, input your move: " << endl;
      } else {
	cout << "Your move is illegal. Try again: " << endl;
	cin >> input;
      }
    }
  
  //check to see if their is a win/tie
  /* board(array);
   */return 0;

}

//print board function
void board(char array[][3])
{
  cout << "  1 2 3" << endl;
  cout << "a " << array[0] << endl;
  cout << "b " << array[1] << endl;
  cout << "c " << array[2] << endl;
  //print this statement only at the conclusion of the game
  cout << "X wins: " << X << " | O wins: " << O << " | Ties: " << T << endl;
}

  //win function
  int win ()
{
  return 0;
}
