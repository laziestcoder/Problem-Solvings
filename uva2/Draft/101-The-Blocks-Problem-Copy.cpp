#include<algorithm>
#include<iostream>
#include<cstdio>
#include<vector>
#include<map>
#include<string>

#define loop(i, st, en) for(i = st; i< en; i++)

using namespace std;

/*
    on "onto" condition, if the blocks not
    go to the initial position then this code
    think so is correct. :D
*/

int main()
{
    //freopen("output.txt", "w", stdout);
    map<int, pair<int, int> > data;
    map<int, int> place;
    int i, n, a, b, c, d, e, x, y, q;
    string s;

    cin >> n;
    loop(i,0,n)
    {
        data[i].first = -1;
        data[i].second = -1;
        place[i] = i;
    }

    getchar();
    while(1)
    {
        getline(cin, s);
        if(s[0]=='q')
            break;

        a=s[5]-'0';
        b=s[12]-'0';

        if(a==b)
            continue;

        if(place[a] == place[b])
            continue;

        c = data[b].second;
        d = data[a].second;
        e = data[a].first;

        switch (s[0])
        {
        case 'm':

            if(s[8]=='n') // move a onto b
            {

                if(d!=-1)
                {
                    data[d].first = e;
                    data[e].second = d;
                }
                data[e].second = -1;

                data[b].second = a;
                data[a].first = b;

                if(c!=-1)
                {
                    data[c].first = a;
                    data[a].second = c;
                }

                place[a] = place[b];

            }
            else // move a over b
            {
                if(d!=-1)
                {
                    data[d].first = e;
                    data[e].second = d;
                }
                else
                    data[e].second = -1;

                if(c==-1)
                {
                    data[b].second = a;
                    data[a].first = b;
                    data[a].second = -1;
                }
                else
                {
                    x=b;
                    while(data[x].second != -1)
                    {
                        place[x] = place[b];
                        x = data[x].second;
                    }

                    data[x].second = a;
                    data[a].first = x;
                    data[a].second = -1;

                }

                place[a] = place[b];

            }

            break;

//        c = data[b].second;
//        d = data[a].second;
//        e = data[a].first;

        case 'p':
            if(s[8]=='n') // pile a onto b
            {
                if(e!=-1)
                    data[e].second = -1;

                x=a;
                while(data[x].second != -1)
                {
                    place[x] = place[b];
                    x = data[x].second;
                }

                data[c].first = x;
                data[x].second = c;

                data[b].second = a;
                data[a].first = b;

                place[a] = place[b];
            }
            else // pile a over b
            {
                x=a;
                while(data[x].second != -1)
                {
                    place[x] = place[b];
                    x = data[x].second;
                }

                x=b;
                while(data[x].second != -1)
                {
                    x = data[x].second;
                }

                data[e].second = -1;

                data[x].second = a;
                data[a].first = x;

                place[a] = place[b];
            }
            break;
        }
    }

//    loop(i,0,n)
//    {
//        cout << i << " = " << data[i].first;
//        cout << " " << data[i].second;
//        cout << " | " << place[i]<< endl << endl;
//    }


    loop(i,0,n)
    {
        x = data[i].first;
        y = data[i].second;

        if(x==-1)
        {
            cout << i << ": " << i;

            if(y!=-1)
            {
                q=y;
                do
                {
                    cout << " " << q;
                    q=data[q].second;
                }
                while(data[q].second!=-1);
                if(q!=-1)
                    cout << " " << q;
            }

        }
        else
        {
            cout << i << ":";
        }


        cout << "\n";
    }




    return 0;
}
