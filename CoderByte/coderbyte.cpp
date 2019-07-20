#include<bits/stdc++.h>
#include <iostream>
#include <string>
#include <sstream>
#include <cstdlib>
using namespace std;

string nTs(int i){
    string s="";
    char c,p;
    int m;
    p = 0;
    //cout<<"i "<<i<<endl;
    while(i !=0 ){
        m = i%10;
        c = m-p+'0';
        //cout<<"what "<<c<<endl;
        s += c;
        //cout<<s<<endl;
        i/=10;
    }
    //cout<<s<<endl;
    string j ="";
    int k;
    k=s.size()-1;
   // cout<<"k "<<k<<endl;
    for(i=0;i<s.size();i++){
        j += s[k];
        k--;
    }
   // cout<<j<<endl;
    return j;

}

string FizzBuzz(int num) {

  // code goes here
     string s="";
  for(int i=1; i<=num; i++){

    if(i%5==0 && i%3==0){
        s+= "FizzBuzz";
    }else if(i%3==0){
        s+= "Fizz";
    }else if(i%5== 0){
        s+= "Buzz";
    }else{

        s+= nTs(i);
       //cout<<"what"<<nTs(i);
    }
    s+= " ";
  }
  return s;

}

int main() {

  // keep this function call here
  cout << FizzBuzz(gets(stdin));
  return 0;

}
