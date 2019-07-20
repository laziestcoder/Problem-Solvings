// Balaguru,Page:184,Prog:7.4, Mathematical Operations On Strings
#include<cstring>
#include<iostream>
using namespace std;

class string1
{
    int len;
public:
    char *p;
    string1() {len = 0;p = 0;}   // create null string
    string1(const char *s);      // create string form arrays
    string1(const string1 &s);    // copy constructor
    ~string1(){delete p;}        // destructor

    // + operator
    friend string1 operator+(const string1 &s, const string1 &t);

    // <= operator
    friend int operator<=(const string1 &s, const string1 &t);

    friend void show(const string1 s);
};

string1::string1(const char *s)
{
    len = strlen(s);
    p = new char[len+1];
    strcpy(p,s);
}

string1::string1(const string1 &s)
{
    len = s.len;
    p = new char[len+1];
    strcpy(p,s.p);
}
// overloading + operator
string1 operator+(const string1 &s, const string1 &t)
{
    string1 temp;
    temp.len=s.len + t.len;
    temp.p=new char[temp.len+1];
    strcpy(temp.p,s.p);
    strcat(temp.p,t.p);
    return(temp);
}
// overloading <= operator
int operator<=(const string1 &s, const string1 &t)
{
    int m = strlen(s.p);
    int n = strlen(t.p);

    if(m <= n) return(1);
    else return(0);
}
void show(const string1 s)
{
    cout << s.p;
}

int main()
{
    string1 s1 = "New ";
    string1 s2 = "York";
    string1 s3 = "Delhi";
    string1 t1,t2,t3;
    t1 = s1;
    t2 = s2;
    t3 = s1+s3;

    cout << "\nt1 = "; show(t1);
    cout << "\nt2 = "; show(t2);
    cout << "\n";
    cout << "\nt3 = "; show(t3);
    cout << "\n\n";

    if(t1<=t3)
    {
        show(t1);
        cout << " smaller than ";
        show(t3);
        cout << "\n";
    }
    else
    {
        show(t3);
        cout << " smaller than ";
        show(t1);
        cout << "\n";
    }
    return 0;
}
