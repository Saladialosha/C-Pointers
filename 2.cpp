#include<iostream>
using namespace std;
main()
{
int i=2,*j, **k , ***ptr;
j=&i;
k=&j ; 
cout<<" value of i= "<<i<<endl; 
cout<<" value of *j= "<<*j<<endl; 
cout<<" **k= "<< **k<<endl; 

cout<<" &i = "<<&i<<endl;
cout<<" j = " <<j<<endl;

cout<<" &j = "<<&j<<endl;

cout<<" k = "<<k<<endl;

ptr= &k;
cout<<" ptr = "<<ptr<<endl;
cout<<"***ptr "<<***ptr<<endl; 

i=21;
***ptr=i;
cout<<"***ptr "<<***ptr<<endl;

}
