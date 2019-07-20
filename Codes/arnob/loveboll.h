#ifndef LOVEBOLL_H_INCLUDED
#define LOVEBOLL_H_INCLUDED
#include<iostream>
#include<string>
#include<cstring>
using namespace std;
class loveboll{
int age,height;
string name,body_colour;
public:
loveboll()
{}
loveboll(int a,int h,string n,string c)
{
   age=a;
   height=h;
   name=n;
   body_colour=c;
}
int counter()
{
   int i,w,x,love;
   string y,z;
   w=age;
   x=height;
k  y=strlen(name);
   z=body_colour;

   if(w<15)
   {
       w=5;
   }
   if(w>14&&w<20)
   {
       w=12;
   }
   if(w>19&&w<30)
   {
       w=20;
   }
   if(w>29&&w<45)
   {
       w=15;
   }
   else
   {
       w=10;
   }
   if(x<65)
   {
       x=15;
   }
   if(x>65&&x<73)
   {
       x=29;
   }
   if(x==68)
   {
       x=30;
   }
   else
   {
       x=23;
   }
   if(y<7)
   {
       y=10;
   }
   if(y>14)
   {
       y=9;
   }
   else
   {
       y=y+6;
   }
   if(z==white)
   {
       z=30;
   }
   if(z==black)
   {
      z=10;
   }
   else
   {
    z=20;
   }
love=w+x+y+z;
return love;
}
void show_result()
   {
      cout<<loveboll::counter()<<endl;
      if(counter()>93)
      {
          cout<<"You are hero, man"<<endl;
      }
      if(counter()<80)
      {
         cout<<"Be handsome man"<<endl;
      }
      if(counter()>79&&counter()<94)
      {
         cout<<"You are perfect";
      }
};

#endif // LOVEBOLL_H_INCLUDED
