#include<iostream>
#include<cstring>
#include<locale>

using namespace std;

int larger(int i,int *p)
    {
        return (i>*p) ? i: *p;
    }

int main()
{
     int i=10;
     cout << larger(5,&i);
}
