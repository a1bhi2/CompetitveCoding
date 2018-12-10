#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,val;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        cin>>val;
        v.push_back(val);
    }
    int p;
    cin>>p;
    v.erase(v.begin()+p-1);
    int x,y;
    cin>>x>>y;
    v.erase(v.begin()+x-1,v.begin()+y-1);
    cout<<v.size()<<"\n";
    for(vector<int>::iterator it=v.begin();it!=v.end();it++)
    {
        cout<<*it<<" ";
    }
    return 0;
}
