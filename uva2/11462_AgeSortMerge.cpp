/* C program for Merge Sort */
#include<bits/stdc++.h>
//#include<stdlib.h>
//#include<stdio.h>
using namespace std;


// Merges two subarrays of arr[].
// First subarray is arr[l..m]
// Second subarray is arr[m+1..r]
void mergeArray(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;

    /* create temp arrays */
    int L[n1], R[n2];

    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1+ j];

    /* Merge the temp arrays back into arr[l..r]*/
    i = 0; // Initial index of first subarray
    j = 0; // Initial index of second subarray
    k = l; // Initial index of merged subarray
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    /* Copy the remaining elements of L[], if there
    are any */
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    /* Copy the remaining elements of R[], if there
    are any */
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}

/* l is for left index and r is right index of the
sub-array of arr to be sorted */
void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        // Same as (l+r)/2, but avoids overflow for
        // large l and h
        int m = l+(r-l)/2;

        // Sort first and second halves
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);

        mergeArray(arr, l, m, r);
    }
}

/* UTILITY FUNCTIONS */
/* Function to print an array */
void printArray(int A[], int sizes)
{
    int i;
    for (i=0; i < sizes; i++)
        {
            printf("%d", A[i]);
            if(i<sizes-1)
                printf(" ");
        }
    printf("\n");
}

/* Driver program to test above functions */
int main()
{
    while(1)
    {
        int n;
        scanf("%d",&n);
        if(n==0)
            return 0;
        int i,arr[n+1];// = {12, 11, 13, 5, 6, 7};
        int arr_size = n;//sizeof(arr)/sizeof(arr[0]);
        for(i=0; i<n ; i++)
        {
            scanf("%d",&arr[i]);
        }
        mergeSort(arr, 0, arr_size - 1);
        printArray(arr, arr_size);
        /*for(i=0; i<n ; i++)
        {
            printf("%d ",arr[i]);

        }
        printf("\n");*/
    }
    return 0;
}
