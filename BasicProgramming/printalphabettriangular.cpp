// print alphabet pyramid pattern
/*     A 
    A  B A 
  A B  C  B A
  */


#include<iostream>
using namespace std;
void printPattern(int N){
	char ch;
	for(int i=1;i<=N;i++){
		ch='A';
		for(int j=1 ; j<=N-i ; j++){
			cout<<" "<<" ";
		}
		for(int j=1;j<2*i;j++){
		
		   cout<<ch<<" ";
		    if(i<=j)
			  ch--;
			else 
			ch++;
		}
       cout<<"\n";
	}
}
int main(){
	int N;
	cin>>N;
	printPattern(N);
	return 0;
}
