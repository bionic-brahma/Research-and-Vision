#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int test;
	cin>>test;
	while(test--){
		long long r1,r2;
		cin>>r1>>r2;
		
		while(r1!=r2+1){
		int flage=1;
		for(int j=2;j<=sqrt(r1);j++){
		
			if(!(r1%j)){
			flage=0;	
			break;
			}
			else
			;
            }
            if(flage&&r1!=1)
            cout<<r1<<"\n";
            r1++;
		}
	}
	
	// your code here

	return 0;
}