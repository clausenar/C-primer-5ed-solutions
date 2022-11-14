#include<iostream>
#include<vector>
#include<cstring>
using namespace std;

int main()
{

char chars=1;
int array[]={11,22,32,42};
string str="a short string";

vector<int> v1={11,22,32,42};
;

cout << "chars " << sizeof(chars) << "\n";
cout << "array " << sizeof(array)<< "\n";

cout << "string " << sizeof(str)<< "\n";

cout << "vector v1 " << sizeof(v1) << "\n";
cout << "reference to v1 " << sizeof(&v1) << "\n";

}


