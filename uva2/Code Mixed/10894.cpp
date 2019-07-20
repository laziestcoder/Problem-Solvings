#include<bits/stdc++.h>
using namespace std;
int main ()
{
    freopen("10894out.txt","w",stdout);
    int n,i,j;
    cin>> n;
    if(n==0)
        return 0;
    else if(n>0)
    {
        for(i=1; i<=n; i++ )
        {
            for(j=1; j<=5*n; j++) ///s1
                cout<< "*";
            for(j=1; j<=n; j++)
                cout<< ".";


            for(j=1; j<=5*n; j++) ///a1
            {
                if(j==1 || j==5*n)
                    cout<< ".";
                else
                    cout<<"*";
            }
            for(j=1; j<=n; j++)
                cout<< ".";



            for(j=1; j<=5*n; j++)///v1
            {
                if(j==1 || j==5*n)
                    cout<< "*";
                else
                    cout<< ".";
            }
            for(j=1; j<=n; j++)
                cout<< ".";


            for(j=1; j<=5*n; j++)///e1
            {
                cout<< "*";
            }



            for(j=1; j<=3*n; j++) ///word gap
                cout<<".";

            for(j=1; j<=5*n; j++)///h1
            {
                if(j==1 || j==5*n)
                    cout<< "*";
                else
                    cout<<".";
            }
            for(j=1; j<=n; j++)
                cout<< ".";


            for(j=1; j<=5*n; j++)///r1
            {
                cout<< "*";
            }
            for(j=1; j<=n; j++)
                cout<< ".";





            for(j=1; j<=5*n; j++)///i1
            {
                cout<< "*";
            }
            for(j=1; j<=n; j++)
                cout<< ".";






            for(j=1; j<=5*n; j++)///d1
            {
                if(j==4 || j==5*n)
                    cout<< ".";
                else
                    cout<<"*";
            }
            for(j=1; j<=n; j++)
                cout<< ".";






            for(j=1; j<=5*n; j++)///o1
            {
                cout<< "*";
            }
            for(j=1; j<=n; j++)
                cout<< ".";





            for(j=1; j<=5*n; j++)///y1
            {
                if(j==1 || j==5*n)
                    cout<< "*";
                else
                    cout <<".";
            }



            cout<< "\n";
        }


        for(i=1; i<=n; i++ )                ///s2
        {
            for(j=1; j<=5*n; j++)
            {
                if(j==1)
                    cout<< "*";
                else
                    cout<<".";
            }
            for(j=1; j<=n; j++)
                cout<< ".";


            for(j=1; j<=5*n; j++) ///a2
            {
                if(j==1 || j==5*n)
                    cout<< "*";
                else
                    cout<<".";
            }
            for(j=1; j<=n; j++)
                cout<< ".";



            for(j=1; j<=5*n; j++)///v2
            {
                if(j==1 || j==5*n)
                    cout<< "*";
                else
                    cout<< ".";
            }
            for(j=1; j<=n; j++)
                cout<< ".";


            for(j=1; j<=5*n; j++)///e2
            {
                if(j==1)
                    cout<< "*";
                else
                    cout<< ".";
            }




            for(j=1; j<=3*n; j++) ///word gap
                cout<<".";

            for(j=1; j<=5*n; j++)///h2
            {
                if(j==1 || j==5*n)
                    cout<< "*";
                else
                    cout<<".";
            }
            for(j=1; j<=n; j++)
                cout<< ".";


            for(j=1; j<=5*n; j++)///r2
            {
                if(j==1 || j==5*n)
                    cout<< "*";
                else
                    cout<<".";
            }
            for(j=1; j<=n; j++)
                cout<< ".";





            for(j=1; j<=5*n; j++)///i2
            {
                if(j==3)
                    cout<< "*";
                else
                    cout<<".";
            }
            for(j=1; j<=n; j++)
                cout<< ".";






            for(j=1; j<=5*n; j++)///d2
            {
                if(j==1 || j==4)
                    cout<< "*";
                else
                    cout<<".";
            }
            for(j=1; j<=n; j++)
                cout<< ".";






            for(j=1; j<=5*n; j++)///o2
            {
                if(j==1 || j==5*n)
                    cout<< "*";
                else
                    cout<<".";
            }
            for(j=1; j<=n; j++)
                cout<< ".";





            for(j=1; j<=5*n; j++)///y2
            {
                if(j==2 || j==4)
                    cout<< "*";
                else
                    cout <<".";
            }



            cout<< "\n";
        }




        for(i=1; i<=n; i++ )                ///s3
        {
            for(j=1; j<=5*n; j++)
            {
                cout<< "*";
            }

            for(i=1; i<=n; i++)
                cout<<".";



            for(j=1; j<=5*n; j++) ///a3
            {
                cout<< "*";
            }
            for(j=1; j<=n; j++)
                cout<< ".";



            for(j=1; j<=5*n; j++)///v3
            {
                if(j==1 || j==5*n)
                    cout<< "*";
                else
                    cout<< ".";
            }
            for(j=1; j<=n; j++)
                cout<< ".";


            for(j=1; j<=5*n; j++)///e3
            {
                if(j>=1 && j<=3 )
                    cout<< "*";
                else
                    cout<< ".";
            }



            for(j=1; j<=3*n; j++) ///word gap
                cout<<".";

            for(j=1; j<=5*n; j++)///h3
            {

                cout<< "*";
            }
            for(j=1; j<=n; j++)
                cout<< ".";


            for(j=1; j<=5*n; j++)///r3
            {
                cout<< "*";
            }
            for(j=1; j<=n; j++)
                cout<< ".";





            for(j=1; j<=5*n; j++)///i3
            {
                if(j==3)
                    cout<< "*";
                else
                    cout<<".";
            }
            for(j=1; j<=n; j++)
                cout<< ".";






            for(j=1; j<=5*n; j++)///d3
            {
                if(j==1 || j==5*n)
                    cout<< "*";
                else
                    cout<<".";
            }
            for(j=1; j<=n; j++)
                cout<< ".";






            for(j=1; j<=5*n; j++)///o3
            {
                if(j==1 || j==5*n)
                    cout<< "*";
                else
                    cout<<".";
            }
            for(j=1; j<=n; j++)
                cout<< ".";





            for(j=1; j<=5*n; j++)///y3
            {
                if(j==3)
                    cout<< "*";
                else
                    cout <<".";
            }


            cout <<"\n";
        }

        for(i=1; i<=n; i++ )     ///s4
        {
            for(j=1; j<=5*n; j++)
            {
                if(j==5*n)
                    cout<< "*";
                else
                    cout<<".";
            }

            for(i=1; i<=n; i++)
                cout<<".";



            for(j=1; j<=5*n; j++) ///a4
            {
                if(j==1 || j==5*n)
                    cout<< "*";
                else
                    cout<<".";
            }
            for(j=1; j<=n; j++)
                cout<< ".";



            for(j=1; j<=5*n; j++)///v4
            {
                if(j==2 || j==4)
                    cout<< "*";
                else
                    cout<< ".";
            }
            for(j=1; j<=n; j++)
                cout<< ".";


            for(j=1; j<=5*n; j++)///e4
            {
                if(j==1 )
                    cout<< "*";
                else
                    cout<< ".";
            }




            for(j=1; j<=3*n; j++) ///word gap
                cout<<".";

            for(j=1; j<=5*n; j++)///h4
            {
                if(j==1 || j==5*n)

                    cout<< "*";
                else
                    cout<<".";
            }
            for(j=1; j<=n; j++)
                cout<< ".";


            for(j=1; j<=5*n; j++)///r4
            {
                if(j==1 || j==3)
                    cout<< "*";
                else
                    cout<<".";
            }
            for(j=1; j<=n; j++)
                cout<< ".";





            for(j=1; j<=5*n; j++)///i4
            {
                if(j==3)
                    cout<< "*";
                else
                    cout<<".";
            }
            for(j=1; j<=n; j++)
                cout<< ".";






            for(j=1; j<=5*n; j++)///d4
            {
                if(j==1 || j==4)
                    cout<< "*";
                else
                    cout<<".";
            }
            for(j=1; j<=n; j++)
                cout<< ".";






            for(j=1; j<=5*n; j++)///o4
            {
                if(j==1 || j==5*n)
                    cout<< "*";
                else
                    cout<<".";
            }
            for(j=1; j<=n; j++)
                cout<< ".";





            for(j=1; j<=5*n; j++)///y4
            {
                if(j==3)
                    cout<< "*";
                else
                    cout <<".";
            }


            cout<<"\n";
        }




        for(i=1; i<=n; i++ )     ///s5
        {
            for(j=1; j<=5*n; j++)
            {
                cout<< "*";
            }


            for(i=1; i<=n; i++)
                cout<<".";



            for(j=1; j<=5*n; j++) ///a5
            {
                if(j==1 || j==5*n)
                    cout<< "*";
                else
                    cout<<".";
            }
            for(j=1; j<=n; j++)
                cout<< ".";



            for(j=1; j<=5*n; j++)///v5
            {
                if(j==3)
                    cout<< "*";
                else
                    cout<< ".";
            }
            for(j=1; j<=n; j++)
                cout<< ".";


            for(j=1; j<=5*n; j++)///e5
            {
                cout<< "*";
            }




            for(j=1; j<=3*n; j++) ///word gap
                cout<<".";

            for(j=1; j<=5*n; j++)///h5
            {
                if(j==1 || j==5*n)
                cout<< "*";
                else
                    cout<<".";
            }
            for(j=1; j<=n; j++)
                cout<< ".";


            for(j=1; j<=5*n; j++)///r5
            {
                if(j==1 || j==4 || j==5*n)
                    cout<< "*";
                else
                    cout<<".";
            }
            for(j=1; j<=n; j++)
                cout<< ".";





            for(j=1; j<=5*n; j++)///i5
            {
                cout<< "*";
            }
            for(j=1; j<=n; j++)
                cout<< ".";






            for(j=1; j<=5*n; j++)///d5
            {
                if(j>=1 && j<=3)
                    cout<< "*";
                else
                    cout<<".";
            }
            for(j=1; j<=n; j++)
                cout<< ".";






            for(j=1; j<=5*n; j++)///o5
            {
                if(j>=1 && j<=5*n)
                    cout<< "*";
                else
                    cout<<".";
            }
            for(j=1; j<=n; j++)
                cout<< ".";





            for(j=1; j<=5*n; j++)///y5
            {
                if(j==3)
                    cout<< "*";
                else
                    cout <<".";
            }


            cout<<"\n";
        }

    }
    /*else if(n<0)
        {
            l=n*(-1);
        }*/


    return 0;
}
