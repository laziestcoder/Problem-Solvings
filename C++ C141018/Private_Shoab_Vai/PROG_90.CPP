//Output:
//    I
//    II
//    IIU
//    IIUC
#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    int i,len;
    char str[50];
    cin >> str;
    len = strlen(str);
    for(i=1;i<=len;i++)
    {
        cout.write(str,i);
        cout << endl;
    }


    return 0;
}
