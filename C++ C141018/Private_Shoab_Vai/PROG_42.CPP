/*Difference between Pointer and Indepedent Reference*/

/*Pointer: */
//#include<iostream>
//using namespace std;
//
//int main()
//{
//    int x,*ref;
//    ref=&x;
//    x=10;
//    cout << x << endl;;
//    *ref=100;
//    cout << x;
//    return 0;
//}

/*Independent Reference: */

#include<iostream>
using namespace std;

int main()
{
    int x;
    int &ref=x;
    x=10;
    cout << x << endl;  // 10
    ref=100;
    cout << x;  // 100
    return 0;
}
