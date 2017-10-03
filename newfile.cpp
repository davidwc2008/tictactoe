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
void board(char array[4][4]);
void Xinput(char input [2]);
int X = 0;
int O = 0;
int T = 0;

//main function
int main()
{
  //declare local variables if any exist
  char array[4][4] = {' ','1','2','3','a',' ',' ',' ','b',' ',' ',' ','c',' ',' ',' '};
  char input [2] = {' '};
  cout << "Welcome to the TicTacToe Game!" << endl;

  //cin move and check to see if move is legal, enter move if it is legal (using a 2d array).  Start with X.  Each
  board(array);
  cout << "Input move (ex: a1): " << endl;
  cin >> input;
  Xinput(input);
  //check to see if their is a win/tie

   return 0;

}

//print board function
void board(char array[4][4])
{
  for (int i = 0; i < 4; i++){
    for (int j = 0; j < 4; j++){
      cout << array[i][j] << " ";
    }
    cout << endl;
  }
  //print this statement only at the conclusion of the game
  cout << "X wins: " << X << " | O wins: " << O << " | Ties: " << T << endl;
}

void Xinput(char array[4][4], char input [2])
{
  if ((input[0] == 'a') && (input[1] == '1')) {
    cout << "Your move is legal." << endl;
    array[2][2] = 'X';
    board(array);
  }else if ((input[0] == 'a') && (input[1] == '2')){
    cout << "Your move is legal." << endl;
    array[2][3] = 'X';
    board(array);
  }else if ((input[0] == 'a') && (input[1] == '3')){
    cout << "Your move is legal." << endl;
    array[2][4] = 'X';
    board(array);
  }else if ((input[0] == 'b') && (input[1] == '1')){
    cout << "Your move is legal." << endl;
    array[3][2] = 'X';
    board(array);
  }else if ((input[0] == 'b') && (input[1] == '2')){
    cout << "Your move is legal." << endl;
    array[3][3] = 'X';
    board(array);
  }else if ((input[0] == 'b') && (input[1] == '3')){
    cout << "Your move is legal." << endl;
    array[3][4] = 'X';
    board(array);
  }else if ((input[0] == 'c') && (input[1] == '1')){
    cout << "Your move is legal." << endl;
    array[4][2] = 'X';
    board(array);
  }else if ((input[0] == 'c') && (input[1] == '2')){
    cout << "Your move is legal." << endl;
    array[4][3] = 'X';
    board(array);
  }else if ((input[0] == 'c') && (input[1] == '3')){
    cout << "Your move is legal." << endl;
    array[4][4] = 'X';
    board(array);
  }else{
    cout << "Your move is illegal. Try again: " << endl;
    cin >> input;
  }
}
/*
  //win function
  int win ()
{
  return 0;
}
*/
