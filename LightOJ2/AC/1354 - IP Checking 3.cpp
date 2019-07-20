    #include<stdio.h>
    #include<math.h>
    main()
    {
       long a,b,c,d,e,f,g,h,i,j,k,l,m,n,t;
       char u,v,w,p,q,r;
        scanf("%ld",&n);
        for(t=1;t<=n;t++)
        {
        scanf("%ld%c%ld%c%ld%c%ld",&a,&u,&b,&v,&c,&w,&d);
        scanf("%ld%c%ld%c%ld%c%ld",&e,&p,&f,&q,&g,&r,&h);
          j=k=l=m=0;
                for(i=0;i<=7;i++)
          {
                            j+=(e%10)*pow(2,i);
                            k+=(f%10)*pow(2,i);
                            l+=(g%10)*pow(2,i);
                            m+=(h%10)*pow(2,i);
                            e/=10;f/=10;g/=10;h/=10;
          }
          if(j==a&&k==b&&l==c&&m==d)
          printf("Case %ld: Yes\n",t);
          else printf("Case %ld: No\n",t);
          }
          return 0;
          }
