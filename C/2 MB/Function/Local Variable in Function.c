void f1();
void f2();

int main()
{
    int m=1000;
    f2();
    printf("%d\n",m);

    return 0;
}
void f1()
{
    int m=10;
    printf("%d\n",m);
}
void f2()
{
    int m=100;
    f1();
    printf("%d\n",m);
}
