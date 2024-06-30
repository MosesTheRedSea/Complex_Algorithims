#include <iostream>
#include <iomanip>
#include <vector>
#include "ArrayList.h"
using namespace std;

/*
	█▀▄▀█ █▀▀█ █▀▀ █▀▀ █▀▀ ─█▀▀█ █▀▀▄ █▀▀ █───█ █▀▀█ █── █──█ 
	█░█░█ █──█ ▀▀█ █▀▀ ▀▀█ ░█▄▄█ █──█ █▀▀ █▄█▄█ █──█ █── █──█ 
	█──░█ ▀▀▀▀ ▀▀▀ ▀▀▀ ▀▀▀ ░█─░█ ▀▀▀─ ▀▀▀ ─▀─▀─ ▀▀▀▀ ▀▀▀ ─▀▀▀
*/	

template<class T>
ArrayList<T>::ArrayList() {
	myElements = new T[12];
	myCapacity = 12;
	mySize = 0;
}

template<class T>
ArrayList<T>::ArrayList(int size) {
	myElements = new T[size];
	myCapacity = size;
	mySize = 0;
}

template<class T>
ArrayList<T>::ArrayList(const ArrayList<T> & list) {
	myElements = new T[list.getSize() * 2];
	myCapacity = list.getSize() * 2;
	mySize = list.getSize();
	for (int i = 0; i < list.getSize(); ++i) {
		myElements[i] = *list.get(i);
	}
}

int main() {

	// Create an Array of type int
	ArrayList<int> one;

	// Create an Array of type double
	ArrayList<double> two;

	// Create an Array of type bool
	ArrayList<bool> three;

	return 0;
}