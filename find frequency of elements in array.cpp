#include<bits/stdc++.h>
using namespace std;

void frequency(int *a)
{
    map<int,int> m;
    for(int i=0;i<10;i++)
    {
        m[a[i]]++;
    }
    for(auto i :m)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }
}

int main()
{
    int arr[10]={1,2,3,4,5,2,2,3,5,4};
    frequency(arr);
}