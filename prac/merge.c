#include<stdio.h>

void merge(int a[], int n)
{
     if (n < 2) {
        return;
    }
    int mid = n/2;
    int left[mid];
    int right[n-mid];

    for(int i =0;i<mid;i++)
    {
        left[i] = a[i];
    }

    for(int i =mid;i<n;i++)
    {
       right[i -mid] = a[i];

    }
    merge(left,mid);
    merge(right, n-mid);
 for (int i = 0, j = 0, k = 0; i < mid || j < n - mid;) {
        if (j == n - mid || (i < mid && left[i] <= right[j])) {
            a[k++] = left[i++];
        } else {
            a[k++] = right[j++];
        }
    }
    
}


int main() {
    int a[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(a) / sizeof(a[0]);

    printf("Unsorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    merge(a, n);
      printf("Unsorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
}