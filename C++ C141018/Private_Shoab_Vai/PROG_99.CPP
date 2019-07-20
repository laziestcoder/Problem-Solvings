//#include<cstdio>
#include<iostream>
using namespace std;

int main()
{
    char str[80];
    cin.getline(str,80); // Input: new delhi; cin can not take space character
    cout.write(str,3); // Output: new
    return 0;
}







