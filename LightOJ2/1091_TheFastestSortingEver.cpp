#include <bits/stdc++.h>
using namespace std;

void fun(int n);

int main ()
{
    int n,i;
    cin>>n;

    for(i=1; i<=n; i++)
    {
        int k;
        cin>>k;
        printf("Case %d:\n",i);
        fun(k);
        cout<<endl;

    }
    return 0;
}

void fun(int n)
{
    string a,b;
if(n==1)
    {

    a="void print( int a ) \{\n printf\( \"\%\d\\n\"\, a \)\;\n\}\nvoid sort( int a ) \{\n print( a )\;\n\}";
    cout<<a;
    }


if(n==2)
    {

    a="void print(int a\,int b)\{\nprintf( \"\%\d \%\d\\n\"\,a\,b\)\;\n\}\nvoid sort\( int a\, int b\)\{\nif( b < a )\
\nprint( b, a );\
\n\t else\n\t  print( a, b );\n}";
    cout<<a;

}
if(n==3)
{
    a="void print(int a\,int b\, int c) \{\nprintf( \"\%\d \%\d \%\d\\n\"\,a\,b\,c\)\;\n\}\n";
    cout<<a;
    b="void sort( int a, int b, int c ) {\n\
 if( a < b )\n\
  if( a < c )\n\
   if( b < c )\n\
    print( a, b, c );\n\
   else\n\
    print( a, c, b );\n\
  else\n\
   print( c, a, b );\n\
 else\n\
  if( b < c )\n\
   if( a < c )\n\
    print( b, a, c );\n\
   else\n\
    print( b, c, a );\n\
  else\n\
   print( c, b, a );\n\
}";
   cout<<b;
}



if(n==4)
{
    a="void print(int a\,int b\, int c\, int d) \{\nprintf( \"\%\d \%\d \%\d \%\d\\n\"\,a\,b\,c\)\;\n\}\n";
    cout<<a;
    b="";

}
if(n==5)
{
    a="void print(int a\,int b\, int c\, int d\, int e) \{\nprintf( \"\%\d \%\d \%\d \%\d \%\d\\n\"\,a\,b\,c\)\;\n\}\n";
    cout<<a;


}
if(n==6)
{
    a="void print(int a\,int b\, int c\, int d\, int e\, int f) \{\nprintf( \"\%\d \%\d \%\d \%\d \%\d \%\d\\n\"\,a\,b\,c\)\;\n\}\n";
    cout<<a;

}
if(n==7)
{
    a=a="void print(int a\,int b\, int c\,int d\,int e\,int f\,int g) \{\nprintf( \"\%\d \%\d \%\d \%\d \%\d \%\d \%\d\\n\"\,a\,b\,c\)\;\n\}\n";
    cout<<a;

}


}
