#include<iostream>
#include<cstring>
#include<locale>

using namespace std;

void swap(int*& left,int*& right)
{
auto tmp=left;
left=right;
right=tmp;
}

int main()
{
int i=5;
int p=6;

auto left=&i;
auto right=&p;

cout << *left << *right<< "\n"; 

swap(left,right);

cout << *left << *right; 

}
