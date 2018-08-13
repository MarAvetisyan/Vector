#pragma once
#include <iostream>
using namespace std;

template <class T>
class Vector {
	public:
		explicit Vector(int);
		Vector();
		Vector(const Vector&);
		~Vector();
	
		int getSize();
		int getCapacity();

		T& operator[](int);
		const T& operator[](int) const;
		Vector& operator=(const Vector&);

		void push_back(const T&);
		void push_front(const T&);

		void pop_back();
		void pop_front();

	private:
		T* vec;
		int size;
		int capacity;
};