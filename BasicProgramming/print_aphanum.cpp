// 	Print The following Pattern
/* 1A 2B 3C 4D 5E
   1A 2B 3C 4D 
   1A 2B 3C
   1A 2B
   1A 
*/
#include<iostream>
using namespace std;

void print_alphanum_Pattern(int N){
	char ch;
	for(int i=1;i<=N;i++){
		ch='A';
		for(int j=1;j<=N-i+1;j++){
		
		  cout<<j<<ch<<" ";
           ch++;
	 }
	   cout<<"\n";
	}
	
}
int main(){
	int N;
	cin>>N;
	print_alphanum_Pattern(N);
	return 0;
}
