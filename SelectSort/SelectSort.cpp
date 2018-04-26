// SelectSort.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
	 
void selectSort(int a[],int len)
{
	
	for (int i = 0; i < len-1; i++)
	{
		int index=i;
		for (int j = i + 1; j < len ; j++)
		{
			if (a[index] > a[j])
				index = j;
		}
		int temp = a[i];
		a[i] = a[index];
		a[index]=temp;


	}
}
int main()
{
	int a[] = { 10,2,1,23,3,45,23,12,4,22 };
	selectSort(a,10);
	for (int i = 0; i < 10; i++)
		printf("%d ", a[i]);
    return 0;
}

