/*Difference between Function Overloading and Default Argument:*/

/*Function Overloading*/

//#include<iostream>
//using namespace std;
//
// Function Overloading
//int area(int l, int w)
//{
//    return l*w;
//}
//int area(int a)
//{
//    return a*a;
//}
//int main()
//{
//    cout << area(5,4) << endl;
//    cout << area(5) << endl;
//    return 0;
//}

/*Default Argument*/

#include<iostream>
using namespace std;

int area(int l, int w=0)
{
    if(w==0)
        return l*l; // 25
    else
        return l*w; // 20
}
int main()
{
    cout << area(5,4) << endl;  // l=5, w=4, Output: 20
    cout << area(5) << endl;    // l=5, w=0, Output: 25
    return 0;
}
