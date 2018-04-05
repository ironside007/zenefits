#include<bits/stdc++.h>
using namespace std;
void merge(int cpy[], int m, int l, int r);

void mergesort(int cpy[], int l, int r)
{
    int m=(l+r-1)/2;
    mergesort(cpy,l,m);
    mergesort(cpy,m+1,r);
    merge(cpy,m,l,r);
}

void merge(int cpy[], int m, int l, int r)
{
    int n1=m-l+1;
    int n2=r-m;
    int L[n1], R[n2];

    for(int i=0;i<n1;i++)
        L[i]=cpy[1];

    for(int i=0;i<n2;i++)
        R[i]=cpy[i+m+1];

    for(int i=0;i<n1;i++)
    {
        if(L[i]<R[i]) cpy[i]=L[i];
    }
    for(int i=0;i<n2;i++)
    {
        if(L[i]>R[i]) cpy[i]=R[i];
    }
    for(int i=0;i<n1;i++)
        cpy[i]=L[i];

        for(int i=0;i<n2;i++)
        cpy[i]=R[i];

}


int fact(int n)
{
    if(n==-1) return 1;
    int i=2,ans[n];
    ans[0]=0;
    ans[1]=1;
    while(i<=n)
    {
        ans[i]=ans[i-1]+ans[i-2];
    }
    return ans[n];
}

int main()
{

int n,ans,times;
cin>>n;
char wrd[n];
int cpy[n];

char inpl[n],let[n];

for(int i=0;i<n;i++)
    cin>>inpl[i];
cin>>wrd;

for(int z=0;z<n;z++)
{
    cpy[z]=int(inpl[z]);// Converting into ASCII values
}
mergesort(cpy,0,n);// Sorting the array cpy in increasing order
for(int i=0;i<n;i++)
{
    let[i]=char(cpy[i]);// converting back to char from the sorted ASCII values
}


for(int j=0;j<n;j++)
{


    for(int k=0;k<n;k++)
    {
        if(let[k]==wrd[j])
        {   for(int temp=k;temp<n;temp++)
                let[k]=let[k+1];// deleting the matched letter from the letter array
            times=k;
            break;
        }

    }
    ans+=times*fact(n-j-1);// Calculating the require answer using permutations




}
cout<<ans;// Printing the answer

}
