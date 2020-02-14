int** CreateBoard(){
	return int x[3][3];
}
void DisplayBoard(int** tmp){
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			if(tmp[i][j] == 0){
				cout<<"O";
			}
			else if(tmp[i][j] == 1){
				cout<<"X";
			}
			else{
				cout<<" ";
			}
		}
		cout<<endl;
	}

}
int* GetPlayerChoice(){
	int ans = [2];
	cout<<"Please type an x coord (0,3)"<<endl;
	cin>>ans[0];
	cout<<"Please type a y coord (0,3)"<<endl;
	cin>>ans[1];
	return ans;
}
int** PlaceMarker(int tmp**,int x,int y,int type){
	tmp[x][y] = type;
}
int main(){

	
}
