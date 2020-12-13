// Pattern trtiangular 
#include<iostream>
using namespace std;

void printPattern(int N){
	int value;
	for(int i=1;i<=N;i++){
		value=1;
		for(int j=1;j<=N;j++){
		   if(i+j<=N+1){
		   
           cout<<value<<" ";
           value++;
	      }
		}
	    cout<<"\n";
	}
	
}


int main(){
	int N	;
	cin>>N;
	printPattern(N);
	return 0;
}


