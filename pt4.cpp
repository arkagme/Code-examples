#include<iostream>
#include<string>
using namespace std;
class ColorAddition
{
    private:
    char color[50];
    public:
    ColorAddition(const char* c){strncpy(color,c,sizeof(c));}
    ColorAddition operator+(ColorAddition m)
    {
        
        if(strcmp(color,"R")== 0  && strcmp(m.color,"G")== 0)  
        {
            return "yellow";
        }
        else if(strcmp(color,"G")== 0 && strcmp(m.color,"B")== 0)
        {
            return("Cyan");
        }
        else if(strcmp(color,"R")== 0 && strcmp(m.color,"B")== 0)
        {
            return("magenta");
        }

    }
    void putd()
    {
        cout<<color<<endl;
    }
};
int main()
{
    ColorAddition red("R"),green("G"),blue("B");
    ColorAddition s("");
    s=red+blue;
    s.putd();
    return 0;



}
