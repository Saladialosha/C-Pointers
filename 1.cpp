// use of pointer variable and address
#include<iostream>
using namespace std;
main()
{
int i, *ptr;
i=5;
int j =70;
ptr=&i; // passing the address of i variable to pointer

cout<<" value of i "<<i<<endl;
cout<<" address of i "<<&i<<endl;
cout<<" address saved atpointer ptr = "<<ptr<<endl;
cout<<" address of ptr "<<&ptr<<endl;

// concept of dereference
//means i want to check the value where pointer is pointing
//i.e the value saved at the address which is saved in pointer
cout<<*ptr<<endl;

*ptr=25;
cout<<" value of i again "<< i<<endl;
ptr=&j;
cout<<" value is "<<*ptr<<endl;
}
