#include<iostream>
using std::cin;
using std::cout;
using std::endl;
using std::string;
int main()
{
string s1,s2;
auto len1=s1.size();
auto len2=s2.size();

cin >> s1 >>s2;

if (s1 == s2)
cout << "They are similar now"<< endl;
if (s1 > s2)
cout << "First string is larger"<< endl;
if (s1< s2)
cout << "Second string is larger"<< endl;


if (len1 == len2)
cout << "They are similar in length"<< endl;
if (len1 > len2)
cout << "First string is longer"<< endl;
if (len1 < len2)
cout << "Second string is longer"<< endl;

return 0;
}   
