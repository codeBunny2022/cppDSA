#include<bits/stdc++.h>
using namespace std;

class Solution{
public:

	int answer(vector<int> v)=0;
};

class hashApproach: public Solution{
public:
	int answer(vector<int> v) override{
		map<int,int> mpp;
		for(int i=0;i<v.size();i++){
			mpp[v[i]]++;
		}
		for(auto it : mpp){
			if(it.second>(v.size()/2)) return it.first;
		}
		return -1;
	}
};

int main(){
	vector<int> v={1,2,5,1,2,8,6,4,5,1,8,7,7,7};
	hashApproach* ans=new hashApproach;
	int val=ans->answer(v);
	cout<<"The majority element is "<<val<<endl;
	return 0;
	}