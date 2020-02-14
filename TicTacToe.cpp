#include <iostream>
#include <vector>
using namespace std;
// Name:Travis Cochran
// Assignment PE4p2

//creates 2-d vector of all 2's
//2 is the defualt empty cell
vector<vector<int> > CreateBoard(){
	vector<vector<int> > x{ { 2, 2, 2 }, 
                               { 2, 2, 2 }, 
                               { 2, 2, 2 } }; 
	return x;
}
//prints characters based on int values in board
void DisplayBoard(vector<vector<int> > tmp){
	for(int i =0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			if(tmp[i][j] == 0){
				cout<<"O";
			}
			else if(tmp[i][j] == 1){
				cout<<"X";
			}
			else{
				//E is for empty
				cout<<"E";
			}
		}
		cout<<endl;
	}

}
//gets input from one player for thier choice
vector<int> GetPlayerChoice(){
	int tmp;
	//ans holds choseen coords
	vector<int> ans;
	cout<<"Please type an x coord (0,2)"<<endl;
	cin>>tmp;
	ans.push_back(tmp);
	cout<<"Please type a y coord (0,2)"<<endl;
	cin>>tmp;
	ans.push_back(tmp);
	return ans;
}
//returns new copy of 2-d vector wiith updated cell
vector<vector<int> > PlaceMarker(vector<vector<int> > tmp,int x,int y,int type){
	tmp[x][y] = type;
	return tmp;
}
int main(){
	//new board
	vector<vector<int> > board = CreateBoard();
	//vectors to hold player choices
	vector<int> choice1;
	vector<int> choice2;
	//used to change player symbol
	int counter = 1;
	//endless while loop
	bool done = false;
	while(done != true){
		//player1
		cout<<"Player 1's turn:"<<endl;
		//get choice coords
		choice1 = GetPlayerChoice();
		board = PlaceMarker(board,choice1[1],choice1[0],counter%2);
		//show baord for nxt player
		DisplayBoard(board);
		//chnage symbol
		counter++;
		//player2
		cout<<"Player 2's turn:"<<endl;
		choice2 = GetPlayerChoice();
		board = PlaceMarker(board,choice2[1],choice2[0],counter%2);
		counter++;
		DisplayBoard(board);
	}
	
}

