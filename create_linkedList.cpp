#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	node *next;
};            
int main(){
	int d1=3,d2=2,d3=6;
	
	node *head;
	node *a=NULL;
	node *b=NULL;
	node *c=NULL;
	a=new node();
	b=new node();
	c=new node();
	a->data=d1;
	b->data=d2;
	c->data=d3;
	a->next=b;
	b->next=c;
	c->next=NULL;
	head=a;
	
			node *d=NULL;
			d=new node();
			d->data=4;
			d->next=c;
			b->next=d;
	int total=0;	
	while(head!=NULL){
		int v=head->data;
		total=total+v;
		cout<<v<<"->";
		head=head->next;
	}
	cout<<"NULL"<<endl;
	cout<<"sum of linked list is:"<<total<<endl;
	
	
	
	return 0;
}                                                                                                                                                                                                                                                                                                                                                                                                                                                          
