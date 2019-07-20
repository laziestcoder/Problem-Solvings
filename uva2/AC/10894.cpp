#include<bits/stdc++.h>
using namespace std;
int dot(int n)
{
    int i ,j;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=5*n; j++)
        {
            cout<<".";
        }
        cout<<"\n";
    }
}
int S(int n)
{
    int i,j;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=5*n; j++)
        {
            {
                cout<<"*";
            }

        }
        cout<<"\n";
    }
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=5*n; j++)
        {
            if(i<=n && j<=n)
            {
                cout<<"*";
            }
            else
                cout<<".";
        }
        cout<<"\n";
    }
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=5*n; j++)
        {
            {
                cout<<"*";
            }

        }
        cout<<"\n";
    }
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=5*n; j++)
        {
            if(i>5*n-n || j>5*n-n)
            {
                cout<<"*";
            }
            else
                cout<<".";
        }
        cout<<"\n";
    }
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=5*n; j++)
        {
            {
                cout<<"*";
            }

        }
         cout<<"\n";
    }
}
int A(int n)
{
    int i,j;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=5*n; j++)
        {
            if((i<=n && j<=n)||  (i>=5*n-n || j>5*n-n))
            {
                cout<<".";
            }
            else
            {
                cout<<"*";
            }
        }
        cout<<"\n";
    }
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=5*n; j++)
        {
            if((i<=n && j<=n)||  (i>=5*n-n || j>5*n-n))
            {
                cout<<"*";
            }
            else
            {
                cout<<".";
            }
        }
        cout<<"\n";
    }
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=5*n; j++)
        {
            {
                cout<<"*";
            }

        }
        cout<<"\n";
    }
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=5*n; j++)
        {
            if((i<=n && j<=n)||  (i>=5*n-n || j>5*n-n))
            {
                cout<<"*";
            }
            else
            {
                cout<<".";
            }
        }
        cout<<"\n";
    }
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=5*n; j++)
        {
            if((i<=n && j<=n)||  (i>=5*n-n || j>5*n-n))
            {
                cout<<"*";
            }
            else
            {
                cout<<".";
            }
        }
         cout<<"\n";
    }
}
int V(int n)
{
    int i,j;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=5*n; j++)
        {
            if((i<=n && j<=n)||  (i>=5*n-n || j>5*n-n))
            {
                cout<<"*";
            }
            else
            {
                cout<<".";
            }
        }
        cout<<"\n";
    }
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=5*n; j++)
        {
            if((i<=n && j<=n)||  (i>=5*n-n || j>5*n-n))
            {
                cout<<"*";
            }
            else
            {
                cout<<".";
            }
        }
        cout<<"\n";
    }
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=5*n; j++)
        {
            if((i<=n && j<=n)||  (i>=5*n-n || j>5*n-n))
            {
                cout<<"*";
            }
            else
            {
                cout<<".";
            }
        }
        cout<<"\n";
    }
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=5*n; j++)
        {
            if((j>n && j<=2*n)|| (j>2*n+n && j<=5*n-n))
                cout<<"*";
            else
                cout<<".";
        }
        cout<<"\n";
    }
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=5*n; j++)
        {
            if(j>2*n &&j<=2*n+n)
                cout<<"*";
            else
                cout<<".";
        }
        cout<<"\n";
    }
}
int E(int n)
{
    ///E
    int i,j;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=5*n; j++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=5*n; j++)
        {
            if(i<=n && j<=n)
            {
                cout<<"*";
            }
            else
                cout<<".";
        }
        cout<<"\n";
    }
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=5*n; j++)
        {
            if(i<=n && j<=2*n+n)
            {
                cout<<"*";
            }
            else
                cout<<".";
        }
        cout<<"\n";
    }
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=5*n; j++)
        {
            if(i<=n && j<=n)
            {
                cout<<"*";
            }
            else
                cout<<".";
        }
        cout<<"\n";
    }
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=5*n; j++)
        {
            cout<<"*";
        }
         cout<<"\n";
    }
}
int H(int n)
{
    int i,j;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=5*n; j++)
        {
            if((i<=n && j<=n)||  (i>=5*n-n || j>5*n-n))
            {
                cout<<"*";
            }
            else
            {
                cout<<".";
            }
        }
        cout<<"\n";
    }
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=5*n; j++)
        {
            if((i<=n && j<=n)||  (i>=5*n-n || j>5*n-n))
            {
                cout<<"*";
            }
            else
            {
                cout<<".";
            }
        }
        cout<<"\n";
    }
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=5*n; j++)
        {
            {
                cout<<"*";
            }

        }
        cout<<"\n";
    }
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=5*n; j++)
        {
            if((i<=n && j<=n)||  (i>=5*n-n || j>5*n-n))
            {
                cout<<"*";
            }
            else
            {
                cout<<".";
            }
        }
        cout<<"\n";
    }
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=5*n; j++)
        {
            if((i<=n && j<=n)||  (i>=5*n-n || j>5*n-n))
            {
                cout<<"*";
            }
            else
            {
                cout<<".";
            }
        }
         cout<<"\n";
    }
}
int R(int n)
{
    int i,j;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=5*n; j++)
        {
            {
                cout<<"*";
            }

        }
        cout<<"\n";
    }
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=5*n; j++)
        {
            if((i<=n && j<=n)||  (i>=5*n-n || j>5*n-n))
            {
                cout<<"*";
            }
            else
            {
                cout<<".";
            }
        }
        cout<<"\n";
    }
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=5*n; j++)
        {
            {
                cout<<"*";
            }
        }
        cout<<"\n";
    }
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=5*n; j++)
        {
            if((j<=n) || (j>2*n && j<=2*n+n))
            {
                cout<<"*";
            }
            else
                cout<<".";
        }
        cout<<"\n";
    }
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=5*n; j++)
        {
            if(j<=n || j>2*n+n)
            {
                cout<<"*";
            }
            else
                cout<<".";
        }
        cout<<"\n";
    }

}
int I(int n)
{
    int i,j;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=5*n; j++)
        {
            {
                cout<<"*";
            }

        }
        cout<<"\n";
    }
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=5*n; j++)
        {
            if(j>2*n &&j<=2*n+n)
                cout<<"*";
            else
                cout<<".";
        }
        cout<<"\n";
    }
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=5*n; j++)
        {
            if(j>2*n &&j<=2*n+n)
                cout<<"*";
            else
                cout<<".";
        }
        cout<<"\n";
    }
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=5*n; j++)
        {
            if(j>2*n &&j<=2*n+n)
                cout<<"*";
            else
                cout<<".";
        }
        cout<<"\n";
    }
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=5*n; j++)
        {
            {
                cout<<"*";
            }

        }
         cout<<"\n";
    }

}
int D(int n)
{
    int i,j;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=5*n; j++)
        {
            if(i<=n && j<=2*n+n)
            {
                cout<<"*";
            }
            else
                cout<<".";
        }
        cout<<"\n";
    }
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=5*n; j++)
        {
            if((j<=n) || (j>2*n+n && j<=3*n+n))
            {
                cout<<"*";
            }
            else
                cout<<".";
        }
        cout<<"\n";
    }
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=5*n; j++)
        {
            if((i<=n && j<=n)||  (i>=5*n-n || j>5*n-n))
            {
                cout<<"*";
            }
            else
            {
                cout<<".";
            }
        }
        cout<<"\n";
    }
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=5*n; j++)
        {
            if((j<=n) || (j>2*n+n && j<=3*n+n))
            {
                cout<<"*";
            }
            else
                cout<<".";
        }
        cout<<"\n";
    }
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=5*n; j++)
        {
            if(i<=n && j<=2*n+n)
            {
                cout<<"*";
            }
            else
                cout<<".";
        }
           cout<<"\n";
    }
}
int O(int n)
{
    int i,j;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=5*n; j++)
        {
            {
                cout<<"*";
            }

        }
        cout<<"\n";
    }
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=5*n; j++)
        {
            if((i<=n && j<=n)||  (i>=5*n-n || j>5*n-n))
            {
                cout<<"*";
            }
            else
            {
                cout<<".";
            }
        }
        cout<<"\n";
    }
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=5*n; j++)
        {
            if((i<=n && j<=n)||  (i>=5*n-n || j>5*n-n))
            {
                cout<<"*";
            }
            else
            {
                cout<<".";
            }
        }
        cout<<"\n";
    }
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=5*n; j++)
        {
            if((i<=n && j<=n)||  (i>=5*n-n || j>5*n-n))
            {
                cout<<"*";
            }
            else
            {
                cout<<".";
            }
        }
        cout<<"\n";
    }
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=5*n; j++)
        {
            {
                cout<<"*";
            }

        }
         cout<<"\n";
    }
}
int Y(int n)
{

    int i,j;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=5*n; j++)
        {
            if((i<=n && j<=n)||  (i>=5*n-n || j>5*n-n))
            {
                cout<<"*";
            }
            else
            {
                cout<<".";
            }
        }
        cout<<"\n";
    }
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=5*n; j++)
        {
            if((j>n && j<=2*n)||(j>3*n && j<=3*n+n))
            {
                cout<<"*";
            }
            else
            {
                cout<<".";
            }
        }
        cout<<"\n";
    }
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=5*n; j++)
        {
            if(j>2*n &&j<=2*n+n)
                cout<<"*";
            else
                cout<<".";
        }
        cout<<"\n";
    }
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=5*n; j++)
        {
            if(j>2*n &&j<=2*n+n)
                cout<<"*";
            else
                cout<<".";
        }
        cout<<"\n";
    }
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=5*n; j++)
        {
            if(j>2*n &&j<=2*n+n)
                cout<<"*";
            else
                cout<<".";
        }
        cout<<"\n";
    }
}

int main()
{
    int i,j;
    char arrHsps[5][1] =
    {
        '.' ,
        '.' ,
        '.' ,
        '.' ,
        '.'
    };

    char arrVsps[1][5] =
    {
        '.' , '.' ,'.' ,'.' ,'.'
    };

    char arrS[5][5] =
    {
        '*' ,'*' ,'*' ,'*' ,'*' ,
        '*' ,'.' ,'.' ,'.' ,'.' ,
        '*' ,'*' ,'*' ,'*' ,'*' ,
        '.' ,'.' ,'.' ,'.' ,'*' ,
        '*' ,'*' ,'*' ,'*' ,'*'
    };

    char arrA[5][5] =
    {
        '.' ,'*' ,'*' ,'*' ,'.' ,
        '*' ,'.' ,'.' ,'.' ,'*' ,
        '*' ,'*' ,'*' ,'*' ,'*' ,
        '*' ,'.' ,'.' ,'.' ,'*' ,
        '*' ,'.' ,'.' ,'.' ,'*'
    };

    char arrV[5][5] =
    {
        '*' ,'.' ,'.' ,'.' ,'*' ,
        '*' ,'.' ,'.' ,'.' ,'*' ,
        '*' ,'.' ,'.' ,'.' ,'*' ,
        '.' ,'*' ,'.' ,'*' ,'.' ,
        '.' ,'.' ,'*' ,'.' ,'.'
    };

    char arrE[5][5] =
    {
        '*' ,'*' ,'*' ,'*' ,'*' ,
        '*' ,'.' ,'.' ,'.' ,'.' ,
        '*' ,'*' ,'*' ,'.' ,'.' ,
        '*' ,'.' ,'.' ,'.' ,'.' ,
        '*' ,'*' ,'*' ,'*' ,'*'
    };

    char arrH[5][5] =
    {
        '*' ,'.' ,'.' ,'.' ,'*' ,
        '*' ,'.' ,'.' ,'.' ,'*' ,
        '*' ,'*' ,'*' ,'*' ,'*' ,
        '*' ,'.' ,'.' ,'.' ,'*' ,
        '*' ,'.' ,'.' ,'.' ,'*'
    };

    char arrR[5][5] =
    {
        '*' ,'*' ,'*' ,'*' ,'*' ,
        '*' ,'.' ,'.' ,'.' ,'*' ,
        '*' ,'*' ,'*' ,'*' ,'*' ,
        '*' ,'.' ,'*' ,'.' ,'.' ,
        '*' ,'.' ,'.' ,'*' ,'*'
    };

    char arrI[5][5] =
    {
        '*' ,'*' ,'*' ,'*' ,'*' ,
        '.' ,'.' ,'*' ,'.' ,'.' ,
        '.' ,'.' ,'*' ,'.' ,'.' ,
        '.' ,'.' ,'*' ,'.' ,'.' ,
        '*' ,'*' ,'*' ,'*' ,'*'
    };

    char arrD[5][5] =
    {
        '*' ,'*' ,'*' ,'.' ,'.' ,
        '*' ,'.' ,'.' ,'*' ,'.' ,
        '*' ,'.' ,'.' ,'.' ,'*' ,
        '*' ,'.' ,'.' ,'*' ,'.' ,
        '*' ,'*' ,'*' ,'.' ,'.' ,
    };

    char arrO[5][5] =
    {
        '*' ,'*' ,'*' ,'*' ,'*' ,
        '*' ,'.' ,'.' ,'.' ,'*' ,
        '*' ,'.' ,'.' ,'.' ,'*' ,
        '*' ,'.' ,'.' ,'.' ,'*' ,
        '*' ,'*' ,'*' ,'*' ,'*'
    };

    char arrY[5][5] =
    {
        '*' ,'.' ,'.' ,'.' ,'*' ,
        '.' ,'*' ,'.' ,'*' ,'.' ,
        '.' ,'.' ,'*' ,'.' ,'.' ,
        '.' ,'.' ,'*' ,'.' ,'.' ,
        '.' ,'.' ,'*' ,'.' ,'.'
    };
int l,k;
    while(1)
    {
        int n;
        cin>>n;
        if(n==0)
            break;
        if(n<0)
        {
            int x=abs(n);
            S(x);
            dot(x);
            A(x);

            dot(x);
            V(x);

            dot(x);
            E(x);

            for(i=1; i<=3*x; i++)
            {
                for(j=1; j<=5*x; j++)
                {
                    cout<<".";
                }
                cout<<"\n";
            }
            H(x);

            dot(x);
            R(x);

            dot(x);
            I(x);
        dot(x);
            D(x);

            dot(x);
            O(x);

            dot(x);
            Y(x);
            cout<<"\n\n";

        }
        else
        {
        for(i=0;i<5;i++) // control line
            {
                if(i!=0)
                    cout << "\n";

                for(j=0;j<n;j++) // line for every pixel
                {
                    if(j!=0)
                        cout << "\n";

                    for(l=0;l<5;l++)
                    {
                        for(k=0;k<n;k++) // repeat every char
                        {
                            cout << arrS[i][l];
                        }
                    }

                    for(l=0;l<1;l++) // Line Space
                    {
                        for(k=0;k<n;k++) // repeat every char
                        {
                            cout << arrHsps[i][l];
                        }
                    }

                    for(l=0;l<5;l++)
                    {
                        for(k=0;k<n;k++) // repeat every char
                        {
                            cout << arrA[i][l];
                        }
                    }

                    for(l=0;l<1;l++) // Line Space
                    {
                       for(k=0;k<n;k++) // repeat every char
                        {
                            cout << arrHsps[i][l];
                        }
                    }

                    for(l=0;l<5;l++)
                    {
                        for(k=0;k<n;k++) // repeat every char
                        {
                            cout << arrV[i][l];
                        }
                    }

                    for(l=0;l<1;l++) // Line Space
                    {
                        for(k=0;k<n;k++) // repeat every char
                        {
                            cout << arrHsps[i][l];
                        }
                    }

                    for(l=0;l<5;l++)
                    {
                        for(k=0;k<n;k++) // repeat every char
                        {
                            cout << arrE[i][l];
                        }
                    }

                    for(l=0;l<1;l++) // Line Space
                    {
                        for(k=0;k<n;k++) // repeat every char
                        {
                            cout << arrHsps[i][l];
                        }
                    }

                    for(l=0;l<1;l++) // Line Space
                    {
                        for(k=0;k<n;k++) // repeat every char
                        {
                            cout << arrHsps[i][l];
                        }
                    }

                    for(l=0;l<1;l++) // Line Space
                    {
                        for(k=0;k<n;k++) // repeat every char
                        {
                            cout << arrHsps[i][l];
                        }
                    }

                    for(l=0;l<5;l++)
                    {
                        for(k=0;k<n;k++) // repeat every char
                        {
                            cout << arrH[i][l];
                        }
                    }

                    for(l=0;l<1;l++) // Line Space
                    {
                        for(k=0;k<n;k++) // repeat every char
                        {
                            cout << arrHsps[i][l];
                        }
                    }

                    for(l=0;l<5;l++)
                    {
                        for(k=0;k<n;k++) // repeat every char
                        {
                            cout << arrR[i][l];
                        }
                    }

                    for(l=0;l<1;l++) // Line Space
                    {
                        for(k=0;k<n;k++)// repeat every char
                        {
                            cout << arrHsps[i][l];
                        }
                    }

                    for(l=0;l<5;l++)
                    {
                        for(k=0;k<n;k++) // repeat every char
                        {
                            cout << arrI[i][l];
                        }
                    }

                    for(l=0;l<1;l++) // Line Space
                    {
                        for(k=0;k<n;k++) // repeat every char
                        {
                            cout << arrHsps[i][l];
                        }
                    }

                    for(l=0;l<5;l++)
                    {
                        for(k=0;k<n;k++) // repeat every char
                        {
                            cout << arrD[i][l];
                        }
                    }

                    for(l=0;l<1;l++) // Line Space
                    {
                        for(k=0;k<n;k++) // repeat every char
                        {
                            cout << arrHsps[i][l];
                        }
                    }

                    for(l=0;l<5;l++)
                    {
                        for(k=0;k<n;k++) // repeat every char
                        {
                            cout << arrO[i][l];
                        }
                    }

                    for(l=0;l<1;l++) // Line Space
                    {
                        for(k=0;k<n;k++) // repeat every char
                        {
                            cout << arrHsps[i][l];
                        }
                    }

                    for(l=0;l<5;l++)
                    {
                        for(k=0;k<n;k++) // repeat every char
                        {
                            cout << arrY[i][l];
                        }
                    }

                    //cout << "\n";

                }

            }

cout << "\n\n\n";
        }
    }
    return 0;
}
