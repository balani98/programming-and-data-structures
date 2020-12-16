//  check if key is present in every segment of size k in an array 
//we consider every segment of size k and check if x is present in the window or not
#include<iostream>
using namespace std;
bool findXinKey(int arr[],int n,int x , int k){
// I have approached the problem in quite simpler way that for every set I declared flag to be false and set the initial i pointer 
// and run another loop inside it to check whether key exists in set or not .the loop can run only for k iterations or n%k for last set,since 
//it can be shorter, and increment i to i+k and detect if flag is false then break out of loop   

	bool flag=false;
	int i,j;
	i=0;
    int breakPoint;
	while( i<n ){
		flag=false;
		   if(i<=n-k)
			 breakPoint =k;
			else
			   breakPoint = n%k;
			   j=i;
		while(j<i+breakPoint && j<n){
			if(arr[j]==x){
				flag=true;
				break;
			}
		  j++;
		}
		i=i+k;
		if(flag==false)
		break;
	}
	
	
	return flag;
}
int main(){
	int arr[10];
	int size,k,x;
	cin>>size;
	for(int i=0;i<size;i++)
	   cin>>arr[i];
	cin>>k;
	cin>>x;
	bool existence = findXinKey(arr,size,x,k);
	cout<<existence;
	
	return 0;
}
