// Segregating 0 and 1  in a single scan
#include<iostream>
#include<vector>
using namespace std;

vector<int> segregate01(vector<int>array){
	int i,j;
	i=0;
	j=1;
	while(i<array.size()-1&&j<array.size()){
		if(array[i]==1&&array[j]==0){
			array[i]=0;
			array[j]=1;
			i++;
			j++;
		}
		else if((array[i]==0&&array[j]==0)||(array[i]==0&&array[j]==1)){
			i++;
			j++;
		}
		else if(array[i]==1&&array[j]==1)
		    j++;
	}
	
	
  return array;	
}
int main(){
	int size;
	int t;
	vector<int>array;
	cin>>size;
	int i=0;
	while(i<size){
		cin>>t;
		array.push_back(t);
		i++;
	}
	vector<int>segregatedArray=segregate01(array);
	for(i=0;i<segregatedArray.size();i++)
	  cout<<segregatedArray[i];
	
	return 0;
}

