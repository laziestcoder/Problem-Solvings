/************************************************************************/
/*	Name: Towfiqul Islam 												*/
/*	uva id: 448714 														*/
/*	email id: towfiq.106@gmail.com										*/
/*	institute: IIUC														*/
/*	address: Chittagong, Bangladesh										*/
/*																		*/
/************************************************************************/

#include<iostream>
#include<cstdio>

using namespace std;
int digits(int n)
{
    int s=0;
    while(n)
    {
        s+=n%10;
        n/=10;
        //cout<<"d"<<endl;
    }
    return s;
}

#define M 100000
bool primes[M];
int marked[M]= {0};

void sieve2()
{
    int k=1;
    for (int i = 2; i < M; i++)
    {
        if (primes[i] == false)   // i is a prime
        {
            marked[k]=i;
            //cout<<"k i"<<" Marked["<<k<<"] "<<marked[k]<<endl;
            //getchar();
            k++;
            for (int j = i + i; j <= M; j += i)
            {
                primes[j] = true;
            }
        }
    }
}


//vector<int> primes;    // we'll preload primes once at the beginning

int countDivisor(int n)
{
    int cnt=0,nn;
    nn=n;
    //cout<<"NUM "<<n<<endl;
    //cout<<marked[1]<<endl;
    for (int i = 1;; i++)
    {
        if (n % marked[i] == 0 )
        {
            while (n % marked[i] == 0)
            {
                n /= marked[i];
                cnt+=digits(marked[i]);
                //cout<<cnt<<endl;
                //cout<<i<<" "<<marked[i]<<endl;
                //getchar();
            }
        }
        if(digits(nn)==cnt)
            break;
    }
    return cnt;
}


int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    sieve2();
    //cout<<"done"<<endl;
    int i,t,num;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&num);
        for(i=num+1; ; i++)
        {
            //cout<<"hello"<<endl;
            //cout<<digits(i)<<endl;
            //cout<<countDivisor(i)<<endl;
            //getchar();

            if(countDivisor(i)==digits(i))
            {
                //cout<<"debug"<<endl;
                printf("%d\n",i);
                break;
            }
        }
    }

    return 0;
}
