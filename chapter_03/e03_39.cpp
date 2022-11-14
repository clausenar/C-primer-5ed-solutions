#include<iostream>
#include<vector>
using namespace std;

int main()
{


string s1="hej på dig";
string s2="hej på dig";

if (s1==s2)
cout << "They are similar using c++";


const char ca1[]="A string";
const char ca2[]="A string";



if (strcmp(ca1,ca2)==0)
cout << "They are similar using c style";



}
