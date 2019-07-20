// Anonymous Union
#include<iostream>
using namespace std;
static union
{
    int a;
    char ch;
    double d;
};
int main()
{
    a = 13;
    ch = 'x';
    d = 3.1415;
    cout << a;
    return 0;
}
/*Anonymous Union:
1. It has no type name
2. NO object of an anonymous union can be created
3. Member of an anonymous union are accessed directly without dot operator
*/
