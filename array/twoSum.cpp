#include<bits/stdc++.h>
using namespace std;

class twoSum{
public:

	// the brute frce approach for the two sum issue
	string bruteApproach(int n,vector<int> book,int target){
		for(int i=0;i<n;i++){
			for(int j=i;j<n;j++){
				if(book[i]+book[j]==target)return "Yes";
			}
		}
		return "No";
	};

	// the hashing based approach for the problem
	pair<int,int> hashApproach(int n,vector<int>book,int target){
		map<int,int> mpp;
		for(int i=0;i<n;i++){
			int a=book[i];
			int more=target-a;
			if(mpp.find(more) != mpp.end())return {mpp[more],i}; //return "Yes";
			mpp[a]=i;
		}
		return {-1,-1};
	}

	// two pointer approach
	// first sort the array than apply two pointer, one from front one from behind


};


int main(){
	// values mimicing the input from user
	int n=5;
	vector<int> book={2,6,5,8,11};
	int target=14;

	//creating the object for class 1
	twoSum* approach1=new twoSum();
	cout<<approach1->bruteApproach(n,book,target)<<endl;
	pair<int,int> result=approach1->hashApproach(n,book,target);
	cout<<result.first<<","<<result.second<<endl;
}