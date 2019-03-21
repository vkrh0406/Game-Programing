#include "stdafx.h"
#include <vector>
#include <iostream>
#include <deque>
#include <list>
#include <map>
#include <set>
#include <string>
#include <stack>
#include <queue>
int main()
{
	std::stack<int, std::deque<int>> s;
	s.push(1);
	
	std::priority_queue<int, std::vector<int>, std::less<int>> sab;
	sab.push(rand());
	sab.push(rand());
	sab.push(rand());
	sab.pop();
	std::cout << sab.top();
	
/*
	std::string my_string;
	std::cin >> my_string;
	getline(std::cin, my_string, '\n');



	std::set<int> s1;
	int A[8] = { 2, 3, 5, 1, 24, 2,4,3 };
	for (int i = 0;i < 8;i++)
		s1.insert(A[i]);
	std::set<int> s2;
	int B[4] = { 24,34,5,1 };
	for (int i = 0;i < 4;i++)
		s1.insert(B[i]);

	std::set<int> s3;









	std::multimap<int, const char*> map;
	map.insert(std::pair<int, const char* const>(2, "two"));
	map.insert(std::pair<int, const char* const>(3, "three"));
	map.insert(std::pair<int, const char* const>(4, "four"));
	std::multimap<int, const char*> ::iterator mapiter = map.find(2);
	





	std::list<int> c;
	c.insert(c.begin(), 988, 99);
	std::list<int> ::iterator itter;
	for (itter = c.begin();itter != c.end();itter++)
	{
		std::cout << " " << *itter;
	}



	struct mystruct {
		int myint;
	};
	std::deque<mystruct> dede;
	mystruct m;
	m.myint = 5; dede.push_front(m);
	m.myint = 15; dede.push_back(m);
	m.myint = 115; dede.push_front(m);

	int size = 10;
	std::vector<int> vv;

	std::vector<int> ::iterator iter;
	for (int i = 0;i < 10;i++)
	{
		vv.push_back(rand() % 100);
	}
	std::vector<int> vvv(vv.begin(), vv.begin() + 3);
	

	for (iter = vv.begin();iter != vv.end();iter++)
	{
		std::cout << " " << *iter;
	}
	std::cout << std::endl;
	for (iter = vvv.begin();iter != vvv.end();iter++)
	{
		std::cout << " " << *iter;
	}

	
	std::sort(vv.begin(), vv.end());

	
*/

	return 0;
}