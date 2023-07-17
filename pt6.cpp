#include<iostream>
using namespace std;
class base
{
    public:
    virtual void show()=0;
};
class derv1:public base
{
    public:
    void show()
    {
        cout<<"Derv 1\n";
    }
};
class derv2:public base
{
    public:
    void show()
    {
        cout<<"Derv 2\n";
    }
};
int main()
{
    derv1 d1;
    derv2 d2;
    base *p[2];
    p[0]=&d1;
    p[0]->show();
    p[1]=&d2;
    p[1]->show();
    return 0;
    return 0;
}