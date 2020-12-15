//
/*I
  I N 
  I N D 
  I N D I
  I N D I A
  */
#include<iostream>
using namespace std;

void print_India(){
	char str[]="INDIA";
	for(int i=0;i<5;i++){
		for(int j=0;j<=i;j++){
			cout<<str[j]<<" ";
		}
		cout<<"\n";
	}
}

int main(){
	print_India();
	return 0;
}
