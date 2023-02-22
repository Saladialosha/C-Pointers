#include<iostream>
using namespace std;
main()
{
int *ptr= new int[5]; 
ptr[0]= 85;
cout<<*ptr<<endl;
delete [] ptr;
cout<<*ptr; 
}
