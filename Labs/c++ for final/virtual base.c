#include<iostream>

using namespace std;



class base {

public:

    int i;


};


class d1:virtual public base {

public:

    int j;


};


class d2:virtual public base{

public:

    int k;


};


class d3:virtual public base
{
    public:

    int p(){

        return (i*j*k);

    };


};


int main()
{


    d3 ob1;

    ob1.i=10;

    ob1.j=10;

    ob1.k=10;


    cout<<"ans is "<<ob1.p()<<endl;





}
