#include<bits/stdc++.h>
using namespace std;
map<int,vector<int> >graph;
int n,m,number;
vector<int>ans_size;
map<int,int>check;
bool flag=false;
int halls_algo(int level)
{
    //cout<<"Level = "<<level<<" ans_size = "<<ans_size.size()<<endl;
    if(ans_size.size()==3)
    {
        cout<<"Found Match\n";
        for(int i=0; i<ans_size.size(); i++)
        {

            cout<<"For "<<char(i+65)<<" :  "<<ans_size[i]<<endl;
        }
        flag=true;
        ans_size.clear();
        cout<<endl;
    }
    else
    {
        for(int j=0; j<graph[level].size(); j++)
        {
            int value=graph[level][j];


            if(!check[value])
            {
                //cout<<"level "<<level<<" and value = "<<value<<endl;
                check[value]=1;
                ans_size.push_back(value);
                halls_algo(level+1);
                //cout<<"back to the level = "<<level<<endl;
                check[value]=0;
                if(ans_size.size()!=0)
                    ans_size.pop_back();
            }
        }
    }
}
int main()
{
    cout<<"how many girls ?";
    cin>>n;
    cout<<"enter the connected boys for  ";
    for(int i=1; i<=n; i++)
    {
        cout<<i<<": ";
        cout<<"enter connected boys and press (-1) to stop \n";
        while(1)
        {
            // scanf("%c",&ch);
            cin>>number;
            if(number==-1)
            {
                break;
            }
            else
            {
                graph[i].push_back(number);
            }
        }
    }
//
//    for(int i=1; i<=n; i++)
//    {
//        cout<<" for "<<i<<": ";
//
//        for(int j=0; j<graph[i].size(); j++)
//        {
//            cout<<graph[i][j]<<" ";
//        }
//        cout<<endl;
//    }
    halls_algo(1);
    if(!flag)
    {

        cout<<"No pattern Found";

    }
    return 0;
}
