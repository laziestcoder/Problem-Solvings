Everything else was pretty straightforward. Except, (* and *). They mean one block of element. Think of them as single length. So “+(*o” is of length 3 not 4.
The + is at position 1
The (* is position 2
The o is position 3
Tricky cases:
Input:

(*(*))

((*)

([)]

([  ])()(**)

*)

[

     (

Output:

NO 3

NO 3

NO 3

YES

NO 1

NO 2

NO 10

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

#define MI INT_MAX

#define ULONG unsigned long long

#define LLONG long long

#define swap(a,b) {int t=a ; a=b ; b=t; }

#define sz(a) sizeof(a)

#define FOR(i, a, b) for (i=a ; i<b ; i++)

#define QSORT(a,n,s,f) qsort(a,n,sizeof(s),f)

using namespace std;



char inp[4000];

class symbol

{

    public:

    int c, p;

};



int main()

{

    int i, j, prb, length;

    bool valid;

    symbol temp, push;

    while (gets(inp))

    {

        length = strlen(inp);



        stack<symbol> s;

        prb=-1;



        for (i=0, j=0, valid=true ; i<length ; i++, j++)

        {

            //cout << s.size() << endl;

            //cout << inp[i] << " [] " << endl;

            if (inp[i]=='(')

            {

                if (i<length-1 && inp[i+1]=='*')

                {



                    s.push({1,j+1});

                    i++;



                }

                else

                {

                    s.push({2,j+1});

                }

            }

            else if (inp[i]=='[')

            {

                s.push({3,j+1});

            }

            else if (inp[i]=='{')

            {

                s.push({4,j+1});

            }

            else if (inp[i]=='<')

            {

                s.push({5,j+1});

            }



            else if (inp[i]=='*')

            {

                if (i<length-1 && inp[i+1]==')')

                {



                    i++;

                    if (s.empty())

                    {

                        prb = j+1;

                        valid = false;

                        break;

                    }

                    else

                    {

                        temp = s.top();

                        s.pop();

                        if (temp.c!=1)

                        {

                            prb = j+1;

                            valid = false;

                            break;

                        }

                    }

                }

            }

            else if (inp[i]==')')

            {



                if (s.empty())

                {

                    prb = j+1;

                    valid = false;

                    break;

                }

                else

                {

                    temp = s.top();



                    s.pop();

                    if (temp.c!=2)

                    {

                        prb =  j+1;

                        valid = false;

                        break;

                    }

                }

            }

            else if (inp[i]==']')

            {

                if (s.empty())

                {

                    prb = j+1;

                    valid = false;

                    break;

                }

                else

                {

                    temp = s.top();

                    s.pop();

                    if (temp.c!=3)

                    {

                        prb = j+1;

                        valid = false;

                        break;

                    }

                }

            }

            else if (inp[i]=='}')

            {

                if (s.empty())

                {

                    prb = j+1;

                    valid = false;

                    break;

                }

                else

                {

                    temp = s.top();

                    s.pop();

                    if (temp.c!=4)

                    {

                        prb = j+1;

                        valid = false;

                        break;

                    }

                }

            }

            else if (inp[i]=='>')

            {

                if (s.empty())

                {

                    prb = j+1;

                    valid = false;

                    break;

                }

                else

                {

                    temp = s.top();

                    s.pop();

                    if (temp.c!=5)

                    {

                        prb = j+1;

                        valid = false;

                        break;

                    }

                }

            } else

            {

                prb = -1;

            }

        }



        //printf("%d\n",i);



        if (s.empty() && valid && i>=length)

        {

            printf("YES\n");

        }

        else

        {

            if (!s.empty() && i>=length) printf("NO %d\n",j+1);

            else if (prb<0) printf("NO %d\n",s.top().p);

            else printf("NO %d\n",prb);

        }

    }

}

