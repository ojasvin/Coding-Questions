#include <bits/stdc++.h>
using namespace std;
int median(int i,int &m, priority_queue <int>&max, priority_queue<int, vector<int>, greater<int> >&min)
{
    if (max.size()==min.size())
    {
        if (i<m)
        {
            max.push(i);
            m=max.top();
        }
        else
        {
            min.push(i);
            m=min.top();
        }
    }    
    if (max.size()-min.size()==1)
    {
        if(i<m)
        {
            min.push(max.top());
            max.pop();
            max.push(i);
        }
        else
        {
            min.push(i);
        }
        m=(max.top()+min.top())/2;
    }
    if (max.size()-min.size()==-1)
    {
        if (i>m)
        {
            max.push(min.top());
            min.pop();
            min.push(i);
        }
        else
        {
            max.push(i);
        }
        m=(max.top()+min.top())/2;
    }
    return m;
}
int main()
{
    int i,n,a,m=0;
    cin>>n;
    priority_queue <int> max;
    priority_queue <int,vector<int>,greater<int> > min;
    for (i=0;i<n;i++)
    {
        cin>>a;
        cout<<median(a,m,max,min)<<endl;
    }
    return 0;
}   