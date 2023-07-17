#include<iostream>
#include<fstream>
#include<string>
using namespace std;
class person
{
    public:
    char name[50];
    int age;
    void getd()
    {
        cout<<"Enter name:";
        cin>>name;
        cout<<"Enter age:";
        cin>>age;
    }
    void putd()
    {
        cout<<name<<age;
    }
};
int main()
{
    person p1,p2;
    p1.getd();
    fstream file;
    file.open("people.txt",ios::in|ios::out|ios::app);
    file.write(reinterpret_cast<char *>(&p1),sizeof(p1));
    file.seekg(0);
    file.read(reinterpret_cast<char *>(&p2),sizeof(p2));
    p2.putd();
    file.close();
    return 0;

}




