#include<bits/stdc++.h>
using namespace std;
int main ()
{
   // freopen("in.txt","r",stdin);
    int t,i=0;
    cin>>t;
    while(t--)
    {
        map <string,int> mp;
        char mo[12][10]={"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
        mp[mo[0]]=1;
        mp[mo[1]]=2;
        mp[mo[2]]=3;
        mp[mo[3]]=4;
        mp[mo[4]]=5;
        mp[mo[5]]=6;
        mp[mo[6]]=7;
        mp[mo[7]]=8;
        mp[mo[8]]=9;
        mp[mo[9]]=10;
        mp[mo[10]]=11;
        mp[mo[11]]=12;

        int d;
        long long int y,a1=0,a2=0,ans=0;
        char m[11];
        scanf("%s %d, %lld",m,&d,&y);

        if((y%4==0 && y%100!=0) || (y%400==0))
        {
            if(mp[m]>2)
                y++;
        } y--;
        a1=(y/4-y/100+y/400);
        scanf("%s %d, %lld",m,&d,&y);
        if((y%4==0 && y%100!=0) || (y%400==0))
        {
            if((mp[m]== 2 && d==29) || (mp[m]>2))
                y++;
        } y--;
        a2=(y/4-y/100+y/400);
        ans=a2-a1;
        printf("Case %d: %lld\n",++i,ans);

    }
    return 0;
}
