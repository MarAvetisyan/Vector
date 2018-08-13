#include <iostream>
#include "Vector.h"
using namespace std;

template <class T>
Vector<T>::Vector(int n)
	:size(0), capacity(n),vec((n > 0) ? new T[n] : 0)
{
	if (vec) {
		for (int i =0 ;i < n;++i)
			vec[i] = 0;
	}
	else 
		cout << "You want to create Vector with capacity 0 !!!" << endl; 
}


template <class T>
Vector<T>::Vector()
{
	capacity=2;
	size=0;
	vec=new T[capacity];
}


template <class T>
Vector<T>::Vector(const Vector& v)
{
	size = v.size;
	capacity = v.capacity;
	vec = new T[size];
	
	for (int i = 0;i < size;++i)
		vec[i] = v.vec[i];
}

template <class T>
Vector<T>::~Vector()
{
	delete[] vec;
}

template <class T>
T& Vector<T>::operator[](int i)
{
	if (i < 0 || i >= size) {
		cout << "Bad Index---- ";
		return i;
	}
	else
		return vec[i];
}

template <class T>
const T& Vector<T>::operator[](int i) const
{
	if (i < 0 || i >= size) {
		cout << "Bad Index---- " << endl;
		return i;
	}
	else
		return vec[i];
}

template <class T>
 Vector<T>& Vector<T>::operator=(const Vector& v)
{
	if (this == &v)
		return *this;
	if (capacity < v.size) {
		capacity *= 2;
		vec = new T[capacity];
	}

	for (int i = 0;i < v.size;++i)
		vec[i] = v.vec[i];
	
	size = v.size;
	return *this;
}

template <class T>
void Vector<T>::push_back(const T& item)
{
	if( capacity && capacity == size)
	{
		capacity *= 2;
		T* p = vec;
		vec = new T[capacity];
		for (int i = 0;i < size;++i)
			vec[i] = p[i];
		delete p;
	}
	else if(!capacity) {
		cout << "Your vector's capacity and size are 0 => you can't push-back item !!!" << endl;
		return;
	}

	vec[size++] = item;
}

template <class T>
void Vector<T>::push_front(const T& item)
{
	if (capacity == size) {
		capacity *= 2;
		T* p = vec;
		vec = new T[capacity];
		vec[0] = item;
		for (int i = 1;i <= size;++i)
			vec[i] = p[i - 1];
		delete p;
	}
	else if (!capacity) {
		cout << "Your vector's capacity and size are 0 => you can't push-front item !!!" << endl;
		return;
	}
	else {
		for (int i = size;i != 0;--i)
			vec[i] = vec[i - 1];

		vec[0] = item;
	}
	
	++size;
}

template <class T>
void Vector<T>::pop_back()
{
	if (size)
		--size;
	else
		cout << "Your size is 0, you can't pop-back !!!" << endl;
}

template <class T>
void Vector<T>::pop_front()
{
	if (size) {
		for (int i = 1;i < size;++i)
			vec[i - 1] = vec[i];
		--size;
	}
	else
		cout << "Your size is 0, you can't pop-front !!!" << endl;
}

template <class T>
int Vector<T>::getSize()
{
	return size;
}

template <class T>
int Vector<T>::getCapacity()
{
	return capacity;
}






