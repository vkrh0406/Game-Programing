#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "Stack.h"

typedef Stack<int> INTSTACK;

template <class T>
T maximum(T a, T b)
{
	return a > b ? a : b;
}

int main()
{
	
	Stack<float> a(10);
	float p;
	a.push(10.1f);
	a.push(20.2f);
	a.push(30.3f);
	a.pop(p);
	a.pop(p);
	printf("%f ", p);
	a.pop(p);
	printf("%f ", p);


	return 0;
}