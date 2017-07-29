//Given a String of length N reverse the words in it. Words are separated by dots.
//Example:
/*Input:
2
i.like.this.program.very.much
pqr.mno

Output:
much.very.program.this.like.i
mno.pqr*/
//
#include<bits/stdc++.h>
using namespace std;
void reverse(int s,int e,char *str)
{
    int i,j;
    char temp;
    for(i=s,j=e;i<j;i++,j--)
    {
        temp=str[i];
        str[i]=str[j];
        str[j]=temp;
    }
}
int main()
{
	int t,l,i;
	char str[2001];
	cin>>t;
	while(t--)
	{
	    cin>>str;
	    l=strlen(str);
	    reverse(0,l-1,str);
	    int s=0;
	    for(i=0;i<l;i++)
	    {
	        if(str[i]=='.')
	        {
	            reverse(s,i-1,str);   
	            s=i+1;
	         }
	         else if(i==l-1)
	         reverse(s,i,str);
	    }
	    cout<<str<<endl;
	}
}