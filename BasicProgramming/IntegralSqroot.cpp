 // Program to find the integral square root of a number 
 // I have used most simplest algorithm which says I compare numbers until num *num<=sqroot;
 //as soon as it get it , if ity is a perfect square or not . in both of the conditions If i decrease the pointer , iwill
 //get sq root
 
 #include<iostream>
 using namespace std;
 int findSqrootIntegral(int num){
 	 long  int sqroot;
       long int i;
        for( i=1;i*i<=num;i++){
            if(i*i==num)
                sqroot=i;
         }
        sqroot =i-1;
        return sqroot;
 	
 	
 	
 }
 int main(){
 	int num;
 	cin>>num;
 	int sqroot = findSqrootIntegral(num);
 	cout<<sqroot;
 	return 0;
 	
 	
 	
 }
