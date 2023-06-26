#include<iostream>
using namespace std;
int main(){
	int arr[4][4]={ 
	                {1,2,3,4},
			        {5,6,7,8},
			        {9,10,11,12},
			        {13,14,15,16}
	    };
	    int n=4;
	    int target=40;
	    int row= 0;
	    int col= n-1;
	 bool found=false;
	 while(col>=0 && row<=n-1){
	 	if(target==arr[row][col]){
	 		found=true;
	 		break;
		 }
		 else if(target<arr[row][col]){
		 	col--;
		 }
		 else{
		 	row++;
		 }
	 }
	 cout<<(found ? "found":"not found")<<endl;
	
	return 0;
}
