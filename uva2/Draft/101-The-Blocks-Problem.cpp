#include<algorithm>
#include<iostream>
#include<cstdio>
#include<vector>
#include<map>
#include<string>

#define loop(i, st, en) for(i = st; i< en; i++)

using namespace std;

/*

Qusetion na bujhle akta Stack ar prblm
ar solution ki hote pare aitai tar proman..

btw Time Limit Exceeded..

Edit: Updated input method.. now accepted

*/


int main()
{
    //freopen("output.txt", "w", stdout);
    map<int, pair<int, int> > data;
    map<int, int> place;
    int i, n, a, b, c, d, e, x, y, q, p;
    string s, cmd1, cmd2;

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
        cin >> cmd1;

        if(cmd1[0]=='q')
            break;

        cin >> a >> cmd2 >> b;

        if(a==b)
            continue;

        if(place[a] == place[b])
            continue;

        c = data[b].second;
        d = data[a].second;
        e = data[a].first;

        switch (cmd1[0])
        {
        case 'm':

            if(cmd2[1]=='n') // move a onto b
            {

                if(d!=-1)
                {
                    x=d;
                    while(data[x].second != -1)
                    {
                        place[x] = x;
                        data[x].first = -1;
                        p = data[x].second;
                        data[x].second = -1;
                        x=p;
                    }
                    if(x!=-1)
                    {
                        place[x] = x;
                        data[x].first = -1;
                        data[x].second = -1;
                    }
                    data[e].second = -1;
                }
                else
                    data[e].second = -1;

                data[b].second = a;
                data[a].first = b;
                data[a].second = -1;

                if(c!=-1)
                {
//                    data[c].first = a;
//                    data[a].second = c;
                    x=c;
                    while(data[x].second != -1)
                    {
                        place[x] = x;
                        data[x].first = -1;
                        p = data[x].second;
                        data[x].second = -1;
                        x=p;
                    }
                    if(x!=-1)
                    {
                        place[x] = x;
                        data[x].first = -1;
                        data[x].second = -1;
                    }

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
            if(cmd2[1]=='n') // pile a onto b
            {
                if(e!=-1)
                    data[e].second = -1;

                // put all initial position
                x=data[b].second;
                while(data[x].second != -1)
                {
                    place[x] = x;
                    data[x].first = -1;
                    p = data[x].second;
                    data[x].second = -1;
                    x = p;
                }
                if(x!=-1)
                {
                    place[x] = x;
                    data[x].first = -1;
                    data[x].second = -1;
                }

                x=a;
                while(data[x].second != -1)
                {
                    place[x] = place[b];
                    x = data[x].second;
                }
                if(x!=-1)
                    place[x] = place[b];

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
                if(x!=-1)
                    place[x] = place[b];

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
//==========================
//        cout << endl << endl;
//        loop(i,0,n)
//        {
//            cout << i << " = " << data[i].first;
//            cout << " " << data[i].second;
//            cout << " | " << place[i]<< endl;
//        }
//
//        cout << endl;
//
//        loop(i,0,n)
//        {
//            x = data[i].first;
//            y = data[i].second;
//
//            if(x==-1)
//            {
//                cout << i << ": " << i;
//
//                if(y!=-1)
//                {
//                    q=y;
//                    do
//                    {
//                        cout << " " << q;
//                        q=data[q].second;
//                    }
//                    while(data[q].second!=-1);
//                    if(q!=-1)
//                        cout << " " << q;
//                }
//
//            }
//            else
//            {
//                cout << i << ":";
//            }
//
//
//            cout << "\n";
//        }

        //=========================
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
