/************************************************************************/
/*	Name: Towfiqul Islam 												*/
/*	uva id: 448714 														*/
/*	email id: towfiq.106@gmail.com										*/
/*	institute: IIUC														*/
/*	address: Chittagong, Bangladesh										*/
/*																		*/
/************************************************************************/

// 10079 - Pizza Cutting- Accepted
#include<iostream>
using namespace std;
int main()
{
    long long int n;
    while(1)
    {
        cin >> n;
        if(n<0)
            break;
        else
            cout << (n*n+n+2)/2 << endl;
    }
    return 0;
}
