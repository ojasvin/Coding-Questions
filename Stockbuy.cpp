/*
2<- test cases
7<- n
100 180 260 310 40 535 695
10
23 13 25 29 33 19 34 45 65 67

Output:

(0 3) (4 6) 
(1 4) (5 9) 

*/

#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        int i,n,arr[101],buy[50],sell[50],size=0;
        bool flag=false;
        t--;
        cin>>n;
        for (i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        
        for (i=0;i<n;i++)
        {
             if(flag==false)
               {
                   while(i<n-1 && arr[i+1]<arr[i])
                       i++;
                   
                   if(i!=n-1)
                       buy[size]=i;
                    flag = true;
                   
               }
            else
            {
               while(i<n-1 && arr[i+1]>=arr[i])
                    i++;
               
               sell[size]=i;
               flag = false;
               size++;
            }  
        }    
        for(int j=0;j<size;j++)
               {
                   cout<<"("<<buy[j]<<" "<<sell[j]<<") ";
               }
               if(size==0)
               cout<<"No Profit";
               cout<<endl;
        }       
	return 0;
}    
            