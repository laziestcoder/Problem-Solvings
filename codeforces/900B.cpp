#include<bits/stdc++.h>
using namespace std;
int main (){
    int a,b,c,cnt = 1;
    cin>>a>>b>>c;
    int m = 1e5,t=0;
    while(cnt!=m){
        if(a<b) a*= 10;
        if(a<b) t = 0;
        else t = a/b;
        a = a%b;
        if(t == c){
            cout<<cnt<<endl;
            return 0;
        }
        cnt++;
    }
    cout<<"-1"<<endl;
    return 0;
}

/*****

wrong solution


 #include<bits/stdc++.h>
using namespace std;
int main (){
    long long int a,b,c,cnt = 0, i =0;
    cin>>a>>b>>c;
    long double d;
    d = double(a*1.0/b);
    d = d - (a/b);
    d *= 10000000000;
    long long int x;
    x = d;
    cnt  = i = 10;
    bool flag = false;
    //cout<<d<<" "<<i<<endl;
    while(i-- && x){
            if(x%10 == c){
                cnt = min(cnt,i+1);
                //cout<<cnt<<" "<<i+1<<endl;
                flag = true;
            }
            x/=10;
    }
    if(flag)
    cout<<cnt<<endl;
    else
    cout<<"-1"<<endl;

    return 0;
} ****/
