#include <iostream>
#include "Vector.cpp"
using namespace std;

int main()
{
	Vector<int> v(5);
	v.push_back(536);
	v.push_back(6);
	v.push_back(25);
	//v.push_back(5);
	//v.push_back(7);
	//v.push_back(2);
	cout << v.getSize() << endl;
	cout << v.getCapacity() << endl;
	cout << "bfvhdevdejwn" << endl;
	/*//v.pop_back();
	//cout << v.getSize() << endl;
	//cout << v[0] << endl;
	//cout << v.getCapacity() << endl;
	cout << "bfvhdevdejwn" << endl;
	//v.push_front(5);
	v.push_front(36);
	cout << v[0] << endl;
	v.pop_back();
	//v.pop_front();
	cout << v.getSize() << endl;
	*/

	/*
	Vector<int> v1(v);
	v1=v;
	cout << v1.getCapacity() << endl;
	v1 = v;
	cout << v1.getCapacity() << endl;
	cout << v.getSize() << endl;
	v.pop_front();
	cout << v.getSize() << endl;
	cout << v1.getSize() << endl;
	
	
	for (int i = 0;i < v1.getSize();++i)
		cout << v1[i] << " ";
	cout << endl;
	*/
	for (int i = 0;i < v.getSize();++i)
		cout << v[i] << " ";
	cout << endl;

	system("pause");
	return 0;
}