#include<bits/stdc++.h>
using namespace std;
int main (){
    int a = 0;
    map<char, int> m;
    string s;
    cin>>s;
    for(int i=0; i<s.length(); i++){
        if(m[s[i]]==0){
            a++;
            m[s[i]]++;
        }
    }
    if(a%2==0){
    cout<<"CHAT WITH HER!"<<endl;
    }else{
        cout<<"IGNORE HIM!"<<endl;
    }
    return 0;
}
