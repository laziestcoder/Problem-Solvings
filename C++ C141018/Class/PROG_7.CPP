// Friend Functions, Herbert Schildt: Page: 109
#include<iostream>
using namespace std;

class truck;    // a forward declaration

class car{
    int passengers;
    int speed;
public:
    car(int p, int s)
    {
        passengers = p;
        speed = s;
    }
    friend int sp_greater(car c, truck t);
};
class truck{
    int weight;
    int speed;
public:
    truck(int w, int s) {weight = w, speed = s;}
    friend int sp_greater(car c, truck t);
};
/*Return positive if car speed faster than truck.
Return 0 if speeds are the same.
Return negative if truck speed faster than car.
*/
int sp_greater(car c, truck t)
{
    return c.speed - t.speed;
}

int main()
{
    int t;
    car c1(6, 55), c2(2, 120);
    truck t1(10000, 55), t2(20000, 72);

    cout << "Comparing c1 and t1: \n";
    t = sp_greater(c1, t1);
    if(t<0) cout << "Truck is faster.\n";
    else if(t==0) cout << "Car and truck speed is the same.\n";
    else cout << "Car is faster.\n";

    cout << "\nComparing c2 nd t2";
    t = sp_greater(c2, t2);
    if(t<0) cout << "Truck is faster.\n";
    else if(t==0) cout << "Car and truck speed is the same.\n";
    else cout << "Car is faster.\n";

    return 0;
}
