#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int* ptr;

	ptr = (int*) malloc(sizeof(int));
	if (ptr == NULL)
	{
		printf("�����ڴ�ʧ�ܣ�\n");
		exit(1);
	}
	printf("������һ��������");
	scanf_s("%d", ptr);
	//free(ptr);�����Ļ��ڴ��Ѿ����ͷţ������ 
	printf("�������������%d", *ptr);
	free(ptr);

	return 0;

}