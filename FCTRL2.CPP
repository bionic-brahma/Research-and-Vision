#include <iostream>
#include<math.h>
using namespace std;

int multiply(long number, int *numat){
long carry=1,i=0;
while(carry){
	long res=0;carry=0;
	while(numat[i]!=-1){
		res=number*numat[i];
		res=res+carry;
		carry=res/10;
		numat[i]=res%10;
		i++;
	}
	while(carry){
	numat[i]=carry%10;
	carry=carry/10;
	i++;
	numat[i]=-1;
	}
}
return i;
}

int fact(long number,int *numat){
numat[0]=1;numat[1]=-1;
int pos=0;
while(number!=0){
 pos=multiply(number,numat);
number--;
}
return pos;
}

int main() {
	long test;
	cin>>test;
	int pos;
	long num; 
	while(test--){
		int result[100000];
		cin>>num;
		pos=fact(num,result);
		
		while(pos!=0){
		cout<<result[pos-1];
		pos--;
	}
	cout<<"\n";
	}
	
	
	// your code here

	return 0;
}