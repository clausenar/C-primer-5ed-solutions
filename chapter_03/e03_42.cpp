#include<iostream>
#include<vector>
#include<cstring>
using namespace std;

int main()
{
int int_arr[]={0,1,2,3};
vector<int> ivec(begin(int_arr),end(int_arr));

int arr_from_vector[ivec.size()];

int i=0;
for (auto &t:ivec)
{arr_from_vector[i]=t;
++i;}

}

