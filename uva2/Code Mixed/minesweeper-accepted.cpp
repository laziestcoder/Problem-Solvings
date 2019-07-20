#include<iostream>
#include<cstdio>
using namespace std;
void put(int arr[][200],int i,int j)
{
    arr[i][j-1]++;

    arr[i][j+1]++;

    arr[i+1][j+1]++;

    arr[i+1][j-1]++;
    arr[i+1][j]++;

    arr[i-1][j-1]++;
    arr[i-1][j]++;
    arr[i-1][j+1]++;
}

int main()
{
    long int i,j,n,m,x=0;
    char str[200][200];
    while(1)
    {
        x++;
        cin>>n>>m;
        if(n==0&&m==0)
        {
            break;
        }
        int arr[200][200]= {0};
        for(i=0; i<n; i++)
        {
            cin>>str[i];
        }

        for(i=0; i<n; i++)
        {
            for(j=0; j<m; j++)
            {
                if(str[i][j]=='*')
                {
                    put(arr,i,j);
                }
            }
        }
        if(x!=1)
            printf("\n");
        printf("Field #%ld:\n",x);
        for(i=0; i<n; i++)
        {
            for(j=0; j<m; j++)
            {
                if(str[i][j]=='*')

                    cout<<str[i][j];

                else
                    cout<<arr[i][j];
            }
            cout<<endl;
        }
    }
    return 0;
}
