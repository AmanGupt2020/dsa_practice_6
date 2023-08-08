#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	node *next;
};
void insert(node **head,int v){
	node *newNode=NULL;
	newNode=new node();
	newNode->data=v;
	newNode->next=(*head);
	(*head)=newNode;
}
int main(){
	int n;
	cin>>n;
	int arr[n];
	node *head=NULL;
	for(int i=0;i<n;i++){
		cin>>arr[i];
		insert(&head,arr[i]);
	}
	cout<<"original linked list =>"<<endl;
	while(head!=NULL){
		cout<<head->data<<"->";
		head=head->next;
	}
	cout<<"NULL"<<endl;
	cout<<"After sorting"<<endl;
	node *head1=NULL;
	int a=sizeof(arr)/sizeof(arr[0]);
	sort(arr,arr+a);
	for(int i=n-1;i>=0;i--){
		insert(&head1,arr[i]);
	}
	while(head1!=NULL){
		cout<<head1->data<<"->";
		head1=head1->next;
	}
	cout<<"NULL";
	
	return 0;
}
