#include<iostream>
using namespace std;

void printSpiral(int N){
	int value=1;
	
	//making the matrix first
	int matrix[10][10];
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			matrix[i][j]=value;
			value++;
		}
	}
	//printing the matrix in spiral form 
	int first_row_index,last_row_index,first_col_index,last_col_index;
	first_row_index=0;
	last_row_index=N-1;
	first_col_index=0;
	last_col_index=N-1;
	
    while(first_row_index<=last_row_index && first_col_index<=last_col_index){
    	for(int i=first_col_index ; i<=last_col_index ; i++)
    	   cout<<matrix[first_row_index][i]<<" ";
    	
		for(int j=first_row_index+1;j<=last_row_index-1;j++)
    	    cout<<matrix[j][last_col_index]<<" ";
    	
    	for(int i= last_col_index ; i >=first_col_index+1;i-- )
		    cout<<matrix[last_row_index][i]<<" ";
			
		for(int i= last_row_index;i>=first_row_index+1;i--)
		    cout<<matrix[i][first_col_index]<<" ";
			 first_row_index++;
	 last_row_index--;
	 first_col_index++;
	 last_col_index--;
	 }

	 
}

int main(){
	int N;
	cin>>N;
	printSpiral(N);
	return 0;
}
