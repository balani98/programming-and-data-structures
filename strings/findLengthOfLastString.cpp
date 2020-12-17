// Program to find length of last word in string
// I have used simple logic , I started with last character and keep on decrementing until I get space as soon as I get space I break out of loop 
//But there are some edge cases ,I we face some extra space bettween string condition to breakout is ith character mmust be space and 
//i+1 th character must not be space and it should not be null too 
// NICE PROBLEM
#include<iostream>
#include<string>
using namespace std;

int findLengthOfLastWord(string str){
	  int len=0;
        int i=str.length()-1;
      
       while(i>=0){
           if(str[i]==' '&&(str[i+1]!='\0'||str[i+1]!=' ')) 
               break;
           if(str[i]!=' ')
            len++;
            i--;
        }
        return len;
}

int main(){
	string str;
	// This is the way of getting in put of string without taking length
      getline(cin, str); 
	int len = findLengthOfLastWord(str);
	cout<<len;
	
	return 0;
}
