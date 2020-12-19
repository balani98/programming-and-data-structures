// Program to reverse string using inbuilt header file algorithm
#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	string st;
	getline(cin,st);
	reverse(st.begin(),st.end());
	cout<<st;
}
