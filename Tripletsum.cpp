#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,k,val,size,arr[100];
	cin>>val;
	cin>>size;
	for (i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	int ans=0;
	sort(arr,arr+size);
	for (i=0;i<size-2;i++)
	{
		j=i+1;
		k=size-1;
		while (j<k)
		{
			if(arr[i]+arr[j]+arr[k]>=val)
			{
				k--;
			}
			else
			{
				ans=ans+k-j;
				j++;
			}
		}
	}
	cout<<ans<<endl;
}