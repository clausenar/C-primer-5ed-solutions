#include<iostream>
#include<cstring>
#include<locale>

using namespace std;

int larger(const int i,const int *const p)
    {
        return (i>*p) ? i: *p;
    }



int main()
{
     int i=10;
     cout << larger(5,&i);

}
