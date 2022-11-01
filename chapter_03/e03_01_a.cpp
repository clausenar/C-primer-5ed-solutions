#include<iostream>
using std::cin;
using std::cout;
int main()
{
int sum = 0, val = 50;
while (val<=100){
sum+=val;
val+=1;
}
cout << sum << "\n";


int val2 = 10;
while (val2>=0){
cout << val2 << "\n";
val2-=1;}

int v1=0, v2=0;
cout << "Write first number";
cin >> v1;
cout << "Write second number";
cin >> v2;
while (v1<=v2){
cout << v1 << "\n";
v1+=1;}

return 0;
}
