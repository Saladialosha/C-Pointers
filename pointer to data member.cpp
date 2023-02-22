#include<iostream>
using namespace std;
class box
{
	public:
	int l,w;
	
	void get()
		{
			l=10;
			w=20;
		}
		void show()
		{
			cout<<l<<" "<<w<<endl;
		}
};

main()
{
	box b;
	b.get();
	int box::*ptr=&box::l;
	cout<<b.l<<endl;
	cout<<b.*ptr;
	
}
