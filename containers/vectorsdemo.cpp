#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    int n = 0;
    cout << "enter the size of vector you want" << endl;
    cin >> n;
    cout << "please enter the values for the vector" << endl;
    for (int i = 0; i < n; i++)
    {
        int k = 0;
        cin >> k;
        v.push_back(k);
    }

    // here is the basic conecpt of vector iterator
    //  auto it = v.begin();
    //  it++;
    //  cout << *(it) << " ";

    // for loop has--> for(initialise, condition, increment/decrement){}

    cout << "here is your vector" << endl;
    for (auto it = v.begin(); it != v.end(); it++)
    {

        cout << *(it) << " ";
    }
    cout<<endl;
    return 0;
}