#include <iostream>     
#include <fstream>  
 
  
using namespace std;

char UUID[]= "1234567887654321";

long long int i=1;
char encryp(char x){
	
	char salt= UUID[0];
	char y;
	
	y= (char)((int)x+(int)UUID[i%16])+7; // can be changed to some linear algbra opration
	
	//cout<<"\n"<<"enc value for"<<x<<"="<<y<<"\n"; 
	i++;
	return y;
}

std::ifstream ifs ;
 
  ofstream ofs;
  

int filesize(){
   
    
    ifs.seekg(0,ios_base::end);
    
    int size = ifs.tellg();
    ifs.seekg (0,ios_base::beg);
    return size;
}



int main(int argc, char** argv) {

  
  
  
  
  
 
  ifs.open(argv[1], ios::binary);
  
  ofs.open("temp\\dataE",ios::binary);

//cout<<filesize()/sizeof(char);

  char c = ifs.get();
  while (ifs.good()) {
 // std::cout <<c;
    
    //character by character encryption goes here
    // processing c here
    
    c = encryp(c);
    
    
    //encryption completed.
    ofs<<c;
    c = ifs.get();
  }
  ifs.close();
ofs.close();

   // system("pause");
   // return 0;
}
