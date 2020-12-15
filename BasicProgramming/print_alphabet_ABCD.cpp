// Alphabetical pattern
/*
  A 
  B B
  C C C 
  D D D D
  E E E E E
  */
#include<iostream>
using namespace std;
  void printPattern(int N){
  	    char ch='A';
		for(int i=1;i<=N;i++){
  	      
  	      	for(int j=1;j<=i;j++){
  	      	  cout<<ch<<" ";	
			}
  	  	ch++;
  	  	cout<<"\n";
	 }
  	  
  	
  	
}

int main(){
	int N;
	cin>>N;
	printPattern(N);
	return 0;
	
}
