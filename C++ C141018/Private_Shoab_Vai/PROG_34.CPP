// Friend function with forward declaration: 109 Page
#include<iostream>
using namespace std;

class truck; // a forward declaration

class car
{
    int passenger,speed;
public:
    car(int p,int s)
    {
        passenger = p;
        speed = s;
    }
    friend int sp_greater(car c,truck t); // truck class bananor agei object(truck t) declare
};                                        // kora hoyeche, tai forward declaration lagbe

class truck
{
    int weight;
    int speed;
public:
    truck(int w, int s)
    {
        weight = w; // 1000
        speed = s;  // 50
    }
    friend int sp_greater(car c, truck t);
};

int sp_greater(car c, truck t) // ata class car, class truck both class er friend function
{
    return c.speed - t.speed;
}

int main()
{
    int dif;
    car toyota(4, 100);
    truck tata(1000, 50);
    dif = sp_greater(toyota, tata);
    if(dif<0)
        cout << "Car is slow";
    else if(dif==0)
        cout << "Speed of car and truck equal";
    else
        cout << "Truck is slow";

    return 0;
}
