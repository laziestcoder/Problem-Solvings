#include<bits/stdc++.h>
#include <iostream>
#include <string>
#include <vector>
#include <cstdio>
#include <cstdlib>
using namespace std;


static int foo(const std::string *array)
{
    size_t i = 0;
    while (!array[i].empty())
        ++i;
    return i;
}


vector<string> v;


string LRUCache(string strArr[])
{
    //cout<<strArr[1][0];
    int j=0,i=0,p=0;
    int is = 9;
    is = foo(strArr);

    //cout<<is<<endl;
    for(j=0; j<is; j++)
    {
        string s="";
        s += strArr[j][0];
        //cout<<s;
        if(v.size() != 0){
            bool flag = false;
            for(i=0; i<v.size(); i++)
            {
                if(s == v.at(i))
                {
                   flag = true;
                   break;
                }

            }
            if(flag){
                // cout<<v.at(i);
                    v.erase(v.begin()+i);
                    v.push_back(s);
                    //cout<<"worked " <<s<<endl;
                    /** for(p=0;p<v.size();p++){
                         cout<<v.at(p)<<" ";
                    }
                    cout<<endl;
                    ***/
            }
             else
                {
                    if(v.size()>=5)
                    {
                        v.erase(v.begin());
                    }
                    v.push_back(s);
                    //cout<<"worked " <<s<<endl;
                    /***
                     for(p=0;p<v.size();p++){
                         cout<<v.at(p)<<" ";
                    }
                    cout<<endl;
                    ***/

                }
        }
        else{
            v.push_back(s);
            //cout<<"worked " <<s<<endl;
            /***
             for(p=0;p<v.size();p++){
                         cout<<v.at(p)<<" ";
                    }
                    cout<<endl;
                    ***/
        }
    }

   /** for(i=0;i<v.size();i++){
       // cout<<v.at(i)<<" ";
    }**/

    string ans;
    ans = "";
    int l = v.size();
    for(i=0;i<l;i++){
        ans += v.at(i);
        //v.erase(v.begin()+i);
        if(i+1!=l)
        ans += '-';
    }

        return ans;

}


int main()
{

    // keep this function call here
    /* Note: In C++ you first have to initialize an array and set
       it equal to the stdin to test your code with arrays. */
    v.clear();
    string A[] = gets(stdin);
    cout << LRUCache(A);
    return 0;

}


