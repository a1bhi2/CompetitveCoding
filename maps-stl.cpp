#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
#include<string.h>

using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    string a;
    int marks;
    int q;
    cin>>q;
    int t;
    map<string,int> m;
    for(int i=0;i<q;i++)
    {
        cin>>t>>a;
        if(t==1)
        {
            cin>>marks;
            m[a]+=marks;
        }
        else if(t==2)
        {
            m.erase(a);
        }
        else if(t==3)
        {
            cout<<m[a]<<"\n";
        }
    }
    return 0;
}



