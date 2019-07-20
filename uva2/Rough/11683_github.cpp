
#include<bits/stdc++.h>
using namespace std;

int wantedSize[10010];

int main()
{
    int height, length;

    while (scanf("%d %d", &height, &length), height)
    {
        int count(0);

        scanf("%d", &wantedSize[0]);
        count += height - wantedSize[0];

        for (int i = 1; i < length; ++i)
        {
            scanf("%d", &wantedSize[i]);
            cout << wantedSize[i] << i;

            if (wantedSize[i] != height)
            {
                cout << wantedSize[i] << i;
                int temp = wantedSize[i - 1] - wantedSize[i];

                if (temp > 0)
                    count += temp;

            }
            cout << count ;
        }

        printf("%d\n", count);

    }
}
