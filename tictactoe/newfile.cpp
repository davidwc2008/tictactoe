/*
David Chen
2017
TicTacToe Program in C++
*/

//include libraries
#include <iostream>

using namespace std;
//declare functions
void board(char array[4][4]);
void totals(int X, int O, int T);
void changeboard(char array[4][4], char input [2], char player);
void clear(char array[4][4]);
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

  //main while loop to play again
  while (again == 'y')
    {
      cout << "Welcome to the TicTacToe Game!" << endl;
      clear(array);
      board(array);
      //second while loop to continue inputting moves
      while (win(array) == '/')
	{
	  cout << "Input move (ex: a1): " << endl;
	  cin >> input;
	  changeboard(array, input, player);
	  board(array);
  
	  if (win(array) == 'X'){
	    cout << "X wins!" << endl;
	    X++;
	    totals(X, O, T);
	    break;
	  }else if (win(array) == 'O'){
	    cout << "O wins!" << endl;
	    O++;
	    totals(X, O, T);
	    break;
	  }else if (win(array) == 'T'){
	    cout << "Tie!" << endl;
	    T++;
	    totals(X, O, T);
	    break;
	  }
	  //change player
	  if (player == 'X')
	    player = 'O';
	  else
	    player = 'X';
	}
      cout << "Would you like to play again?  Press y for yes and n for no." << endl;
      cin >> again;
      
    }
  return 0;
}

//clear board function
void clear(char array[4][4])
{
  for (int i = 1; i < 4; i++){
    for (int j = 1; j < 4; j++){
      array[i][j] = ' ';
    }
  }
}

//print wins and ties
void totals(int X, int O, int T)
{
  cout << "X wins: " << X << " | O wins: " << O << " | Ties: " << T << endl;
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
}

//background- change the array
void changeboard(char array[4][4], char input [2], char player)
{
  while (1)
    {
      if ((input[0] == 'a') && (input[1] == '1') && (array[1][1] == ' ')) {
	cout << "Your move is legal." << endl;
	array[1][1] = player;
	break;
      }else if ((input[0] == 'a') && (input[1] == '2') && (array[1][2] == ' ')) {
	cout << "Your move is legal." << endl;
	array[1][2] = player;
	break;
      }else if ((input[0] == 'a') && (input[1] == '3') && (array[1][3] == ' ')) {
	cout << "Your move is legal." << endl;
	array[1][3] = player;
	break;
      }else if ((input[0] == 'b') && (input[1] == '1') && (array[2][1] == ' ')) {
	cout << "Your move is legal." << endl;
	array[2][1] = player;
	break;
      }else if ((input[0] == 'b') && (input[1] == '2') && (array[2][2] == ' ')) {
	cout << "Your move is legal." << endl;
	array[2][2] = player;
	break;
      }else if ((input[0] == 'b') && (input[1] == '3') && (array[2][3] == ' ')) {
	cout << "Your move is legal." << endl;
	array[2][3] = player;
	break;
      }else if ((input[0] == 'c') && (input[1] == '1') && (array[3][1] == ' ')) {
	cout << "Your move is legal." << endl;
	array[3][1] = player;
	break;
      }else if ((input[0] == 'c') && (input[1] == '2') && (array[3][2] == ' ')) {
	cout << "Your move is legal." << endl;
	array[3][2] = player;
	break;
      }else if ((input[0] == 'c') && (input[1] == '3') && (array[3][3] == ' ')) {
	cout << "Your move is legal." << endl;
	array[3][3] = player;
	break;
      }else{
	cout << "Your move is illegal. Try again: " << endl;
	cin >> input;
      }
    }
}

//check win, tie, or other
char win(char array[4][4])
{
  //first player win
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

  //second player win
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

  //if tie or other
  for (int i = 1; i < 4; i++){
    for (int j = 1; j < 4; j++){
      if (array[i][j] == ' '){
	return '/';
      }
      }
  }
  return 'T';
}
