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
  int X = 0;
  int O = 0;
  int T = 0;
  
  cout << "Welcome to the TicTacToe Game!" << endl;

  while (1)
    {
      board(array, X, O, T);
      cout << "Input move (ex: a1): " << endl;
      cin >> input;
      changeboard(array, input, player);
      if (win(array) == 'X'){
	cout << "X wins!";
	X++;
	break;
      }else if (win(array) == 'O'){
	cout << "O wins!";
	O++;
	break;
      }else if (win(array) == 'T'){
	cout << "Tie!";
	T++;
	break;
      }
	changeplayer(player);
    }
   return 0;

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
  
  //if no win
  return '/';
}

void changeplayer(char player){
  if (player == 'X')
    player = 'O';
  else
    player - 'X';
}
