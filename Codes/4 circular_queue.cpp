/*
circular queue
*/

#include<iostream>

using namespace std;

class queue
{
    int array[101];
    int N;
    int front;
    int rear;
    public:
    queue(void)
    {
        front=rear=0;
        cout<<"input size : ";
        cin>>N;
    };
    int is_empty()
    {
        if(front==0)
            return 1;
        else
            return 0;
    };
    int is_full()
    {
        if((front==1&&rear==N)||(front==rear+1))
            return 1;
        else
            return 0;
    };
    void insert(void)
    {
        int item;
        if(is_full())
            cout<<"overflow"<<endl;
        else
        {
            cout<<"input item : ";
            cin>>item;
            if(is_empty())
                front=1;
            if(rear==N)
                rear=1;
            else
                rear++;
            array[rear]=item;
        }
    };
    void del(void)
    {
        int item;
        if(is_empty())
            cout<<"underflow"<<endl;
        else
        {
            item=array[front];
            if(front==rear)
                front=rear=0;
            else if(front==N)
                front=1;
            else
                front++;
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
                case 3: if(is_empty())
                            cout<<"queue is empty"<<endl;
                        else
                        {
                            if(front<=rear)
                                for(i=front;i<=rear;i++)
                                    cout<<array[i]<<" ";
                            else
                            {
                                for(i=front;i<=N;i++)
                                    cout<<array[i]<<" ";
                                for(i=1;i<=rear;i++)
                                    cout<<array[i]<<" ";
                            }
                            cout<<endl;
                        }

                        break;
                case 4: cout<<"exit";
                        break;
            }
        }while(choice!=4);
    };
};

int main()
{
    queue q1;
    q1.menu();
    return 0;
}
