// GamePrograming.cpp : 
//

#include "stdafx.h"
#include <stdlib.h>
#include <time.h>
typedef struct {
	int id;
	float score;
}student;
int compare(const void* p, const void* q)
{
	const student* ip = (const student*)p;
	const student* iq = (const student*)q;
	if (ip->score > iq->score) return 1;
	else if (ip->score < iq->score) return -1;
	else return 0;
}

int main()
{
	int n = 5;
	srand((unsigned)time(NULL));

	student * list = (student*)malloc(sizeof(student)*n);

	for (int i = 0;i < n;i++)
	{
		list[i].id = i;
		list[i].score = (float) (rand() % 100);
	}

	qsort(list, n, sizeof(student), compare);

	for (int i = 0;i < n;i++)
	{
		printf("%d %.2f \n", list[i].id, list[i].score);
	}
    return 0;
}

