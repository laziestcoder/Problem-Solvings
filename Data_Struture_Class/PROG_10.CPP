// Pattern Matching Using Built in Function, Algorithm: 3.3, Page: 54
#include<string>
#include<iostream>
using namespace std;
int main()
{
    string t,p;
    cin >> t >> p;
    int indx=t.find(p);
    if(indx==-1)    // jodi na pai,tahole Built in Function indx k -1 dibe
        cout << "Not Found";
    else
        cout << "Found at : " << indx;
    return 0;
}
