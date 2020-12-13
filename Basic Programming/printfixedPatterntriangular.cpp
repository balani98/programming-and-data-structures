// prinitng pattern  triangular and numerical 
#include<iostream>
using namespace std;

void printPattern(int N){
	int value =N;
	for(int i=1;i<=N;i++){
		for(int j=1;j<=i;j++)
		   cout<<value<<" ";
		   cout<<"\n";
		value=value-1;
	}
}

int main(){
	int N;
	cin>>N;
	printPattern(N);
	
}
