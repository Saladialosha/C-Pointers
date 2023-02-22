#include<iostream>
using namespace std;
main()
{
int *p;
p=NULL; // null pointer, it is not pointing to any location
cout<<p<<endl;
cout<<&p<<endl;

int b =31;
p=&b;
cout<<*p;

}
