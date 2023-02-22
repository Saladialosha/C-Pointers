#include<iostream>
using namespace std;
class box
{
int l,w;
public:
void get()
{
l=10;
w=20;
}
void showdata()
{
cout<<l<<" "<<w<<endl;
}
};
void (box::*ftr)()=&box::showdata; // pointer to member function
main()
{
box b;
box *ptr;
ptr=&b;
b.get();
b.showdata();
(b.*ftr)(); // using pointer to function with object of a class
// can you try pointer to an object and member function together
// it is possible
(*ptr.*ftr)();
}
