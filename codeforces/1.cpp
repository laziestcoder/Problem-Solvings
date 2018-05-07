/************************************************************************/
/*	Name: Towfiqul Islam 												*/
/*	uva id: 448714 														*/
/*	email id: towfiq.106@gmail.com										*/
/*	institute: IIUC														*/
/*	address: Chittagong, Bangladesh										*/
/*																		*/
/************************************************************************/
#include<iostream>
using namespace std;

int main()
{
    int n,f=0;
    int y[]={31,29,31,30,31,30,31,31,30,31,30,31,31,29,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,29,31,30,31,30,31,31,30,31,30,31,31,29,31,30,31,30,31,31,30,31,30,31};
    cin>>n;
        int a[n+1];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<60;i++){
            int c=0;
            if(y[i]==a[0]){
              for(int j=i+1;j<=(i+n);j++){
                if(a[++c]!=y[j]){
                    break;
                }
              }
            }
        cout<<c;
            /*if(c==(n-1)){
                cout<<"YES\n";
                f=1;
                break;
            }
        }
        if(f==0) cout<<"NO\n";*/
}
    return 0;
}
