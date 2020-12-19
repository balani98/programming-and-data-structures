// program to check whether a no is happy or not
// A no is happy when the squares of sum of its digits reach 1 or 7 
//If we reach single digit of no ,we end loop
#include<iostream>
using namespace std;
 int squareSum(int num){
        int sum =0;
        while(num){
            sum += (num%10)*(num%10);
            num=num/10;
        }
        return sum;
    }
    bool isHappy(int num) {
        int sqSum=0;
        while(num/10!=0){
            sqSum=squareSum(num);
            num=sqSum;
          }
        if(num==1||num==7)
              return true;
         
        return false;
}
    
int main(){
	int num;
	cin>>num;
	cout<<isHappy(num);
	
	
	
	
}
    
