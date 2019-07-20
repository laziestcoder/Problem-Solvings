// Pattern Matching, Algorithm: 3.3, Page: 54
#include<cstring>
#include<iostream>
using namespace std;
int main()
{
    int k=1,l,s,r,indx=0,max;
    char p[80],t[80];
    cin>>&t[1];
    s=strlen(&t[1]);
    cin >> &p[1];
    r=strlen(&p[1]);
    max=s-r+1;
    while(k<=max)
    {
        for(l=1;l<=r;l++)
            if(p[l]!=t[k+l-1])
                goto step5;
            indx=k;
            break;
        step5 : k=k+1;
    }
    if(indx==-1)
        cout << "Not Found";
    else
        cout << "Found at : " << indx;
    return 0;
}

