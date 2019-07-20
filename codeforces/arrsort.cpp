#include<bits/stdc++.h>
using namespace std;
int arry[] = {25, 7, 7, 14, 14, 14, 21, 3, 3, 3, 5, 12, 12, 13, 13};

int countSorted()
{
    int count = 1, max = 1,k;
    int l=sizeof(arry)/sizeof(arry[0]);
    for (k = 1; k < l; k++)
    {
        if (arry[k-1] <= arry[k])
        {
            count++;
        }
        else

        {
            count = 1;
        }
    }
    if (count >= max)
            {
                max = count;
            }

    return max;
}
int main ()
{
    cout<<countSorted()<<endl;
    return 0;
}
