#include<iostream>
using namespace std;

#define SIZE 100

class q_type
{
    int queue[SIZE]; // holds the queue
    int head, tail; // indices of head and tail
public:
    void init(); // initialize
    void q(int num); // store
    int deq(); // retrieve
};

// Initialize
void q_type::init()
{
    head = tail = 0;
}

// Put value on a queue
void q_type::q(int num)
{
    if(tail+1==head || (tail+1==SIZE && !head))
    {
        cout << "Queue is full";
        return;
    }
    tail++;
    if(tail==SIZE)tail = 0; //cycle around
    queue[tail] = num;
}

// Remove a value from a queue
int q_type::deq()
{
    if(head == tail)
    {
        cout << "Queue is empty\n";
        return 0; // or some other error indicator
    }
    head++;
    if(head==SIZE) head = 0; //cycle around
    return queue[head];
}
int main()
{
    q_type q1, q2;
    int i;

    q1.init();
    q2.init();

    for(i=1; i<=10; i++)
    {
        q1.q(i);
        q2.q(i*i);
    }
    for(i=1; i<=10; i++)
    {
        cout << "Dequeue 1: " << q1.deq() << "\n";
        cout << "Dequeue 2: " << q2.deq() << "\n";
    }
    return 0;
}
