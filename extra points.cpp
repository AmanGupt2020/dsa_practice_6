#include<iostream>
 int main(){
/* int A;
 int B;
 //FIRST---
 scanf("%d %d" , &A , &B);
 
printf("%d ", A );
printf("%d" , B);
*/
// %f= float
//%c= char
//%s= string
//%ld= long integer
//%lld= long long integer

//SECOND-------
//0 is treated as false
//-3 , -4 , 100 (exc   ept zero) will be treated as true
/*int x=0;
if(x==x){
	printf("hai this is if");
}
else{
	printf("hai this is else");   
*/
//----
int i=0;
int j=0;
if(i++ == j++)
	printf("%d %d" , i-- , j--); 

else
	printf("%d %d" , i , j);
//-------
i=0;
 j=1;
  int k=0;
if( ++k, j , i++)
printf("&d %d %d" , i ,j ,k);



    
}

