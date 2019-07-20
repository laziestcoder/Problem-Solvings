///This is a comment
///https://uva.onlinejudge.org/external/100/12577.pdf
/// UVA Problem 12577

#include<bits/stdc++.h> /// universal header file
using namespace std;
int main ()
{
    ///freopen("in.txt","r",stdin); /// it takes input from a file called in.txt . This is for testing the program.

    string s;
    int cnt = 0; /// for counting test case
    while(1){
        cin>>s;
        cnt++; /// counting the case number and increasing it by 1 from 0
        if(s[0]=='*'){ /// checking if first index have asterisk symbol
            return 0; /// if found terminate the program
        }

        if(s[0]=='H'){ /// checking if input is Hajj or first index is H
            cout<<"Case "<<cnt<<": Hajj-e-Akbar"<<endl;
        }else{ /// otherwise input is Umrah or first index is U
            cout<<"Case "<<cnt<<": Hajj-e-Asghar"<<endl;
        }
    }

    return 0;
}
