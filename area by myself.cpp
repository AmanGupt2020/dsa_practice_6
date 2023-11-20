#include<iostream>
using namespace std;
class shape
{
	int w;
	int l;
	int b;
	int r;
	int a;
	public:
		void read_data()
		{
			cin>>w;
			cout<<"w is :"<<w;
			cin>>l;
			cout<<" l is :"<<l;
			cin>>b;
			cout<<" b is :"<<b;
			cin>>r;
			cout<< " r is :"<<r;
			cin>>a;
			cout<<"a is :"<<a;
		}
		void print_data()
		{
			cout<<"area of triangle is :"<<0.5*b*l<<endl;
			cout<<"area of square :"<<a*a<<endl;
			cout<<"area of circle :"<<3.14*r*r<<endl;
			cout<<"area of rectangle :"<<w*l<<endl;
		}
		
	
};
int main()
{
object n;
n.read_data();
n.print_data();
return 0;

}
