#include<iostream>
#include<cstring>
#include<locale>
using namespace std;

bool is_any_lower(){
    string str="Str";
    bool upper =true;
    for (int i=0;i<str.size();++i)
        {if (isupper(str[i])==true)
        cout << i << "This is upper"<< "\n";
        else
        {
        cout << i << "this is lower" << "\n";
        upper = false;}}
    return upper;
}

string to_lower(){
    string str="Str";
    for (char &c: str)
        c=tolower(c);
    return str;
}

int main()
{
is_any_lower();
cout << to_lower();
}


