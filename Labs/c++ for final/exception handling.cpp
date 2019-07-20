#include<iostream>
using namespace std;


int main()
{
    int a,b,c;

    double d;

    cout<<"please enter three numbers(where a!=b)"<<endl;

    cin>>a>>b>>c;


    try{

        if((a-b)!=0)
            {


                d=c/(a-b);

                cout<<"ans is "<<d<<endl;;

            }

    else

        throw(a-b);

    }
    catch(int i)
    {

        cout<<"EXCEPTION CAUGHT\n\n"<<endl;

        cout<<"Here A-B is "<<i<<endl;



    }




}
