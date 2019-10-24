#include <iostream>
#include<math.h>
using namespace std;

int main() {
	long test;
	cin>>test;
	long long num;
	while(test--){
		long long sum=0,fmultiple=5;
		cin>>num;
		while(num/fmultiple){
		sum=sum + floor(num/fmultiple);
		fmultiple=5*fmultiple;
		}
		cout<<sum<<"\n";
	}
	
	// your code here

	return 0;
}