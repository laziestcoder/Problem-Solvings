/*reverse & sort*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cin>> a;
    if(a&1)cout<< "odd\n";
    else cout<< "even\n";
    if(a&(a-1))puts("not power of two\n");
    else puts("power of two\n");
    /*string a;
    cin>> a;
    sort(a.begin(), a.end());
    reverse(a.begin(), a.end());
    cout<< a;
    return 0;*/
}
