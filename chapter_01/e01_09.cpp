#include<iostream>
int main()
{
int sum = 0, val = 50;
while (val<=100){
sum+=val;
val+=1;
}
std::cout << sum << "\n";
return 0;
}
