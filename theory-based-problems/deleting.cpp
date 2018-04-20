/************************************************************************/
/*	Name: Towfiqul Islam 												*/
/*	uva id: 448714 														*/
/*	email id: towfiq.106@gmail.com										*/
/*	institute: IIUC														*/
/*	address: Chittagong, Bangladesh										*/
/*																		*/
/************************************************************************/

#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<int>v3;
    int i, x;
    cout<<"input 10 elements : "<<endl;
    for(i=0;i<10;i++)
    {
        cin>>x;
        v3.push_back(x);
    }
    v3.erase(v3.begin()+5);
    cout<<"after deleting the element in position 5"<<endl;
    cout<<"size of vector : "<<v3.size()<<endl;
    cout<<"contents of the vector : "<<endl;
    for(i=0;i<v3.size();i++)
        cout<<v3[i]<<" ";
    cout<<endl;
    v3.erase(v3.begin()+2,v3.begin()+5);
    cout<<"after deleting 3 elements from position 2"<<endl;
    cout<<"size of vector : "<<v3.size()<<endl;
    cout<<"contents of the vector : "<<endl;
    for(i=0;i<v3.size();i++)
        cout<<v3[i]<<" ";
    cout<<endl;
    return 0;
}
