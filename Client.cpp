#include <iostream>
using namespace std;
//#endif
#include "toyfactory.cpp"

int main()
{
	int type;
	while(1){
		cout<<endl<<"Enter Type or Zero for exit"<<endl;
		cin>>type;
		if(!type)
			break;
		Toy *v = ToyFactory::createToy(type);
		if(v){
			v->showProduct();
			delete []v;
		}
	}
	cout<<"Exit "<<endl;
	return 0;
}




