#include <iostream>
using namespace std;

int main() {
long test;
cin>>test;
while(test--){
	long x,y;
	cin>>x>>y;
	if(y==0){
		if(x==0||x==2)
		cout<<x<<"\n";
		else
		cout<<"No Number"<<"\n";
	}
	else if(y==1){
		if(x==1||x==3)
		cout<<x<<"\n";
		else
		cout<<"No Number"<<"\n";
	}	
	else if(x==y){
	if(x%2)
	cout<<2*x-1<<"\n";
	else
	cout<<2*x<<"\n";
	}
	else if(x-y==2){
		if((x-2)%2)
		cout<<2*(x-2)+1<<"\n";
		else
		cout<<2*(x-2)+2<<"\n";
	}
	else
	cout<<"No Number"<<"\n";
	// your code here
}
	return 0;
}