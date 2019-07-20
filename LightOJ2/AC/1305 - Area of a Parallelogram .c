//1305 - Area of a Parallelogram
    #include <stdio.h>

    int main()
    {
        int t, cn;
        double ax, ay, bx, by, cx, cy, dx, dy, area;
        scanf("%d", &t);
        for(cn=1; cn<=t; cn++){
            scanf("%lf %lf %lf %lf %lf %lf", &ax, &ay, &bx, &by, &cx, &cy);
            dx=cx-(bx-ax);
            dy=ay+(cy-by);
            area=(ax*by+bx*cy+cx*dy+dx*ay-ay*bx-by*cx-cy*dx-dy*ax)/2;
            if(area<0) area*=(-1);
            printf("Case %d: %0.0lf %0.0lf ", cn, dx, dy);
            if(area==(int)area) printf("%0.0lf", area);
            else printf("%lf", area);
            printf("\n");
        }
        return 0;
    }
