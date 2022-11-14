#include<iostream>
#include<vector>
#include<cstring>
using namespace std;

int main()
{

const char ca1 []="A string example";
const char ca2 []="A different string";

const size_t length=strlen(ca1)+strlen(ca2)+2;
char ca3[length];

strcpy(ca3,ca1);
strcat(ca3," ");
strcat(ca3,ca2);

cout << ca3;

}
