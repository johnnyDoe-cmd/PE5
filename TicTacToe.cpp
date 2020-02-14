#include <iostream>
#include <vector>
using namespace std;
// Name:Travis Cochran
// Assignment PE4p2

vector<vector<int> > CreateBoard(){
	vector<vector<int> > x{ { 2, 2, 2 }, 
                               { 2, 2, 2 }, 
                               { 2, 2, 2 } }; 
	return x;
}
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
				cout<<"E";
			}
		}
		cout<<endl;
	}

}
vector<int> GetPlayerChoice(){
	int tmp;
	vector<int> ans;
	cout<<"Please type an x coord (0,2)"<<endl;
	cin>>tmp;
	ans.push_back(tmp);
	cout<<"Please type a y coord (0,2)"<<endl;
	cin>>tmp;
	ans.push_back(tmp);
	return ans;
}
vector<vector<int> > PlaceMarker(vector<vector<int> > tmp,int x,int y,int type){
	tmp[x][y] = type;
	return tmp;
}
int main(){
	//used to change player symbol
	vector<vector<int> > board = CreateBoard();
	vector<int> choice1;
	vector<int> choice2;
	int counter = 1;
	bool done = false;
	while(done != true){
		//player1
		cout<<"Player 1's turn:"<<endl;
		choice1 = GetPlayerChoice();
		board = PlaceMarker(board,choice1[1],choice1[0],counter%2);
		DisplayBoard(board);
		counter++;
		//player2
		cout<<"Player 2's turn:"<<endl;
		choice2 = GetPlayerChoice();
		board = PlaceMarker(board,choice2[1],choice2[0],counter%2);
		counter++;
		DisplayBoard(board);
	}
	
}

