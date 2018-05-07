/************************************************************************/
/*	Name: Towfiqul Islam 												*/
/*	uva id: 448714 														*/
/*	email id: towfiq.106@gmail.com										*/
/*	institute: IIUC														*/
/*	address: Chittagong, Bangladesh										*/
/*																		*/
/************************************************************************/
#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define f first
#define s second
#define S(a) scanf("%i", &a)
#define SS(a) scanf("%lli", &a)
#define P(a) printf("%i", a)
#define PP(a) printf("%lli", a)
#define hum printf("\n")
#define SZ(s) s.size()

map < char , int > H;
string s;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);

    cin >> s;

    int l = SZ(s), qc, f;

    if( l < 26 ) return cout << "-1", 0;

    for( int i = 0 ; i < l - 25 ; i++)
    {
            qc = 0, f = 0;
            H.clear();
     
        for( int j = i ; j < i + 26 ; j++ )
        {
            if( s[j] == '?' ) qc++;
            else if( H[s[j]] == 0 ) H[s[j]]++;
            else if( H[s[j]] > 0 )
            {
                f = 1; break;
            }
        }
     
        if( f == 0 )
     
        for( int j = i ; j < i + 26 ; j++ )
        {
            if( s[j] == '?' )
            for( char k = 'A' ; k <= 'Z' ; k++ )
            {
                if( H[k] == 0)
                {
                    s[j] = k, H[k]++;
                    break;
                }
            }
        }
        
        if( f == 0 ) break;
    }

    if( f == 1 ) return cout << "-1", 0;

    for( int i = 0; i < l ; i++ )
    {
        if( s[i] == '?' )
            s[i] = 'A';
    }
    return cout << s , 0;


}
