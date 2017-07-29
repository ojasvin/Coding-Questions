#include<iostream>
#include<stdlib.h>
using namespace std;
int RandomizedSelect(int*,int,int,int);
int RandomizedPartition(int*, int, int);
int partion(int*,int,int);
int main()
{
    int n,x,i;
    cout<<"Enter length of array  ";
    cin>>n;
    int *a=new int[n];
    cout<<"Enter elements of array  ";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter element less than size of array  ";
    cin>>x;
    int z=RandomizedSelect(a,0, n, x);
    cout<<z;
    return 0;
}

int RandomizedSelect(int A[],int p, int r,int i)
{
    if (p == r)
    {
        return A[p];
    }
    int q = RandomizedPartition(A, p, r);
    int k = q - p + 1;
    if (i == k)
    {
        return A[q];
    }
    else if  (i < k)
    {
        return RandomizedSelect(A, p, q-1, i) ;
    }
    else return RandomizedSelect(A, q+1, r, i - k);
 }
int Partition(int A[],int p,int r)
{
    int x=A[r],temp;
    int i=p-1,j;
    for(j=p;j<r-1;j++)
    {
        if(A[j]<=x)
        {
            i++;
            temp=A[i];
            A[i]=A[j];
            A[j]=temp;
        }
    }
    temp=A[i+1];
    A[i+1]=A[r];
    A[r]=temp;
    return i+1;

}
int RandomizedPartition(int A[],int p,int r)
{

 int temp;
 int j = rand()%(r-p+1)+p;
 temp=A[r];
 A[r]=A[j];
 A[j]=temp;
 return Partition(A, p, r);
}