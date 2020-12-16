#include<iostream>
#include<vector>
//2 2 2 2 3 3 3 4 4 4 
using namespace std;
int findMajorityElement(vector<int>arr){
	int count,maxCount,i,j;
	count=0;
	int index=-1;
	maxCount=0;
	for(i=0;i<arr.size();i++){
		count=0;
		for(j=0;j<arr.size();j++){
			if(arr[i]==arr[j])
			  count++;
			  
		   }
		  
		     
		    
		   if(count>maxCount){
		   
		     maxCount=count;
		     index=i;
	      }
	}
		if(maxCount>arr.size()/2)
	  return arr[index];
	  
return -1;	  
}
int main(){
	vector<int>arr;
	int i=0;
	int t;
	while(cin>>t && t!=0){
		arr.push_back(t);
	}


	int majorityElement = findMajorityElement(arr);
  if(majorityElement==-1)
    cout<<"No Majority Element exists";
  else
  cout<<"Majority Element"<<majorityElement;
  return 0;
}
