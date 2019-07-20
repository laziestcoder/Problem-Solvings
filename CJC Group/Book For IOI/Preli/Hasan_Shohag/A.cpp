#include<cstdio>
#include<cstring>


int main()
{

    int t, i, j, k, _count, len, n, f;
    char d[10005][15], def[15];

    scanf("%d", &t);
    for(i=0; i<t; i++)
    {
        scanf("%d", &n);

        for(j=0; j<n; j++)
        {
            scanf(" %s", d[j]);
        }

        scanf(" %s", def);

        printf("Case %d:\n", i+1);

        len=strlen(d[0]);

        for(j=0; j<n ; j++)
        {
            if(strcmp(d[j], def)==0)
            {
                printf("%s\n", d[j]);
            }
            else
            {
                _count = 0;
                f=1;
                for(k=0; k< len; k++)
                {
                    if(d[j][k]!=def[k])
                        _count++;

                    if(_count > 1)
                    {
                        f=0;
                        break;
                    }
                }

                if(f==1 && _count <= 1)
                    printf("%s\n", d[j]);
            }
        }
    }
    return 0;
}
