/************************************************************************/
/*	Name: Towfiqul Islam 												*/
/*	uva id: 448714 														*/
/*	email id: towfiq.106@gmail.com										*/
/*	institute: IIUC														*/
/*	address: Chittagong, Bangladesh										*/
/*																		*/
/************************************************************************/

#include<stdio.h>
void merge(int A[],int p,int q,int r)
{
    int n1,n2,i,j,k;
    n1 = q-p+1;
    n2 = r-q;
    int L[n1+1],R[n2+1];
    for(i=1; i<=n1; i++)
        L[i] = A[p+i-1];
    for(j=1; j<=n2; j++)
        R[j] = A[q+j];
    L[n1+1] = 100000;
    R[n2+1] = 100000;
    i=1;
    j=1;
    for(k=p; k<=r; k++)
        if(L[i]<=R[j])
        {
            A[k]=L[i];
            i++;
        }
        else
        {
            A[k]=R[j];
            j++;
        }
}
void mergesort(int A[],int p,int r)
{
    int q;
    if(p<r)
    {
        q=(p+r)/2;
        mergesort(A,p,q);
        mergesort(A,q+1,r);
        merge(A,p,q,r);
    }

}
int main()
{
    int A[100000],n,i,p,r;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
        scanf("%d",&A[i]);
    p=1;
    r=n;
    mergesort(A,p,r);
    for(i=1; i<=n; i++)
        printf("%d ",A[i]);
    return 0;
}
