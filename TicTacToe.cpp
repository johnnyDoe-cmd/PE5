int** CreateBoard(){
	return int x[3][3];
}
void DisplayBoard(int** tmp){
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			if(tmp[i][j] == 0){
				cout<<"O"
			}
			else if(tmp[i][j] == 1){
				cout<<"X"
			}
			else{
				cout<<" "
			}
		}
		cout<<endl;
	}

}
int main(){

	
}
