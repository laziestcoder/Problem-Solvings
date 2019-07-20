#include<iostream>
#include<istream>
#include<string>
#include "loveboll.h"

using namespace std;

loveboll create()
{
    int age,height;
    string name,colour;
    cout<<"Enter age"<<endl;
    cin>>age;
    cout<<"Enter height"<<endl;
    cin>>height;
    cout<<"Enter name"<<endl;
    cin>>name;
    cout<<"Enter colour"<<endl;
    cin>>colour;
    cout<<endl;
    loveboll a(age,height,name,colour);
    return a;
}
int main ()
{
    int i=0,j;

    loveboll man[j];
    cout<<"How many men you want to see their love quality"<<endl;
    cin>>j;
    for(i=0;i<j;i++)
    {
        man[i]=create();
    }
    for(i=0;i<j;i++)
    {
        man[i].counter();
    }
    man[i].show_result();
    return 0;

}
