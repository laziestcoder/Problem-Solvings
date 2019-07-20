The first version is a simple one, just sorting the task durations. The second one uses an array flagging and then using bruteforce finding the best time.

/* --------------------------> BISMILLAHIR RAHMANIR RAHIM <------------------------------ */
/* ------------------------> Tafhim Ul Islam [ CSE-09@IIUC ] <--------------------------- */
#include <cstdio>
#include <iostream>
#include <cmath>
#include <cstring>
#include <string>
#include <map>
#include <stack>
#include <queue>
#include <cstdlib>
#include <vector>
#include <climits>
#include <set>
#include <algorithm>
#define MI INT_MAX
#define ULONG unsigned long long
#define LLONG long long
#define swap(a,b) {int t=a ; a=b ; b=t; }
#define sz(a) sizeof(a)
#define FOR(i, a, b) for (i=a ; i<b ; i++)
#define QSORT(a,n,s,f) qsort(a,n,sizeof(s),f)
using namespace std;
char input[1000];

struct timex
{
    int start;
    int end;
} array[500];

bool cmp(timex x, timex y)
{
    return (x.start < y.start);
}

int main()
{
    int nTask, i, maxStart, maxInterval, interval;
    int hour1, hour2, minute1, minute2, hour, minute, j, day=1;
    while ( cin >> nTask )
    {
        getchar();
        i=0;
        array[i].start = 600;
        array[i].end = 600;
        for (i=1 ; i<=nTask ; i++)
        {
            gets(input);
            sscanf(input,"%d:%d %d:%d",&hour1,&minute1,&hour2,&minute2);

            array[i].start = hour1*60 + minute1;
            array[i].end = hour2*60 + minute2;
        }
        array[i].start = 1080;
        array[i].end = 1080;
        i++;

        sort(array,array+i,cmp);

        for (j=1, maxInterval=-1 ; j<=nTask+1 ; j++)
        {
            interval = array[j].start-array[j-1].end;
            if (interval > maxInterval)
            {
                maxStart = array[j-1].end;
                maxInterval = interval;
            }
        }

        hour = (int)maxStart/60;
        minute = maxStart%60;

        if (maxInterval>=60)
            printf("Day #%d: the longest nap starts at %d:%.2d and will last for %d hours and %d minutes.\n",day++,hour,minute,(int)maxInterval/60,maxInterval%60);
        else
            printf("Day #%d: the longest nap starts at %d:%.2d and will last for %d minutes.\n",day++,hour,minute,maxInterval);

    }
    return 0;
}

/* --------------------------> BISMILLAHIR RAHMANIR RAHIM <------------------------------ */
/* ------------------------> Tafhim Ul Islam [ CSE-09@IIUC ] <--------------------------- */
#include <cstdio>
#include <iostream>
#include <cmath>
#include <cstring>
#include <string>
#include <map>
#include <stack>
#include <queue>
#include <cstdlib>
#include <vector>
#include <climits>
#include <set>
#include <algorithm>
#define MI INT_MAX
#define ULONG unsigned long long
#define LLONG long long
#define swap(a,b) {int t=a ; a=b ; b=t; }
#define sz(a) sizeof(a)
#define FOR(i, a, b) for (i=a ; i<b ; i++)
#define QSORT(a,n,s,f) qsort(a,n,sizeof(s),f)
using namespace std;
char inp[10000];
int data[60][60];
struct time
{
    int h, m;
} initTime, maxInitTime;
int napTimer, maxNapTimer;

void setter(int hour1, int minute1, int hour2, int minute2)
{
    int i, j, jLimit;

    for (i=hour1 ; i<=hour2 ; i++)
    {
        if (i==hour1) j=minute1;
        else j=0;
        if (i==hour2) jLimit=minute2-1;
        else jLimit = 59;

        for ( ; j<=jLimit ; j++)
        {
            data[i][j]=1;
        }
    }
}

void parser(char *inp)
{
    int i, j, hour1, hour2, minute1, minute2;
    char h[10];

    for (i=0 ; !(inp[i]>='0') && !(inp[i]<='9') ; i++); // Skipping initial blanks
    for (i, j=0 ; inp[i]>='0' && inp[i]<='9' ; i++, j++)
    {
        h[j]=inp[i];
    }
    h[j]='\0';
    hour1 = atoi(h);
    for (i ; inp[i]!=':' ; i++);
    for (i ; inp[i]==':' ; i++);
    for (i ; !(inp[i]>='0') && !(inp[i]<='9') ; i++);
    for (i, j=0 ; inp[i]>='0' && inp[i]<='9' ; i++, j++)
    {
        h[j]=inp[i];
    }
    h[j]='\0';
    minute1 = atoi(h);

    //cout << " --> " << i << endl;
    for (i ; inp[i]==' ' ; i++); //Skipping spaces
    for (i, j=0 ; inp[i]>='0' && inp[i]<='9' ; i++, j++)
    {
        h[j]=inp[i];
    }
    h[j]='\0';
    hour2 = atoi(h);
    for (i ; inp[i]!=':' ; i++);
    for (i ; inp[i]==':' ; i++);
    for (i ; !(inp[i]>='0') && !(inp[i]<='9') ; i++);
    for (i, j=0 ; inp[i]>='0' && inp[i]<='9' ; i++, j++)
    {
        h[j]=inp[i];
    }
    h[j]='\0';
    minute2 = atoi(h);

    setter(hour1, minute1, hour2, minute2);
}

void initData()
{
    int i, j;
    for (i=10 ; i<=20 ; i++)
    {
        for (j=0 ; j<=60 ; j++)
        {
            data[i][j]=0;
        }
    }
}

void napFinder()
{
    bool napOpen;
    napTimer=0;
    maxNapTimer=-1;
    maxInitTime={-1,-1};
    initTime={-1,-1};
    int i, j;
    napOpen=false;
    if (data[10][0]==0)
    {
        //napOpen=true;
        initTime={10,0};
    }

    for (i=10 ; i<18 ; i++)
    {
        //cout << "\t" << i << endl;

        for (j=0 ; j<=59 ; j++)
        {

            if (data[i][j]==0)
            {
                if (napOpen)
                {
                    napTimer++;

                }
                else
                {
                    napOpen=true;
                    initTime={i,j};

                    napTimer=0;
                }
            }
            else
            {
                if (napOpen)
                {
                    napOpen=false;
                    if (napTimer>maxNapTimer)
                    {
                        maxNapTimer=napTimer;
                        maxInitTime=initTime;
                        //cout << " -> " << napTimer << endl;
                        napTimer=0;
                    }
                } else
                {
                    napTimer=0;
                }
            }

        }
    }
    if (napOpen)
    {
        napOpen=false;
        if (napTimer>maxNapTimer)
        {
            maxNapTimer=napTimer;
            maxInitTime=initTime;

            napTimer=0;
        }
    }
}

int main()
{

    //freopen("input.txt","r+",stdin);
    //freopen("output.txt","w+",stdout);

    int nTask, i, hours, minutes, kase=1;
    char maxInitTimeHourPrint[100], maxInitTimeMinutePrint[100];
    while (cin >> nTask)
    {
        getchar();
        initData();
        for (i=0 ; i<nTask ; i++)
        {
            gets(inp);
            parser(inp);
        }
        napFinder();

        maxNapTimer++;
        hours = maxNapTimer / 60;
        if (maxNapTimer%60)
            minutes = maxNapTimer%60;

        if (maxInitTime.h>9)
            sprintf(maxInitTimeHourPrint,"%d",maxInitTime.h);
        else
            sprintf(maxInitTimeHourPrint,"0%d",maxInitTime.h);
        if (maxInitTime.m>9)
            sprintf(maxInitTimeMinutePrint,"%d",maxInitTime.m);
        else
            sprintf(maxInitTimeMinutePrint,"0%d",maxInitTime.m);

        printf("Day #%d: the longest nap starts at %s:%s and will last for ",kase++,maxInitTimeHourPrint,maxInitTimeMinutePrint);
        if (maxNapTimer>=60)
            printf("%d hours and %d minutes.\n",(int)maxNapTimer/60,maxNapTimer%60);
        else
            printf("%d minutes.\n",maxNapTimer);
    }
    return 0;
}

