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
    vector<int>v2(5,0);
    cout<<"size of vector in the beginning : "<<v2.size()<<endl;
    int i;
    cout<<"contents of vector : ";
    for(i=0;i<v2.size();i++)
        cout<<v2[i]<<" ";
    cout<<endl;
    v2.insert(v2.begin()+3,-99);
    cout<<"after inserting -99 at position 3 :\n";
    cout<<"size of vector now : "<<v2.size()<<endl;
    cout<<"contents of vector : ";
    for(i=0;i<v2.size();i++)
        cout<<v2[i]<<" ";
    cout<<endl;
    return 0;
}
