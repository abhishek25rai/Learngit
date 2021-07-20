#ifndef _io_
#define _io_
#include <iostream>
using namespace std;
#endif

class Toy {
protected:
	string name;
	float price;
public:
	virtual void prepareParts() = 0;
	virtual void combineParts() = 0;
	virtual void assembleParts() = 0;
	virtual void applyLable() = 0;
	virtual void showProduct() = 0;
};

class Car :public Toy {
public:
	void prepareParts() {cout<<"Preparing car parts"<<endl;}
	void combineParts() {cout<<"Combining car parts"<<endl;}
	void assembleParts() {cout<<"Assembling car parts"<<endl;}
	void applyLable() {cout<<"Applying  car parts"<<endl;}
	void showProduct() {cout<<"name "<<name<<" Price "<<price<<endl;}
};
class Bike :public Toy {
public:
	void prepareParts() {cout<<"Preparing Bike parts"<<endl;}
	void combineParts() {cout<<"Combining Bike parts"<<endl;}
	void assembleParts() {cout<<"Assembling Bike parts"<<endl;}
	void applyLable() {cout<<"Applying  Bike parts"<<endl;}
	void showProduct() {cout<<"name "<<name<<" Price "<<price<<endl;}
};

class Plane :public Toy {
public:
	void prepareParts() {cout<<"Preparing Plane parts"<<endl;}
	void combineParts() {cout<<"Combining Plane parts"<<endl;}
	void assembleParts() {cout<<"Assembling Plane parts"<<endl;}
	void applyLable() {cout<<"Applying  Plane parts"<<endl;}
	void showProduct() {cout<<"name "<<name<<" Price "<<price<<endl;}
};


