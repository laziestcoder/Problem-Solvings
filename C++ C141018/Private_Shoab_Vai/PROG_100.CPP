//#include<cstdio>
#include<cstring>
#include<iostream>
using namespace std;

int main()
{
    char str[80];
    cin.getline(str,80); // Input: new delhi; cin can not take space character
    cout.write(str,strlen(str)); // Output: new delhi
    return 0;
}








