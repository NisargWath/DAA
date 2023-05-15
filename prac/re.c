#include<stdio.h>


void swap(int *a, int *b){
    int temp =*a;
    *a = *b;
    *b =temp;
}

int partion(int a[], int low, int high)
{
    int pivot = a[high];
    int i = low -1;
    for(int j = low;j<high;j++)
    {
        if(a[j]<pivot)
        {
            i++;
            swap(&a[i],&a[j]);
        }
    }
    swap(&a[i+1], &a[high]);

    return i +1;
}


void quick(int a[], int low, int high)
{
    if(low<high){
        int p = partion(a,low,high);
        quick(a,low,p-1);
        quick(a,p+1,high);
    }
}

void print(int a[], int n){

    printf("\n");
    for(int i = 0;i<n;i++)
    {
        printf("%d ", a[i]);
    }
}



void merge(int a[], int n){
    if (n < 2) {
        return;
    }
    int mid = n/2;
    int left[mid];
    int right[n-mid];

    for(int i = 0;i<mid;i++)
    {
        left[i] = a[i];
    }
    for(int i = mid;i<n;i++)
    {
        right[i-mid] = a[i];
    }
    merge(left,mid);
    merge(right,n-mid);
    for(int i =0,j=0,k=0;i<mid||j<n-mid;){
        if(j == n-mid || (i<mid && left[i]<=right[j])){
            a[k++] = left[i++];
        }
        else{
            a[k++] = right[j++];
        }
    }
}



int main()
{
    int a[5] = {10,2,34,1,6}, n=5;
    print(a,n);
    merge(a,n);
    print(a,n);


return 0;
}

