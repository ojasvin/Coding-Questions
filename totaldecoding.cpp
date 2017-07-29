#include <sstream> 
#include <iostream> 
#include <string> 
using namespace std;
int main() 
{
	int t;
	cin>>t;
	while(t>0)
	{
	    t--;
	    int n,i,c=0;
	    string s;
	    cin>>n;
        cin.ignore(256, '\n');
        getline(cin,s);
        for (i=0;i<s.length();i++)
        {
            stringstream geek(s.substr(i,2));
            int x = 0;
            geek >> x;
            if (x<=26)
            {
                c++;
            }    
        }
        cout<<c;
	}
	return 0;
}