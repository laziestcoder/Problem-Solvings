/********** rank 101    ***************/

#include <cstdio>
#include <cstring>
#define N 1100
int big[N],ans[N],re[N];
int biglen,anslen,relen;

int fun3(int *tmp , int tmplen)
{

    if(tmplen<relen)      return -1;  //tmp<re
    else if(tmplen>relen) return 1;   //tmp>re
    else
    {
        int i,j;
        for(i=tmplen,j=1; j<=relen; j++,i--)
            if(tmp[i] < re[j])         return -1;  //tmp<re
            else if(tmp[i] > re[j])    return 1;   //tmp>re
    }
        return 0;
}

void fun2(int *n1 ,int &n1len)
{
    int i,j,a;
    int tmp[N],tmplen,c,s;
    for(a=0; a<10; a++)
    {
        n1[1]=a;
        for(i=1,c=0; i<=n1len; i++)
        {  s=n1[i]*a+c;  tmp[i]=s%10;  c=s/10; }
        if(c)
        { tmp[i]=c; tmplen=i;}
        else        tmplen=i-1;

        //printf("tmplen=%d  ",tmplen);
        //for(int i=tmplen; i>=1; i--) printf("%d",tmp[i]); printf("\n");

        c=fun3(tmp,tmplen);
        if(c==0 || c==1)
        {
            if(c && a>0) ans[++anslen]=--a;
            else  ans[++anslen]=a;


            break;
        }
    }
    if(a>=10) ans[++anslen]=a=9;
    if(a)
    {
        //printf("a=%d\n",a);
        memset(tmp,0,sizeof(tmp));
        for(i=1,c=0,n1[1]=a; i<=n1len; i++)
        {  s=n1[i]*a+c;  tmp[i]=s%10;  c=s/10;  }
        if(c)
        { tmp[i]=c; tmplen=i;}
        else        tmplen=i-1;

        //printf("tmplen=%d  ",tmplen);
        //for(int i=tmplen; i>=1; i--) printf("%d",tmp[i]); printf("\n");

        for(i=relen , j=1; i>=1; i--,j++)
        {
            if( re[i] >= tmp[j]) re[i]-=tmp[j];
            else
            { re[i-1]--; re[i]=re[i]+10-tmp[j]; }
        }

        for(i=1; i<=relen; i++) if(re[i]) break;
        for(j=1;i<=relen; j++,i++) re[j]=re[i];
        relen=--j;
    }
    //printf("relen=%d  ",relen);
    //for(i=1; i<=relen; i++) printf("%d",re[i]); printf("\n");
    return ;
}

void fun1(int *n1 , int &n1len)
{
    int i,j,c,s;

    n1[1]=0; c=0;
    for(j=anslen , i=2; j>=1; j--,i++)
    {
        s=ans[j]*2+c;
        n1[i]=s%10;
        c=s/10;
    }
    if(c)  { n1[i]=c; n1len=i; }
    else   n1len=i-1;

    //printf("n1len=%d  ",n1len);
    //for(i=n1len; i>=1; i--) printf("%d",n1[i]); printf("\n");
}

void solve()
{
    int n1[N],n1len;


    fun1(n1,n1len);
    fun2(n1,n1len);
    //printf("anslen=%d  ",anslen);
    //for(int i=1; i<=anslen; i++) printf("%d",ans[i]); printf("\n");
    return ;
}

int main()
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        char tmp[N];
        scanf("%s",tmp+1);
        biglen=strlen(tmp+1);
        for(int i=1; i<=biglen; i++)
            big[i]=tmp[i]-'0';

        memset(ans,0,sizeof(ans));
        memset(re,0,sizeof(re));
        int i,j,a,s,c;
        if(biglen%2)  s=big[1] , c=1;
        else          s=big[1]*10+big[2] , c=2;
        for(a=0; a*a<=s && a<10; ) a++;
        if(a>=10) ans[1]=a=9;
        else      ans[1]=--a;
        anslen=1;
        s=s-a*a;
        if(s<10) { re[1]=s; relen=1; }
        else     { re[2]=s%10; re[1]=s/10; relen=2; }


        for(i=1; i<=relen; i++) if(re[i]) break;
        for(j=1;i<=relen; j++,i++) re[j]=re[i];
        relen=--j;

        //printf("relen=%d  ",relen);
        //for(i=1; i<=relen; i++) printf("%d",re[i]); printf("\n");
        //printf("anslen=%d ",anslen);
        //for(int i=1; i<=anslen; i++) printf("%d",ans[i]); printf("\n");


        while(c+1<biglen)
        {
            re[relen+1]=big[c+1];
            re[relen+2]=big[c+2];
            relen+=2;


            for(i=1; i<=relen; i++) if(re[i]) break;
            for(j=1;i<=relen; j++,i++) re[j]=re[i];
            relen=--j;

            //printf("relen=%d  ",relen);
            //for(i=1; i<=relen; i++) printf("%d",re[i]); printf("\n");
            solve();
            c+=2;
        }

        for(int i=1; i<=anslen; i++) printf("%d",ans[i]); printf("\n");
        if(T) printf("\n");
    }
    return 0;
}
