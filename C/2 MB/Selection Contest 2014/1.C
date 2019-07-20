/*Sample Input:
3
1000 2000
1100 1000
100 100

Output for Sample Input:
B is winner by 1000 votes
A is winner by 100 votes
A and B has got equal votes*/
#include<stdio.h>
int main()
{
    int a,b,tc,i;
    scanf("%d",&tc);
    for(i=1;i<=tc;i++)
    {
        scanf("%d%d",&a,&b);
        if(a<b)
            printf("B is winner by %d votes\n",b-a);
        else if(a>b)
            printf("A is winner by %d votes\n",a-b);
        else
            printf("A and B has got equal votes\n");
    }
    return 0;
}
