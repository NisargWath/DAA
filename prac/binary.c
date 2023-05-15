#include<stdio.h>

void binary(int a[], int n,int f)
{
    int l = 0, h = n-1, m;
    for(int i = 0; i<n;i++)
    {
        m = (l+h)/2;
        if(f ==a[m]){
            printf("You got the element at %d index", m+1);
        }
        if(l<m)
        {
            l+=m;
        }
        else{
            h-=m;
        }
    }
}

int main()
{
    int a[5] = {1,2,8,9,10}, n=5;
    int f = 12;
    binary(a,n,f);
}