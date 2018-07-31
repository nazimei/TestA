#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

void printArr(int arr[], int len)
{
	for (int i=  0; i < len; i++)
	{
		printf("%d\n", arr[i]);
	}
}


void test01()
{
	int arr[5] = { 1,2,3,4,5 };
	/*int arr2[5] = {0};
	arr2 = arr;
	printf("%d\n", arr2[4]);*/
	//error  不能给数组赋值，因为数组名作为内存块的首地址，
	//改变后会导致数组不再指向内存块中的数据，数据丢失，严重则会导致内存不能读

	//一维数组名不是指针，几乎可以理解为是一个指针常量
	//除了两种特殊情况，	int arr[5] = { 1,2,3,4,5 };


	//1、对数组名称求所占字节 sizeof
	printf("%d\n", sizeof(arr));//此时并不是作为一个指针

	//2、对数组名 取地址 此时返回值为指向数组的指针
	//与指向首元素的指针区别在于步长，一个是整个数组，一个是一个元素
	printf("%d\n", &arr);
	printf("%d\n", &arr[0]);
	printf("%d\n", arr); //数组的地址就是首元素的地址

	int len = sizeof(arr) / sizeof(arr[0]);
	printArr(arr, len);

	int * p = arr;
	p = p + 1;
	printf("%d\n", p[0]);
	printf("%d\n", p[-1]);//或*(p-1),说明[]里能放负数
}

int main()
{
	test01();


	system("pause");
	return EXIT_SUCCESS;
}
