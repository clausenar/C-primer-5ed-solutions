#include<iostream>
#include<cstring>
#include<locale>

using namespace std;

void print1(const char *cp)
{
if (cp)
    while (*cp)
    cout << *cp++;
}

void print2(const int *beg,const int *end)
{
    while (beg!=end)
    cout << *beg++ ;
}

void print3(const int ia[],size_t size)
{
for (size_t i=0;i!=size;++i)
cout << ia[i];
}

int main()
{

print1("er");

int j[6]={0,3,4,5,2,1};
print2(begin(j),end(j));

int j1[]={0,1,2};
print3(j1,end(j1)-begin(j1));



}
