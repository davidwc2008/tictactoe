/*
David Chen
2017
TicTacToe Program in C++
*/

//include libraries
#include <iostream>
#include <stdlib.h>

using namespace std;
//declare global variables (not allowed) and other functions
void board(char array[4][4], int X, int O, int T);
void changeboard(char array[4][4], char input [2], char player);
void changeplayer(char player);
char win(char array[4][4]);

//main function
int main()
{
  //declaration of local variables
  char array[4][4] = {' ','1','2','3','a',' ',' ',' ','b',' ',' ',' ','c',' ',' ',' '};
  char input [2] = {' '};
  char player = 'X';
  char again = 'y';
  int X = 0;
  int O = 0;
  int T = 0;

  while (again == 'y')
    {
      cout << "Welcome to the TicTacToe Game!" << endl;
      board(array, X, O, T);
      while (1)
	{
	  cout << "Input move (ex: a1): " << endl;
	  cin >> input;
	  changeboard(array, input, player);
	  board(array, X, O, T);
	  changeplayer(player);
	  if (win(array) == 'X'){
	    cout << "X wins!" << endl;
	    X++;
	    break;
	  }else if (win(array) == 'O'){
	    cout << "O wins!" << endl;
	    O++;
	    break;
	  }else if (win(array) == 'T'){
	    cout << "Tie!" << endl;
	    T++;
	    break;
	  }
	}
      cout << "Would you like to play again?  Press y for yes and n for no." << endl;
      cin >> again;
      
   return 0;
    }
}

//print board function
void board(char array[4][4], int X, int O, int T)
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

void changeboard(char array[4][4], char input [2], char player)
{

  if ((input[0] == 'a') && (input[1] == '1')) {
    cout << "Your move is legal." << endl;
    array[1][1] = player;
  }else if ((input[0] == 'a') && (input[1] == '2')){
    cout << "Your move is legal." << endl;
    array[1][2] = player;
  }else if ((input[0] == 'a') && (input[1] == '3')){
    cout << "Your move is legal." << endl;
    array[1][3] = player;
  }else if ((input[0] == 'b') && (input[1] == '1')){
    cout << "Your move is legal." << endl;
    array[2][1] = player;
  }else if ((input[0] == 'b') && (input[1] == '2')){
    cout << "Your move is legal." << endl;
    array[2][2] = player;
  }else if ((input[0] == 'b') && (input[1] == '3')){
    cout << "Your move is legal." << endl;
    array[2][3] = player;
  }else if ((input[0] == 'c') && (input[1] == '1')){
    cout << "Your move is legal." << endl;
    array[3][1] = player;
  }else if ((input[0] == 'c') && (input[1] == '2')){
    cout << "Your move is legal." << endl;
    array[3][2] = player;
  }else if ((input[0] == 'c') && (input[1] == '3')){
    cout << "Your move is legal." << endl;
    array[3][3] = player;
  }else{
    cout << "Your move is illegal. Try again: " << endl;
    cin >> input;
  }
}

char win(char array[4][4]){
  //first player
  if ((array[1][1] == 'X') && (array[1][2] == 'X') && (array [1][3] == 'X'))
    return 'X';
  if ((array[2][1] == 'X') && (array[2][2] == 'X') && (array [2][3] == 'X'))
    return 'X';
  if ((array[3][1] == 'X') && (array[3][2] == 'X') && (array [3][3] == 'X'))
    return 'X';

  if ((array[1][1] == 'X') && (array[2][1] == 'X') && (array [3][1] == 'X'))
    return 'X';
  if ((array[1][2] == 'X') && (array[2][2] == 'X') && (array [3][2] == 'X'))
    return 'X';
  if ((array[1][3] == 'X') && (array[2][3] == 'X') && (array [3][3] == 'X'))
    return 'X';

  if ((array[3][1] == 'X') && (array[2][2] == 'X') && (array [1][3] == 'X'))
    return 'X';
  if ((array[1][1] == 'X') && (array[2][2] == 'X') && (array [3][3] == 'X'))
    return 'X';

  //second player
  if ((array[1][1] == 'O') && (array[1][2] == 'O') && (array [1][3] == 'O'))
    return 'O';
  if ((array[2][1] == 'O') && (array[2][2] == 'O') && (array [2][3] == 'O'))
    return 'O';
  if ((array[3][1] == 'O') && (array[3][2] == 'O') && (array [3][3] == 'O'))
    return 'O';

  if ((array[1][1] == 'O') && (array[2][1] == 'O') && (array [3][1] == 'O'))
    return 'O';
  if ((array[1][2] == 'O') && (array[2][2] == 'O') && (array [3][2] == 'O'))
    return 'O';
  if ((array[1][3] == 'O') && (array[2][3] == 'O') && (array [3][3] == 'O'))
    return 'O';

  if ((array[3][1] == 'O') && (array[2][2] == 'O') && (array [1][3] == 'O'))
    return 'O';
  if ((array[1][1] == 'O') && (array[2][2] == 'O') && (array [3][3] == 'O'))
    return 'O';

  //if tie
  for (int i = 1; i < 4; i++){
    for (int j = 1; j < 4; j++){
      if ((array[i][j] == 'X') || (array[i][j] == 'O'))
	return 'T';
    }
  }

  //if no win, loss, or tie
  return '/';
}

void changeplayer(char player){
  if (player == 'X')
    player = 'O';
  else
    player = 'X';
}
