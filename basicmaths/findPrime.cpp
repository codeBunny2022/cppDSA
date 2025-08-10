#include <bits/stdc++.h>
using namespace std;

bool isPrime(int N)
{
    int count=0;
    int val = 1, limit = sqrt(N);
    vector<int> v;
    while (val <= limit)
    {
        if (N % val == 0)
        {
            v.push_back(N / val);
            v.push_back(val);
            if(v.size()>2){
                return 0;
            }
        }
        val++;
    }
    return 1;
}

int main()
{
    int N = 0;
    cout << "enter the Number to find if it is prime" << endl;
    cin >> N;
    auto res = isPrime(N);
    if(isPrime(N)){
        cout<<"Number is prime"<<endl;
    }
    else{
        cout<<"Number is not prime"<<endl;
    }
    return 0;
}