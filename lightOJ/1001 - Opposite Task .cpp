
    #include<bits/stdc++.h>

    using namespace std;

    int main()
    {
       map<int,int>mp;
      int a,b,t,c;
      double m;
      cin>>t;
      while(t--){
        cin>>c;
        m=c/2.00;
        a=ceil(m);
        b=floor(m);
        printf("%d %d\n",a,b);
      }

       return 0;
    }
