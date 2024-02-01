#include<bits/stdc++.h>
using namespace std;
void fun(int open,int close,string s,int n){
	if(close+open >= n*2){
		cout<<s<<endl;
		return;
	}
	if(close > open){
		return;
	}
	if(open == n){
		fun(open,close+1,s+')',n);	
	}
	else{
		fun(open+1,close,s+'(',n);
		fun(open,close+1,s+')',n);
	}
}
int main(){
	int n;
	cin>>n;
	fun(1,0,"(",n);
}
