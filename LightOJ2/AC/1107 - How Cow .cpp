    #include<bits/stdc++.h>
    using namespace std;
    int main ()
    {
        //freopen("in.txt", "r", stdin);
        int t,i=0;
        cin>>t;
        while(t--)
        {
            int x1,x2,y1,y2,m;
            scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
            scanf("%d",&m);
            printf("Case %d:\n",++i);

            while(m--)
            {
                int x,y;
                scanf("%d%d",&x,&y);
                if((x1<=x && x<=x2) && (y1<=y && y<=y2))
                    printf("Yes\n");
                else
                    printf("No\n");

            }

        }
        return 0;
    }

