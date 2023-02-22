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
main()
{
box b1;
b1.get();
b1.showdata();
// use the pointer to an object:
box *ptr;
ptr=&b1;
ptr--->showdata();
(*ptr).showdata();
}
