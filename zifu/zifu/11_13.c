#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//#include<ctype.h>
//字符分类函数
//写一个代码，将字符串中的小写字母转大写，其他字符不变
//int main()
//{
//	char arr[] = "I am a Student.";
//	int i = 0;
//	while (arr[i] != '\0')
//	{
//		if (islower(arr[i]))
//		{
//			arr[i] = arr[i] - 32;
//         (按下面方法：arr[i]=toupper(arr[i]);)
//		}
//		i++;
//	}
//	printf("%s\n", arr);
//	return 0;
//
//}

//字符转换函数
//int main()
//{
//	char ch = toupper('a');
//	printf("%c\n", ch);
//
//	 ch = tolower('A');
//	printf("%c\n", ch);
//	return 0;
//}

//strlen函数
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
//1.计数器
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

//2.指针-指针
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

////3.递归的方式
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


//模拟实现一个strcpy


//char*  为的是实现链式访问 （void也可以，用char*为了规范）
//strcpy函数返回的是目标空间的起始地址
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
//		//上面三句可以直接*dest++ = *src++
//	}
//	*dest = *src;//\0
//
//	return ret;//返回目标空间的起始地址
//}

//（2）
//char* my_strcpy(char* dest, const char* src)
//{
//	assert(dest && src);
//	char* ret = dest;
//	while (*dest++ = *src++)//拷贝过去字符后，判断表达式的值，当\0拷贝过去后，判断为假，停止循环
//	{
//		;
//	}
//	*dest = *src;//\0
//
//	return ret;//返回目标空间的起始地址
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
//	//三种打印都可以
//	return 0;
//}



//strcat


//要返回目标空间的起始地址
//char* my_strcat(char* dest,const char* src)
//{
//	char* ret = dest;
//	assert(dest && src);
//	//1.找目标空间的\0
//	while (*dest != '\0')
//		dest++;
	//2.拷贝
//	while (*dest++ = *src++)
//		;
//	return ret;
//
//}
// 0--数字0
//‘0’--数字字符0--ASCII值是48
//‘\0’--\ddd
//		  ddd表示1~3个8进制数字
//		  \0--ASCII值是0
//int main()
//{
//	char arr1[20] = "hello ";
//	char arr2[] = "world";
//	my_strcat(arr1,arr2);//字符串追加
//	printf("%s\n", arr1);
//
//	return 0;
//}

//strcmp用来比较字符串
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
//	//写法一
//	 /*if (*str1 > *str2)
//		return 1;
//	else
//		return -1;*/
//
//	//写法二return(*str1 - *str2);
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