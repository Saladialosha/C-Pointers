#include<iostream>
using namespace std;
main()
{
void *ptr;
int a=7;
float b=12.1;
ptr=&a;
cout<<*((int *)ptr)<<endl;
ptr=&b;
cout<<*((float *)ptr);
}
