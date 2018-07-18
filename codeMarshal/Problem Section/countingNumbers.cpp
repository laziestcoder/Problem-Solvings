#include<iostream>
using namespace std;

int main()
{
  int T;
  cin>>T;
  for(int t = 1; t <= T; t++){
    int n,c[101] = {0},tmp;
    cin>>n;
    for(int i = 0; i < n; i++){
      cin>>tmp;
      c[tmp]++;
    }
    int h = 0,m;
    for(int i = 0; i <= 100; i++){
      if(c[i] >= h){
        h = c[i];
        m = i;
      }
    }
    cout<<"Case "<<t<<": "<<m<<" "<<h<<endl;
  }

}
