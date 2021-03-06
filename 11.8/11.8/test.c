#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<stdlib.h>
//int cmp_int(const void* e1,const void* e2)  //使用qsort进行排序
//{
//	return *(int*)e1 - *(int*)e2;
//}
//int main()
//{
//	int i = 0;
//	int arr[] = {2,1,3,4,5,6,7,8};
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	qsort(arr,sz,sizeof(arr[0]),cmp_int);
//	for(i = 0; i < sz; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	return 0;
//}

#include<stdio.h>
#include<stdlib.h>
struct Stu
{
	char name[20];
	int age;
};
//int cmp_int(const void* e1,const void* e2)  //排列数字是用户自己写的函数
//{
//	return *(int*)e1 - *(int*)e2;
//}
int cmp_name(const void* e1,const void* e2)//排列字符时用户自己写的函数
{
	return strcmp(((struct Stu*)e1)->name,((struct Stu*)e2)->name);
}
void Swap(char* e1, char* e2, int width)
{
	int i = 0;
	for(i = 0; i < width; i++)
	{
		char temp = *e1;
		*e1 = *e2;
		*e2 = temp;
		e1++;
		e2++;
	}
}
void* bubble_sort(void* base, int sz, int width,int(*cmp)(const void*e1,const void*e2))
{
	int i = 0;
	int j = 0;
	for(i = 0; i < sz-1; i++)
	{
		for(j = 0; j < sz-i-1; j++)
		{
			if(cmp((char* )base + j * width,(char*)base + (j + 1)*width) > 0)

				Swap((char* )base + j * width,(char*)base + (j + 1)*width, width);
		}
	}
}
int main()
{
	struct Stu s[3] = {{"zhangsan",20},{"lisi",15},{"wanwu",25}};
	int sz = sizeof(s)/sizeof(s[0]);
	bubble_sort(s, sz, sizeof(s[0]),cmp_name);
	return 0;
}
