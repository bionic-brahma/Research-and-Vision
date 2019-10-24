#include<iostream>
#include<stack>
#include<string.h>

using namespace std;

int prior(char sym){

	switch (sym){
	//	cout<<"testing switch case..\n*****************************\n\n";

		case '+':
		return 1;
		break;
		case '-':
		return 2;
		break;
		case '*':
		return 3;
		break;
		case '/':
		return 4;
		break;
		case '^':
		return 5;
		break;
		case '(':
		return -1;
		break;
		case ')':
		return -1;
		break;
		default:
		return 0;
	}
	};

int main(){
stack<char> store;
int test;
//cout<<"testing staement\n*****************************\n\n";

cin>>test;
while(test--){
	stack <char> output;
	char input[400];
//	cout<<"testing staement\n*****************************\n\n";

	cin>>input;
	int length=strlen(input);
	for(int i=0;i<length;i++){
	//	cout<<"1 testing...."<<input[i]<<"....staement\n*****************************\n\n";

		if(isalpha(input[i]))
		output.push(input[i]);
		else{  /// '(' and ')' are checked here
	//	cout<<"2 testing staement\n*****************************\n\n";

			if(input[i]=='('){
	//			cout<<"3 testing staement\n*****************************\n\n";

				store.push(input[i]);
			}
			else if(input[i]==')'){
		//		cout<<"4 testing staement\n*****************************\n\n";

				while(store.top()!='('){
	//				cout<<"5 testing staement\n*****************************\n\n";

				output.push(store.top());
				store.pop();
				}
				store.pop();
			}
			else{ ///testing for only symbols for input in store stack.
	//		cout<<"6 testing staement\n*****************************\n\n";
				
				if(store.empty())
				store.push(input[i]);
				
				else if(prior(input[i])>=prior(store.top())){
		//			cout<<"7 testing staement\n*****************************\n\n";

					store.push(input[i]);
				}
				else{             /// testing for only symbols for input in output stack.
		//			cout<<"8 testing staement\n*****************************\n\n";

					while(prior(input[i])<=prior(store.top())){
						//cout<<"9 testing staement\n*****************************\n\n";

						output.push(store.top());
						store.pop();
					}
					store.push(input[i]);
				}
			}
		}
	}
	while(!store.empty()){
		//cout<<"10 testing staement\n*****************************\n\n";

	output.push(store.top());
	store.pop();
	}
	int x=0; char final[400];
	while(!output.empty()){
		//cout<<"11 testing staement\n*****************************\n\n";
		
		final[x]=output.top();
		output.pop();
		x++;
	}
	while(x!=-1){
	x--;
	cout<<final[x];
}
cout<<"\n";
}
return 0;
}