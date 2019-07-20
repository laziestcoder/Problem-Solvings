
#include<iostream>

using namespace std;



class base{

    public:

    virtual void example()=0;
};



class d1{

    public:

    virtual void example(){

        cout<<"whazzp"<<endl;


    }
};


class d2{

public:

    void example()
    {
        cout<<"Dude"<<endl;

    }
};

int main()
{

    base *arr[2];
    d1 o1;

    d2 o2;

    arr[0]=&o1;

    arr[1]=&o2;

    arr[0]->example();

    arr[1]->example();

}
