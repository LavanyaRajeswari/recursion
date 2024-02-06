#include<bits/stdc++.h>
using namespace std;

void Combinations(vector<int>v,int index,int size,vector<int>ans,int target,int sum){
	if(index >= size and sum!=target){
		return;
	}
	else if(sum == target){
		for(int i=0;i<ans.size();i++){
			cout<<ans[i]<<" ";
		}
		cout<<endl;
		return;
	}
	else if(sum > target){
		return;
	}
	ans.push_back(v[index]);
	Combinations(v,index+1,size,ans,target,sum+v[index]);
	ans.pop_back();
	Combinations(v,index+1,size,ans,target,sum);
}
int main(){
	int n,x,target;
	cin>>n;
	vector<int>v;
	for(int i=0;i<n;i++){
		cin>>x;
		v.push_back(x);
	}
	sort(v.begin(),v.end());
	cin>>target;
	Combinations(v,0,n,{},target,0);
}
