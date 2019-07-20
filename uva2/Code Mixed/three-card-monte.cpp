#include<iostream>

#include<cstdio>
#include<cstring>

using namespace std;

int main()
{

    char str[100],ch;

    int n,i,temp,m,j,k;


    cin>>n;



    for(i=0; i<n; i++)
    {


        cout<<"i= "<<i<<endl;

        scanf("%s",str);

        int store[2];

        store[0]=1;

        store[1]=2;

        store[2]=3;


        m=strlen(str);

       for(j=0; j<m; j++)
        {
            ch=str[j];

            //cout<<ch<<endl;

            if(ch=='L')
            {
                temp=store[0];
                store[0]=store[1];
                store[1]=temp;


            }
            else if(ch=='R')
            {
                temp=store[2];
                store[2]=store[1];
                store[1]=temp;



            }

            else if(ch=='E')
            {

                temp=store[2];
                store[2]=store[0];
                store[0]=temp;



            }
        }
        for(k=0; k<=2; k++)
        {
            // cout<<"second loop working\n";

            // cout<<"store "<<k<<":"<<store[k]<<"\n";

            if(store[k]==2)
            {

                if(k==0)
                {

                    cout<<"L"<<endl;
                }

                else if(k==1)
                {

                    cout<<"M"<<endl;
                }

                else
                {

                    cout<<"R"<<endl;
                }
            }


        }








    }










}
