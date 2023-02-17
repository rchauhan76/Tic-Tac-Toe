/*18. Tic-Tac-Toe Game
Write program that allows two players to play a game or tic-tac-toe. Use a two-
dimensional char array with three rows and three columns as the game board. Each
element of the array should be initialized with an asterisk (*). The program should run a
loop that does the following:
Displays the contents of the board array.
Allows player 1 to select a location on the board for an X. The program should ask
the user to enter the row and column numbers.
Allows player 2 to select a location on the board for an O. The program should ask
the user to enter the row and column numbers,
•
Determines whether a player has won, or a tie has occurred. If a player has won,
the program should declare that player the winner and end. If a tie has occurred, the
program should display an appropriate message and end.
Player 1 wins when there are three As in a row on the game board. The As can appear in a
rOW, in a column, or diagonally across the board. Player 2 wins when there are three Os in
a row on the game board. The Os can appear in a roW, in a column, or diagonally across
the board. A tie occurs when all of the locations on the board are full, but there is no winner.*/

# include <iostream>
using namespace std;

int array_game[3][3] ={ {'1' , '2', '3'},{'4' , '5', '6'}, {'7', '8', '9'} };
int row;
int column;
char token ='X';
bool tied= false;
int digit;


void fun_game1(){
    

    
    
    
    
    cout <<"     |      |    "<<endl;
    cout << array_game[0][0]<<"    |  "<<array_game[0][1]<<"   |  "<<array_game[0][2]<<endl;
    cout <<" _______________ "<<endl;
    cout <<"     |      |    "<<endl;
    cout << array_game[1][0]<<"    |  "<<array_game[1][1]<<"   |  "<<array_game[1][2]<<endl;
    cout <<"     |      |    "<<endl;
    cout <<" _______________ "<<endl;
    cout << array_game[2][0]<<"    |  "<<array_game[2][1]<<"   |  "<<array_game[2 ][2]<<endl;
    cout <<"     |      |    "<<endl;
}
void fun_game2(){

	if (token=='X'){
		cout << "player1 with X value will play";
	}
	 else if (token=='O'){
	 	cout << "player2 with O value will play";
		
	}
	cin>>digit;
	if (digit==1){
		row=0;
		column=0;
	}
	if (digit==2){
		row=0;
		column=1;
	}
	if (digit==3){
		row=0;
		column=2;
	}
	if (digit==4){
		row=1;
		column=0;
	}
	if (digit==5){
		row=1;
		column=1;
	}
	if (digit==6){
		row=1;
		column=2;
	}
	if (digit==7){
		row=2;
		column=0;
	}
	if (digit==8){
		row=2;
		column=1;
	}
	if (digit==9){
		row=2;
		column=2;
	}
	else if(digit<1 || digit>9){
		cout <<" wrong entry";
	}
	if (token =='X' && array_game[row][column]!='X' && array_game[row][column]!='O'){
		array_game[row][column]='X';
	    token='O';
	}
	else if(token=='O' && array_game[row][column]!='O' && array_game[row][column]!='X'){
        array_game[row][column]='O';
	     token='X';
	    }
	 else{
	 	cout <<" space is already filled ...fill the correct empty box"<<endl;
	 	fun_game2();
	 } 
	 fun_game1();  
     
}
bool fun_game3(){
	for (int i=0; i<3; ++i)
	 for(int i=0; i<3; i++)

	 if (token=='X'||token=='O')
	{	
    if(array_game[i][0] == array_game[i][1] && array_game[i][0] == array_game[i][2] || array_game[0][i] == array_game[1][i] && array_game[0][i] == array_game[2][i])
    return false;

    

    if(array_game[0][0] == array_game[1][1] && array_game[0][0] == array_game[2][2] || array_game[0][2] == array_game[1][1] && array_game[0][2] == array_game[2][0])
    return false;
     }

for (int i=0; i<3; ++i)
	for (int j=0; j<3; j++)
		if (array_game[i][j]!='X' && array_game[i][j]!='O')
			return true;
	
tied=true;
return false;
	
}
int main()
{  
	while(fun_game3())
	{
        fun_game1();
        fun_game2();
        fun_game3();
    }
	if (token=='X' && tied==false)
	{
		cout<<"player1 wins"<<endl;
	}
	else if(token=='0' &&tied==false){
		cout<<"player2 wins"<<endl;
	}
	else{
		cout<<"game is draw"<<endl;
	}
	return 0;
}