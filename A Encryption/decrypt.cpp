#include <iostream>     
#include <fstream>  
 
  
using namespace std;

char UUID[]= "1234567887654321";
long long int i=1;

 std::ifstream ifs ;
 
  ofstream ofs;
  

int filesize(){
   
    
    ifs.seekg(0,ios_base::end);
    
    int size = ifs.tellg();
    ifs.seekg (0,ios_base::beg);
    return size;
}


char decryp(char x){
	
	char salt= UUID[0];
	
	char y;
	y= (char)((int)x-(int)UUID[i%16])-7;  // can be changed to some linear algbra opration
		//cout<<"\n"<<"salt value: "<<UUID[x%16]<<"  "<<"enc value for"<<x<<"="<<(int)y<<"     "<<y<<"\n"; 
	i++;
	return y;
	

}
int main(int argc, char** argv) {

ifs.open(argv[1], ios::binary);
ofs.open("temp\\dataD",ios::binary);
  
  
 
 //cout<<filesize()/sizeof(char);
 
 
 //system("pause");
  char c = ifs.get();
  while (ifs.good()) {
  //std::cout <<c;
    
    //character by character decryption goes here
    // processing c here
    
    c = decryp(c);
    
    
    //decryption completed.
    ofs<<c;
    c = ifs.get();
  }
  ifs.close();
  ofs.close();


   // system("pause");
   // return 0;
}
