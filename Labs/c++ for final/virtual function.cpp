#include<iostream>

using namespace std;




class base {

public:

virtual void display(){

    cout<<"DISPLAY BASE "<<endl;
}


virtual void show(){

    cout<<"SHOW BASE"<<endl;
}




};

class derive:public base

{

public:

void display(){

    cout<<"DISPLAY derive "<<endl;

}


void show(){

    cout<<"SHOW DERIVE"<<endl;
}



};



int main()
{

   base b;

   derive d;
   base *bptr;

   cout<<"\nBptr points to the base"<<endl;


   bptr=&b;
   bptr->display();

   bptr->show();



   cout<<"\nBptr points to the derive"<<endl;


   bptr=&d;
   bptr->display();

   bptr->show();

    return 0;

}
