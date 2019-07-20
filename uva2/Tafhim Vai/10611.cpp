All you need is some knowledge of speeding up searching and some tricks to keep things in limits.

First of all, make the heights of the lady monkeys distinct and store them. You can use a map and store in it each height’s position in the vector. That helps later.
Now you can make some decisions easily during the querries, if a querry has an index to it in the map then just go there. Check for the index to be boundary or not and print based on that. If however a height is not found, just browse you collection through linear search and make the same decision there. If a height is bigger than the biggest woman height or smaller than the smallest woman height you have a given advantage on it.

I think the vector is slowing it down. Gonna try an array.

#include <cstdio>
#include <map>
#include <iostream>
#include <climits>
#include <vector>


using namespace std;

map<int,int> ver;

vector<int>line;

int main()
{
    int i, j, k, wc, hc, minwh, maxwh, maxk, temp, x, y;

    line.push_back(-1);

    minwh = INT_MAX;
    maxwh = -1;
    scanf("%d",&wc);
    for (i=0, k=1 ; i<wc ; i++)
    {
        scanf("%d",&temp);
        if (ver[temp]==0)
        {
            line.push_back(temp);
            ver[temp]=k;
            k++;

            if (temp>maxwh)
                maxwh = temp;
            if (temp<minwh)
                minwh = temp;
        }
    }


    maxk = k;
    scanf("%d",&hc);

    for (i=0 ; i<hc ; i++)
    {
        scanf("%d",&temp);

        if (temp<minwh)
        {
            printf("X %d\n",line[0]);
            continue;
        } else if (temp>maxwh)
        {
            printf("%d X\n",line[maxk-1]);
            continue;
        }


        if (ver[temp])
        {
            k = ver[temp];
            if (k-1 < 0)
                x = -1;
            else
                x = line[k-1];

            if (k+1>=maxk)
                y = -1;
            else
                y = line[k+1];
        } else {
            for (j=1 ; j<maxk ; j++)
            {
                if (line[j]<temp && line[j+1]>temp)
                {
                    x = line[j];
                    y = line[j+1];
                }
            }
        }
        if (x<0) printf("X ");
        else printf("%d ",x);
        if (y<0) printf("X\n");
        else printf("%d\n",y);

    }

    return 0;
}
