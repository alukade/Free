#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int* ptr;

	ptr = (int*) malloc(sizeof(int));
	if (ptr == NULL)
	{
		printf("分配内存失败！\n");
		exit(1);
	}
	printf("请输入一个整数：");
	scanf_s("%d", ptr);
	//free(ptr);这样的话内存已经被释放，会出错 
	printf("你输入的整数是%d", *ptr);
	free(ptr);

	return 0;

}