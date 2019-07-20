#include<bits/stdc++.h>
using namespace std;
int main ()
{
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    //string s1,s2,month[12]= {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    //int day[12]= {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int t,i=0;
    cin>>t;
    while(t--)
    {
        map <string,int> mp;
        char mo[12][10]= {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
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
        long long int y1,y2;
        char m[10];


        scanf("%s %d, %lld",m,&d,&y1);
        if((y1%4==0 && y1%100!=0) || (y1%400==0))
        {
            if(mp[m]>2)
                y1++;
        }
        y1--;
        scanf("%s %d, %lld",m,&d,&y2);
        if((y2%4==0 && y2%100!=0) || (y2%400==0))
        {
            if(( mp[m]>2 )|| (mp[m]==2 && d==29) )
                y2++;
        }
        y2--;
        long long int cn1=0,cn2=0;
        cn1=(y1/4-y1/100+y1/400);
        cn2=(y2/4-y2/100+y2/400);

       printf("Case %d: %lld\n",++i,cn2-cn1);
    }
    return 0;
}
