#include<iostream>
int main()
{
int v1=0, v2=0;
std::cout << "Write first number";
std::cin >> v1;
std::cout << "Write second number";
std::cin >> v2;
while (v1<=v2){
std::cout << v1 << "\n";
v1+=1;
}
return 0;
}
