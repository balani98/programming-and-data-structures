// segregating 01 array by single scan 
// This time we are using the different technique which will scan the array from both sides 
// and perfrom some operations
#include<iostream>
#include<vector>
using namespace std;

vector<int> segregate01(vector<int>array){
	int i=0;
	int j=array.size()-1;
	while(i<j){
		if(array[i]==1&&array[j]==0){
			array[i]=0;
			array[j]=1;
			i++;
			j--;
		}else if(array[i]==1&&array[j]==1){
			j--;
		}else if(array[i]==0&&array[j]==0){
			i++;
		}else if(array[i]==0&&array[j]==1){
			i++;
			j--;
		}
	}
  return array;
}
int main(){
	vector<int>array;
	int temp,size;
	cin>>size;
	int i=0;
	while(i<size){
		cin>>temp;
		array.push_back(temp);
		i++;
	}
	vector<int>sortedArray = segregate01(array);
	for(i=0;i<size;i++){
		cout<<sortedArray[i];
	}
	
	return 0;
}
