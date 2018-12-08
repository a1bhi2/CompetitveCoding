#include <iostream>
#include <vector>
using namespace std;

int main()
{
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
        cin>>check;
        for(int j=0;j<n;j++)
        {
            if(check==a[j])
            {
                cout<<"Yes "<<j<<"\n";
                break;
            }
            else if(check<a[j])
            {
                cout<<"No "<<j<<"\n";
                break;
            }
        }
    }
    return 0;
}
