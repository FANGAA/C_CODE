#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//#include<ctype.h>
//�ַ����ຯ��
//дһ�����룬���ַ����е�Сд��ĸת��д�������ַ�����
//int main()
//{
//	char arr[] = "I am a Student.";
//	int i = 0;
//	while (arr[i] != '\0')
//	{
//		if (islower(arr[i]))
//		{
//			arr[i] = arr[i] - 32;
//         (�����淽����arr[i]=toupper(arr[i]);)
//		}
//		i++;
//	}
//	printf("%s\n", arr);
//	return 0;
//
//}

//�ַ�ת������
//int main()
//{
//	char ch = toupper('a');
//	printf("%c\n", ch);
//
//	 ch = tolower('A');
//	printf("%c\n", ch);
//	return 0;
//}

//strlen����
//int main()
//{
//	//char arr[] = "abcdef";
//	/*char arr[] = { 'a','b','c'};
//	size_t len = strlen(arr);
//	printf("%zd\n", len);*/
//
//	if (strlen("abc") > strlen("abcdef") )
//	{
//		printf(">\n");
//	}
//	else
//	{
//		printf("<=\n");
//	}
//	return 0;
//}
#include<assert.h>
//1.������
//size_t my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str != NULL);
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

//2.ָ��-ָ��
//size_t my_strlen(const char* str)
//{
//	const char* start = str;
//	assert(str != NULL);
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return str - start;
//}

////3.�ݹ�ķ�ʽ
//size_t my_strlen(const char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	size_t len = my_strlen(arr);
//	printf("%zd\n", len);
//	return 0;
//}

#include<string.h>
//
//int main()
//{
//	char arr1[] = "hello world";
//	char arr2[20] = { 0 };
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	return 0;
//}


//ģ��ʵ��һ��strcpy


//char*  Ϊ����ʵ����ʽ���� ��voidҲ���ԣ���char*Ϊ�˹淶��
//strcpy�������ص���Ŀ��ռ����ʼ��ַ
//char* my_strcpy(char* dest,const char* src)
//{   
//	assert(dest && src);
//	char* ret = dest;
//	while (*src != '\0')
//	{
//		*dest = *src;
//		src++;
//		dest++;
//
//		//�����������ֱ��*dest++ = *src++
//	}
//	*dest = *src;//\0
//
//	return ret;//����Ŀ��ռ����ʼ��ַ
//}

//��2��
//char* my_strcpy(char* dest, const char* src)
//{
//	assert(dest && src);
//	char* ret = dest;
//	while (*dest++ = *src++)//������ȥ�ַ����жϱ��ʽ��ֵ����\0������ȥ���ж�Ϊ�٣�ֹͣѭ��
//	{
//		;
//	}
//	*dest = *src;//\0
//
//	return ret;//����Ŀ��ռ����ʼ��ַ
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[20] = { 0 };
//
//	char* pstr = my_strcpy(arr2, arr1);
//
//	printf("%s\n", arr2);
//	printf("%s\n", pstr);
//	printf("%s\n", my_strcpy(arr2, arr1));
//
//	//���ִ�ӡ������
//	return 0;
//}



//strcat


//Ҫ����Ŀ��ռ����ʼ��ַ
//char* my_strcat(char* dest,const char* src)
//{
//	char* ret = dest;
//	assert(dest && src);
//	//1.��Ŀ��ռ��\0
//	while (*dest != '\0')
//		dest++;
	//2.����
//	while (*dest++ = *src++)
//		;
//	return ret;
//
//}
// 0--����0
//��0��--�����ַ�0--ASCIIֵ��48
//��\0��--\ddd
//		  ddd��ʾ1~3��8��������
//		  \0--ASCIIֵ��0
//int main()
//{
//	char arr1[20] = "hello ";
//	char arr2[] = "world";
//	my_strcat(arr1,arr2);//�ַ���׷��
//	printf("%s\n", arr1);
//
//	return 0;
//}

//strcmp�����Ƚ��ַ���
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abq";
//	int ret = strcmp(arr1, arr2);
//	//printf("%d\n",ret);
//	if (ret > 0)
//	{
//		printf(">\n");
//	}
//	else
//	{
//		printf("<\n");
//	}
//	return 0;
//}

//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//		{
//			return 0;//0
//		}
//		str1++;
//		str2++;
//
//	}
//	//д��һ
//	 /*if (*str1 > *str2)
//		return 1;
//	else
//		return -1;*/
//
//	//д����return(*str1 - *str2);
//}
//int main()
//{
//	char arr1[] = "abq";
//	char arr2[] = "abcdef";
//	int ret = my_strcmp(arr1, arr2);
//	printf("%d\n",ret);
//	return 0;
//}






char* my_strcat(char* dest,const char* src)
{
	char* ret = dest;
	assert(dest && src);
	while (*dest != '\0')
		dest++;
	while (*dest++ = *src++)
		;
	return ret;

}
int main()
{
	char arr1[20] = "hello ";
	char arr2[] = "world";
	my_strcat(arr1,arr2);
	printf("%s\n", arr1);

	return 0;
}