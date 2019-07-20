#include<algorithm>
#include<iostream>
#include<cstdio>
#include<vector>
#include<map>
#include<string>
#define loop(i, st, en) for(i = st; i< en; i++)
using namespace std;



int main()
{
    //freopen("output.txt", "w", stdout);

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


    int i, j, k, n, totalLine, l, L, f=0;
    while(cin >> n)
    {
        if(n==0)
            break;

//        if(f==1)
//            cout << "\n";
//        f=1;

        if(n>0)
        {

            loop(i, 0, 5) // control line
            {
                if(i!=0)
                    cout << "\n";

                loop(j, 0, n) // line for every pixel
                {
                    if(j!=0)
                        cout << "\n";

                    loop(l, 0, 5)
                    {
                        loop(k, 0, n) // repeat every char
                        {
                            cout << arrS[i][l];
                        }
                    }

                    loop(l, 0, 1) // Line Space
                    {
                        loop(k, 0, n) // repeat every char
                        {
                            cout << arrHsps[i][l];
                        }
                    }

                    loop(l, 0, 5)
                    {
                        loop(k, 0, n) // repeat every char
                        {
                            cout << arrA[i][l];
                        }
                    }

                    loop(l, 0, 1) // Line Space
                    {
                        loop(k, 0, n) // repeat every char
                        {
                            cout << arrHsps[i][l];
                        }
                    }

                    loop(l, 0, 5)
                    {
                        loop(k, 0, n) // repeat every char
                        {
                            cout << arrV[i][l];
                        }
                    }

                    loop(l, 0, 1) // Line Space
                    {
                        loop(k, 0, n) // repeat every char
                        {
                            cout << arrHsps[i][l];
                        }
                    }

                    loop(l, 0, 5)
                    {
                        loop(k, 0, n) // repeat every char
                        {
                            cout << arrE[i][l];
                        }
                    }

                    loop(l, 0, 1) // Line Space
                    {
                        loop(k, 0, n) // repeat every char
                        {
                            cout << arrHsps[i][l];
                        }
                    }

                    loop(l, 0, 1) // Line Space
                    {
                        loop(k, 0, n) // repeat every char
                        {
                            cout << arrHsps[i][l];
                        }
                    }

                    loop(l, 0, 1) // Line Space
                    {
                        loop(k, 0, n) // repeat every char
                        {
                            cout << arrHsps[i][l];
                        }
                    }

                    loop(l, 0, 5)
                    {
                        loop(k, 0, n) // repeat every char
                        {
                            cout << arrH[i][l];
                        }
                    }

                    loop(l, 0, 1) // Line Space
                    {
                        loop(k, 0, n) // repeat every char
                        {
                            cout << arrHsps[i][l];
                        }
                    }

                    loop(l, 0, 5)
                    {
                        loop(k, 0, n) // repeat every char
                        {
                            cout << arrR[i][l];
                        }
                    }

                    loop(l, 0, 1) // Line Space
                    {
                        loop(k, 0, n) // repeat every char
                        {
                            cout << arrHsps[i][l];
                        }
                    }

                    loop(l, 0, 5)
                    {
                        loop(k, 0, n) // repeat every char
                        {
                            cout << arrI[i][l];
                        }
                    }

                    loop(l, 0, 1) // Line Space
                    {
                        loop(k, 0, n) // repeat every char
                        {
                            cout << arrHsps[i][l];
                        }
                    }

                    loop(l, 0, 5)
                    {
                        loop(k, 0, n) // repeat every char
                        {
                            cout << arrD[i][l];
                        }
                    }

                    loop(l, 0, 1) // Line Space
                    {
                        loop(k, 0, n) // repeat every char
                        {
                            cout << arrHsps[i][l];
                        }
                    }

                    loop(l, 0, 5)
                    {
                        loop(k, 0, n) // repeat every char
                        {
                            cout << arrO[i][l];
                        }
                    }

                    loop(l, 0, 1) // Line Space
                    {
                        loop(k, 0, n) // repeat every char
                        {
                            cout << arrHsps[i][l];
                        }
                    }

                    loop(l, 0, 5)
                    {
                        loop(k, 0, n) // repeat every char
                        {
                            cout << arrY[i][l];
                        }
                    }

                    //cout << "\n";

                }

            }






        }
        else
        {
            n = abs(n);
            //totalLine = 5*L*10+11*L;

            loop(i, 0, 5) // control line
            {
                loop(j, 0, n) // line for every pixel
                {
                    loop(l, 0, 5)
                    {
                        loop(k, 0, n) // repeat every char
                        {
                            cout << arrS[i][l];
                        }
                    }

                    cout << "\n";
                }

            }

            loop(i, 0, 1) // control line
            {
                loop(j, 0, n) // line for every pixel
                {
                    loop(l, 0, 5)
                    {
                        loop(k, 0, n) // repeat every char
                        {
                            cout << arrVsps[i][l];
                        }
                    }

                    cout << "\n";
                }

            }

            loop(i, 0, 5) // control line
            {
                loop(j, 0, n) // line for every pixel
                {
                    loop(l, 0, 5)
                    {
                        loop(k, 0, n) // repeat every char
                        {
                            cout << arrA[i][l];
                        }
                    }

                    cout << "\n";
                }

            }

            loop(i, 0, 1) // control line
            {
                loop(j, 0, n) // line for every pixel
                {
                    loop(l, 0, 5)
                    {
                        loop(k, 0, n) // repeat every char
                        {
                            cout << arrVsps[i][l];
                        }
                    }

                    cout << "\n";
                }

            }

            loop(i, 0, 5) // control line
            {
                loop(j, 0, n) // line for every pixel
                {
                    loop(l, 0, 5)
                    {
                        loop(k, 0, n) // repeat every char
                        {
                            cout << arrV[i][l];
                        }
                    }

                    cout << "\n";
                }

            }

            loop(i, 0, 1) // control line
            {
                loop(j, 0, n) // line for every pixel
                {
                    loop(l, 0, 5)
                    {
                        loop(k, 0, n) // repeat every char
                        {
                            cout << arrVsps[i][l];
                        }
                    }

                    cout << "\n";
                }

            }

            loop(i, 0, 5) // control line
            {
                loop(j, 0, n) // line for every pixel
                {
                    loop(l, 0, 5)
                    {
                        loop(k, 0, n) // repeat every char
                        {
                            cout << arrE[i][l];
                        }
                    }

                    cout << "\n";
                }

            }

            loop(i, 0, 1) // control line
            {
                loop(j, 0, n) // line for every pixel
                {
                    loop(l, 0, 5)
                    {
                        loop(k, 0, n) // repeat every char
                        {
                            cout << arrVsps[i][l];
                        }
                    }

                    cout << "\n";
                }

            }

            loop(i, 0, 1) // control line
            {
                loop(j, 0, n) // line for every pixel
                {
                    loop(l, 0, 5)
                    {
                        loop(k, 0, n) // repeat every char
                        {
                            cout << arrVsps[i][l];
                        }
                    }

                    cout << "\n";
                }

            }

            loop(i, 0, 1) // control line
            {
                loop(j, 0, n) // line for every pixel
                {
                    loop(l, 0, 5)
                    {
                        loop(k, 0, n) // repeat every char
                        {
                            cout << arrVsps[i][l];
                        }
                    }

                    cout << "\n";
                }

            }

            loop(i, 0, 5) // control line
            {
                loop(j, 0, n) // line for every pixel
                {
                    loop(l, 0, 5)
                    {
                        loop(k, 0, n) // repeat every char
                        {
                            cout << arrH[i][l];
                        }
                    }

                    cout << "\n";
                }

            }

            loop(i, 0, 1) // control line
            {
                loop(j, 0, n) // line for every pixel
                {
                    loop(l, 0, 5)
                    {
                        loop(k, 0, n) // repeat every char
                        {
                            cout << arrVsps[i][l];
                        }
                    }

                    cout << "\n";
                }

            }

            loop(i, 0, 5) // control line
            {
                loop(j, 0, n) // line for every pixel
                {
                    loop(l, 0, 5)
                    {
                        loop(k, 0, n) // repeat every char
                        {
                            cout << arrR[i][l];
                        }
                    }

                    cout << "\n";
                }

            }

            loop(i, 0, 1) // control line
            {
                loop(j, 0, n) // line for every pixel
                {
                    loop(l, 0, 5)
                    {
                        loop(k, 0, n) // repeat every char
                        {
                            cout << arrVsps[i][l];
                        }
                    }

                    cout << "\n";
                }

            }

            loop(i, 0, 5) // control line
            {
                loop(j, 0, n) // line for every pixel
                {
                    loop(l, 0, 5)
                    {
                        loop(k, 0, n) // repeat every char
                        {
                            cout << arrI[i][l];
                        }
                    }

                    cout << "\n";
                }

            }

            loop(i, 0, 1) // control line
            {
                loop(j, 0, n) // line for every pixel
                {
                    loop(l, 0, 5)
                    {
                        loop(k, 0, n) // repeat every char
                        {
                            cout << arrVsps[i][l];
                        }
                    }

                    cout << "\n";
                }

            }

            loop(i, 0, 5) // control line
            {
                loop(j, 0, n) // line for every pixel
                {
                    loop(l, 0, 5)
                    {
                        loop(k, 0, n) // repeat every char
                        {
                            cout << arrD[i][l];
                        }
                    }

                    cout << "\n";
                }

            }

            loop(i, 0, 1) // control line
            {
                loop(j, 0, n) // line for every pixel
                {
                    loop(l, 0, 5)
                    {
                        loop(k, 0, n) // repeat every char
                        {
                            cout << arrVsps[i][l];
                        }
                    }

                    cout << "\n";
                }

            }

            loop(i, 0, 5) // control line
            {
                loop(j, 0, n) // line for every pixel
                {
                    loop(l, 0, 5)
                    {
                        loop(k, 0, n) // repeat every char
                        {
                            cout << arrO[i][l];
                        }
                    }

                    cout << "\n";
                }

            }

            loop(i, 0, 1) // control line
            {
                loop(j, 0, n) // line for every pixel
                {
                    loop(l, 0, 5)
                    {
                        loop(k, 0, n) // repeat every char
                        {
                            cout << arrVsps[i][l];
                        }
                    }

                    cout << "\n";
                }

            }

            loop(i, 0, 5) // control line
            {

                loop(j, 0, n) // line for every pixel
                {

                    loop(l, 0, 5)
                    {
                        loop(k, 0, n) // repeat every char
                        {
                            cout << arrY[i][l];
                        }
                    }

                    if(!(j==n-1 && i==4))
                        cout << "\n";



                }

            }

        }

        cout << "\n\n\n";
    }

    return 0;
}
