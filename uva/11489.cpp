/************************************************************************/
/*	Name: Towfiqul Islam 												*/
/*	uva id: 448714 														*/
/*	email id: towfiq.106@gmail.com										*/
/*	institute: IIUC														*/
/*	address: Chittagong, Bangladesh										*/
/*																		*/
/************************************************************************/

/*** uva 11489 ***/
/**
#include<bits/stdc++.h>
using namespace std;
int main ()
{
     freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);

    int t,i,n,j,f1,f2;
    string s;
    cin>>t;
    for(i=1; i<=t ; i++)
    {
        cin>>s;
        n=0;
        f1=0;
        f2=0;
        printf("Case %d: ",i);
        for(j=0; j<s.size(); j++)
                n=n+s[j]-'0';
      if( n<11 || (n%3!=0 && s[0]!='0') )
        printf("S\n");
      else
        printf("T\n");
    }
    return 0;
}
**/

/******/

#include<bits/stdc++.h>
#include <cstdio>
using namespace std;
int main()
{
    int T,Case=1;
    scanf("%d",&T);
    getchar();
    while (T--){
        int N[1001],nOfN=0;
        int nOf3x = 0;
        int sum = 0;
        while (1){
            char c = getchar();
            if (c == '\n') break;
            else if ((c-'0')%3 == 0) nOf3x++;
            else {
                N[nOfN++] = (c-'0');
                sum += (c-'0');
            }
        }
        int who;
        if (nOf3x % 2) who = 0;
        else who = 1;

        if (sum%3 !=0) {
            int i;
            for (i=0; i<nOfN; i++)
                if ((sum-N[i])%3 == 0) break;
            if (i==nOfN) who=1;
            else who++;
        }
        printf("Case %d: ",Case++);
        if (who % 2) printf("T\n");
        else printf("S\n");

    }
    return 0;
}
 /***********/
