#include<iostream>

using namespace std;
int main(){
     cout<<"AMAN GUPTA , VIT BHOPAL , 2ND YEAR"<<endl;
	int n = 5;
	int matrix[101][101];
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			matrix[i][j]=0;
		}	
	}
	
	int row = 0, col = 0;
	int direction = 0; 
	// right ->0 , down -> 1, left -> 2, up-> 3  

	int counter = 1;
	while( counter <= n*n ){

		matrix[row][col] = counter;
		
		if( direction==0 ){
			if( col == n-1 || matrix[row][col+1] > 0 ){
				direction = 1;// change direction
				row++;//Also start journey from below cell
			}else {
				col++;// direction is same
			}
			
			//Going down
		}else if ( direction==1 ) {
			if( row == n-1 || matrix[row+1][col] > 0 ){
				direction = 2;// change direction
				col--;
			}else{
				row++;
			}
			// Going left
		}else if ( direction==2 ) {
			if( col == 0 || matrix[row][col-1] > 0 ){
				direction = 3;// change direction
				row--;
			}else{
				col--;
			}	
			// Going up		
		}else{
			if( matrix[row-1][col] > 0 ){
				direction = 0;// change direction
				col++;
			}else{
				row--;//upward
			}			
		}
				
		counter++;
	}
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<matrix[i][j]<<" ";
		}
		cout<<endl;	
	}

	return 0;
}
