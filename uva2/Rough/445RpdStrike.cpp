#include <iostream>
using namespace std;

int main ()
{
    int x=0,i;
    char s= {'0'};
    while (!cin.eof())
    {
        cin.get( s );
        if(s>='0' && s<='9' )
            x=x+(s-'0');
        else
        {
            if(x==0)
                x=1;
            for(i=1; i<=x; i++)
            {
                if (s=='b')
                    cout << " ";
                else if (s>='A' && s<='Z')
                    cout << s;
                else if(s=='*')
                    cout << '*';
                else if(s=='!')
                    cout << '\n';
                else if( !cin.eof() )
                    cout << '\n';
            }
            x=0;
            s=0;


        }

    }
    return 0;
}
