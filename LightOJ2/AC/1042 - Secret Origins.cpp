//1042 - Secret Origins
    #include<bits/stdc++.h>
    using namespace std;
    unsigned int f(unsigned int x)
    {

      unsigned int r_one;
      unsigned int k;
      unsigned int m;

      unsigned int next = 0;

      if(x)
      {
        r_one = x & -(signed)x;
        k = x + r_one;
        m = x ^ k;
        m = (m)/r_one;

        m >>= 2;
        next = k | m;
      }

      return next;
    }
    int main()
    {
        int cs,num;
        cin>>cs;
        for (int i=1;i<=cs;i++)
        {
             cin>>num;
             int x=f(num);
             printf("Case %d: %d\n",i,x);

        }
    }
