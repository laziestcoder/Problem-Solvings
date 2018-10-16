//1297 - Largest Box
    #include <stdio.h>
    #include <math.h>

    int main()
    {
        int t, cn;
        double w, l, x;
        scanf("%d", &t);
        for(cn=1; cn<=t; cn++){
            scanf("%lf %lf", &l, &w);
            x=(w+l-sqrt(w*w+l*l-w*l))/6;
            printf("Case %d: %lf\n", cn, (w-2*x)*(l-2*x)*x);
        }
        return 0;
    }
