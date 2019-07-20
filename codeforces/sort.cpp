#include<bits/stdc++.h>
using namespace std;
void print( int a, int b, int c, int d )
{
    printf( "%d %d %d %d\n", a, b, c, d );
}
void srt( int a, int b, int c, int d )
{
    if( a < b )
        if( a < c )
            if( b < c )
                if( b < d )
                    if( c < d )
                        print( a, b, c, d );
                    else
                        print( a, b, d, c );
                else if( c < d )
                    print( a, c, d, b );
                else
                    print( a, d, c, b);
            else if( b < c )
                if( a < d )
                    if( a < c)
                        print( b, a, c, d );
                    else
                        print( b, c, a, d );
                else
                    print( b, c, d, a );

            else if( a < d )
                print( c, b, a, d );
            else
                print( c, b, d, a );
}


int main ()
{
    int n,a,b,c,d;
    while(1)
    {
        cin>>n;
        while(n--)
        {
            int i;
            cin>>a>>b>>c>>d;
            srt(a,b,c,d);
        }
    }
    return 0;
}
