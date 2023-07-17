#include<iostream>
#include<string>
using namespace std;
class Publication
{
    public:
    string title;
    float price;
    void getd()
    {
        cout<<"Enter Title"<<endl;
        cin>>title;
        cout<<"Enter price"<<endl;
        cin>>price;
    }
    void putd()
    {
        cout<<"The title :"<<title<<endl;
        cout<<"The price :"<<price<<endl;
    }
};
class Sales
{
    public:
    float sales[100];
    void getd()
    {
        cout<<"Enter Sales details for 3 amounts"<<endl;
        for(int i=0;i<=3;i++)
        {
            cin>>sales[i];
        }
    }
    void putd()
    {
        cout<<"The Sales details are:"<<endl;
        for(int i=0;i<=3;i++)
        {
            cout<<"The sales details are"<<sales[i];
        }

    }
};
class Book:public Publication,public Sales
{
    public:
    int page_count;
    void getd()
    {
        cout<<"Enter page count details"<<endl;
        cin>>page_count;
    }
    void putd()
    {
        cout<<"The page count details are:"<<page_count<<endl;
    }


};
class Tape:public Publication,public Sales
{
    public:
    int Playing_Time;
    void getd()
    {
        cout<<"Enter Playing Time:"<<endl;
        cin>>Playing_Time;
    }
    void putd()
    {
        cout<<"The playing time is:"<<Playing_Time<<endl;
    }
};
int main()
{
    Tape t1;
    Book b1;
    t1.Tape::getd();
    t1.Publication::getd();
    t1.Sales::getd();
    b1.Book::getd();
    b1.Book::putd();
    t1.Tape::putd();
    t1.Publication::putd();
    t1.Sales::putd();


    return 0;
}


