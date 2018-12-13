#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
#include<string.h>
#include<deque>

using namespace std;

void insertionSort2(int n, vector<int> arr) {

    for(int i=1;i<n;i++){
        int j=i-1,k=i;
        while(j>=0){
        if(arr[k]<arr[j]){
            int temp = arr[k];
            arr[k]= arr[j];
            arr[j]=temp;
            }
        j--;
        k--;
        }
    for(int p=0;p<n;p++)
    {
        cout<<arr[p]<<" ";
    }
    cout<<endl;
    }
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    vector<int> arr;
    int n,value;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>value;
        arr.push_back(value);
    }
    insertionSort2(n,arr);
}



