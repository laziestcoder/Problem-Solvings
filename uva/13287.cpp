/************************************************************************/
/*	Name: Towfiqul Islam 												*/
/*	uva id: 448714 														*/
/*	email id: towfiq.106@gmail.com										*/
/*	institute: IIUC														*/
/*	address: Chittagong, Bangladesh										*/
/*																		*/
/************************************************************************/


#include <cstdio>

using namespace std;

int main()
{
    long long int n,w,l,tot= 0,i;
    while (scanf("%lld%lld",&w,&n)==2)
    {
        tot=0;
        for( i = 0 ; i< n; ++i)
        {
            long long int a,b;
            //cin >> a >> b;
            scanf("%lld%lld",&a,&b);
            tot += (a*b);
        }
        //cout << tot/w << endl;
        printf("%lld\n",tot/w);
    }
    return 0;
}

//
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//        long long int w,i,t,x,n,l1,w1;
//        long long int area_sum=0;
//        while (cin>>w>>n)
//        {
//            area_sum=0;
//            for(x=0;x<n;x++)
//            {
//                scanf("%lld %lld",&l1,&w1);
//                area_sum+=l1*w1;
//            }
//            printf("%lld\n",(area_sum/w));
//        }
//}
