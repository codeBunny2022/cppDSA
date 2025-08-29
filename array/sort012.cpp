#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
	virtual void sortIt(vector<int> book,int N)=0;
	virtual ~Solution() {} // this is a virtual desctructor which will prevent memory leaks 
};

class heuristicSort:public Solution{
	// this is a pure brute force method with time complexity of O(N)
public:
	void sortIt(vector<int> book,int N) override{
		int count0=0;
		int count1=0;
		int count2=0;
		for (int i=0;i<N;i++){
			if(book[i]==0)count0++;
			if(book[i]==1)count1++;
			if(book[i]==2)count2++;			
		}
		cout<<"The sorted array is "<<endl;
		for(int i=0;i<count0;i++)cout<<"0 ";
		for(int i=0;i<count1;i++)cout<<"1 ";
		for(int i=0;i<count2;i++)cout<<"2 ";
	}
};


// here is the main class to mimic the human interaction

int main(){
	int N=7;
	vector<int> book={0,0,2,2,0,1,0};

	heuristicSort* brute=new heuristicSort();
	brute->sortIt(book,N);
	delete brute;
	cout<<endl;
	return 0;
}