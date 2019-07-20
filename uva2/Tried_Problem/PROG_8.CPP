//12577 - Hajj-e-Akbar
#include<iostream>
#include<cstring>
using namespace std;
int main()
{

    int tc, k;
    char a[100],b[]="Hajj";
    for(k=1;k<2;k++)
    {
        cin >> a;
        if(a[0]=='*')
            break;
        if(strcmp(a,b)==0)
            cout << "Case" << " " << k << ":" << " " << "Hajj-e-Akbar" << endl;
        else
            cout << "Case" << " " << k << ":" << " " << "Hajj-e-Asghar" << endl;
    }
    return 0;
}
