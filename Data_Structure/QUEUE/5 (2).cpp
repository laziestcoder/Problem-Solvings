/*
priority queue
*/

#include<iostream>

using namespace std;

class c_queue
{
    int array[101][101];
    int M;
    int N;
    int front[101];
    int rear[101];
    public:
    c_queue(void)
    {
        int i;
        cout<<"input number of queues : ";
        cin>>M;
        cout<<"input size : ";
        cin>>N;
        for(i=1;i<=M;i++)
            front[i]=rear[i]=0;
    };
    int is_empty(int x)
    {
        if(front[x]==0)
            return 1;
        else
            return 0;
    };
    int is_full(int x)
    {
        if((front[x]==1&&rear[x]==N)||(front[x]==rear[x]+1))
            return 1;
        else
            return 0;
    };
    void insert(void)
    {
        int item, K;
        cout<<"input priority number : ";
        cin>>K;
        if(is_full(K))
            cout<<"overflow"<<endl;
        else
        {
            cout<<"input item : ";
            cin>>item;
            if(is_empty(K))
                front[K]=1;
            if(rear[K]==N)
                rear[K]=1;
            else
                rear[K]++;
            array[K][rear[K]]=item;
        }
    };
    void del(void)
    {
        int item, i, K;
        for(i=1;i<=M;i++)
        {
            if(is_empty(i)==0)
            {
                K=i;
                break;
            }
        }
        if(i==M+1)
            cout<<"underflow"<<endl;
        else
        {
            item=array[K][front[K]];
            if(front[K]==rear[K])
                front[K]=rear[K]=0;
            else if(front[K]==N)
                front[K]=1;
            else
                front[K]++;
        }
    };
    void show(void)
    {
        int i, j;
        for(i=1;i<=M;i++)
        {
            cout<<"priority level "<<i<<" ->";
            if(is_empty(i))
                cout<<" queue is empty"<<endl;
            else
            {
                if(front[i]>rear[i])
                {
                    for(j=front[i];j<=N;j++)
                        cout<<" "<<array[i][j];
                    for(j=1;j<=rear[i];j++)
                        cout<<" "<<array[i][j];
                    cout<<endl;
                }
                else
                {
                    for(j=front[i];j<=rear[i];j++)
                        cout<<" "<<array[i][j];
                    cout<<endl;
                }
            }

        }
    };
    int menu(void)
    {
        int choice, i;
        do
        {
            cout<<"1.insert"<<endl<<"2.delete"<<endl<<"3.show"<<endl<<"4.exit"<<endl;
            do
            {
                cout<<"your choice : ";
                cin>>choice;
            }while(choice<1||choice>4);
            switch(choice)
            {
                case 1: insert();
                        break;
                case 2: del();
                        break;
                case 3: show();
                        break;
                case 4: cout<<"exit";
                        break;
            }
        }while(choice!=4);
    };
};

int main()
{
    c_queue q1;
    q1.menu();
    return 0;
}
