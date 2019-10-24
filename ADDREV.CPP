#include <iostream>
using namespace std;
long reverse(long number);
int main() {
	long test,num1,num2,rev1,rev2,sum,revsum;
	cin>>test;
	while(test--){
		cin>>num1>>num2;
		rev1=reverse(num1);
		rev2=reverse(num2);
		sum=rev1+rev2;
		revsum=reverse(sum);
		cout<<revsum<<"\n";
	}
	// your code here

	return 0;
}

long reverse(long number){
	long reverse_num=0;
	while(number){
		reverse_num= reverse_num*10+number%10;
		number=number/10;
	}
	return reverse_num;
}