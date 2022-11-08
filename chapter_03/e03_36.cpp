#include<iostream>
#include<vector>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{

//constexpr size_t array_size = 10;
//vector<int> ia{1,2,3,4,5};

int ia1[] = {0,1,2,3,4,5};
int ia2[] = {0,1,2,3,4,5};

for (int i=0; i<6;++i){
cout << i << ia1[i] << ia2[i];//
if (ia1[i]!=ia2[i])
int a=0;
if (ia1[i]==ia2[i])
int a=1;
}

vector<int> iv1 = {0,1,2,3,4,5};
vector<int> iv2 = {0,1,2,3,4,5};

for (int i=0; i<6;++i){
//cout << i << ia1[i] << ia2[i];//
if (iv1[i]!=iv2[i])
int v=0;
if (iv1[i]==iv2[i])
int v=1;
}

if (int a=0)
cout << "They are different";
if (int v=0)
cout << "They are different";
else
cout << "They are similar";



}
