/************************************************************************/
/*	Name: Towfiqul Islam 												*/
/*	uva id: 448714 														*/
/*	email id: towfiq.106@gmail.com										*/
/*	institute: IIUC														*/
/*	address: Chittagong, Bangladesh										*/
/*																		*/
/************************************************************************/
#include<iostream>
#include<string>
using namespace std;
int main(){
    int a,b;
    string c;
    cin>>a>>b;
    cin>>c;
    while(b--){
        string d;
        char s;
        int x,y;
        cin>>x>>y>>s;
        for(int j=0;j<x-1;j++) d+=c[j];
        for(int i=x-1;i<y;i++){
            if(c[i]!=s){
                d+=c[i];
            }
        }
        for(int j=y;j<c.length();j++){
                d+=c[j];}
        c=d;
    }
    cout<<c;
    cout<<endl;
    return 0;
}
