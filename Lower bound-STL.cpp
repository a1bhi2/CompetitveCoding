#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,value;
    cin>>n;
    vector<int> a;
    for(int i=0;i<n;i++)
    {
        cin>>value;
        a.push_back(value);
    }
    int q,check;
    cin>>q;
    for(int i=0;i<q;i++)
    {
        cin>>value;
        vector<int>::iterator low = lower_bound(a.begin(),a.end(),value);
        if(a[low-a.begin()]==value)
            cout<<"Yes "<<low-a.begin()+1<<'\n';
        else
            cout<<"No "<<low-a.begin()+1<<'\n';
    }
    return 0;
}
