I’ve been thinking about designing my own Class that would handle BigNum and their operations. Recently I’ve put my hands on it as UVa is down for about two days. I’ve just added the Addition function. It can handle Numbers with given sizes. And it ignores initial Zeros.

I’m feeling too lazy to write a documentation sorta thing on it right now but for the start:

-> Suppose a is your BigNum. You initialize it with

BigNum a("20000",5);

Since 5 is the length of the number;

You can also initialize it like

BigNum a;

Then it has nothing in it and it's size is 0;



To add you can use both Strings (not the C++ string class, not yet) which are char * or another BigNum. But you must use a BigNum for storing the result. It uses a global array of 1000000 size for temp usage. I'm thinking of binding it inside the object but RTE errors are really boring.



Example:

a.add("200",c);

a.add("200",a);

a.add(a,a);

/* --------------------------> BISMILLAHIR RAHMANIR RAHIM <------------------------------ */

/* ------------------------> Tafhim Ul Islam [ CSE-09@IIUC ] <--------------------------- */

#include <cstdio>

#include <iostream>

#include <cmath>

#include <cstring>

#include <string>

#include <map>

#include <stack>

#include <queue>

#include <cstdlib>

#include <vector>

#include <climits>

#include <set>

#define MI INT_MAX

#define ULONG unsigned long long

#define LLONG long long

#define swap(a,b) {int t=a ; a=b ; b=t; }

#define sz(a) sizeof(a)

#define FOR(i, a, b) for (i=a ; i<b ; i++)

#define QSORT(a,n,s,f) qsort(a,n,sizeof(s),f)

using namespace std;



char res[1000000];



class BigNum

{

    private:

    char *num;

    int sLen;

    public:

    bool add(BigNum *a, BigNum *stor) {                // a points to the other number, stor points to the location                                                     // where the result is stored

        int i, j, k, car=0, cur;

        for (i=sLen-1, j=(a->length())-1, k=0 ; i>=0 || j>=0 ; i--, j--, k++) {

            cur = (i>=0?num[i]:'0') + (j>=0?a->num[j]:'0') - ('0'+'0') + car; // Turning it into integer, 2 '0's because 2 ASCII char

            if (cur>9) {

                car = 1;

                cur = cur - 10;

            } else {

                car = 0;

            }

            res[k]=cur+'0';

        }

        if (car)

        {

            res[k++]='1';

        }

        for (--k, i=0 ; k>=0 ; k--, i++)

        {

            stor->num[i]=res[k];

        }

        stor->num[i]='';

        stor->sLen=i;



        return true;

    }

    bool add(char *a, BigNum *stor) {                // a points to the other number, stor points to the location                                                     // where the result is stored

        int i, j, k, l, car=0, cur;



        for (l=0 ; a[l]=='0' ; l++);



        for (i=sLen-1, j=strlen(a)-1, k=0 ; i>=0 || j>=l ; i--, j--, k++) {

            cur = (i>=0?num[i]:'0') + (j>=l?a[j]:'0') - ('0'+'0') + car; // Turning it into integer, 2 '0's because 2 ASCII char

            if (cur>9) {

                car = 1;

                cur = cur - 10;

            } else {

                car = 0;

            }

            res[k]=cur+'0';

        }

        if (car)

        {

            res[k++]='1';

        }

        for (--k, i=0 ; k>=0 ; k--, i++)

        {

            stor->num[i]=res[k];

        }

        stor->num[i]='';

        stor->sLen=i;



        return true;

    }



    int length() {

        return sLen;

    }



    BigNum(char *a, int size)

    {

        num = new char [size];

        int i, k;

        for (i=0 ; a[i]!='' && a[i]=='0' ; i++);

        for (i, k=0 ; a[i]!='' ; i++, k++)

        {

            num[k]=a[i];

        }

        num[k]='';

        sLen=k;

    }

    void print() {

        printf("%s\n",num);

    }

    BigNum()

    {

        num = new char [0];

        sLen = 0;

    }

    ~BigNum()

    {

        free(num);

        sLen=0;

    }



};



int main()

{

    BigNum a("100",3), b("200",3), c;







}
