#define _CRT_SECURE_NO_WARNINGS



#include <stdio.h>
#include <string.h>

//======================================================================================================================================
//数组详解
//一维数组的创建和初始化
//一维数组的使用
//一维数组在内存中的存储
//二维数组的创建和初始化
//二维数组的使用
//二维数组在内存中的存储
//数组作为函数参数
//数组的应用实例：三子棋
//数组的应用实例：扫雷游戏

//======================================================================================================================================

//int main()  //数组是一类相同类型的元素的集合，数组的 创建方式
//{
//
//	int arr1[10];//type_t  arr_name [const_n]-----> 元素类型  数组名 [常量]；
//	//初始化方式1 加大括号
//	int arr2[10] = {1,2,3};  //不完全初始化，剩下的元素默认初始化为0
//	 char arr3[] = {'a','b'};		// 不完全初始化数组里面放字符 
//	 
//	//初始化方式2
//	char arr4[] = "ab";  //把内容拆开存放  内存里是 a b /0  且 ""内放的是字符串
//	char arr5[]= "12346";	//当[]括号里面 不放数字时 必须初始化 系统自己判断大小
//	
//	printf("%d\n", sizeof(arr3));		// arr3[] = {'a','b'};  只有两个字符 所以就是 1*2 = 2
//	printf("%d\n", sizeof(arr4));		// arr4[] = "ab";  计算数组arr4的所占空间大小  char 的内存为 'a' , 'b' , '/0'  1 * 3 = 3
//	printf("%d\n", strlen(arr3));		// arr3[] = {'a','b'}; 因为找不到arr3中的  '/0'  所以输出的是随机值
//	printf("%d\n", strlen(arr4));		// arr4[] = "ab";计算字符串长度 (字符个数) 到'\0'停止 且不计算'\0'就是 'a','b','/0'就是2
//
//	return 0;
//}								//strlen 和 sizeof 并不是同一样东西
//								//strlen只能求字符长长度 -->属于库函数
//								//sizeof 计算变量，数组，类型得大小 单位是字节

//=======================================================================================================================================

//一维数组 的存储
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,0 };  //数组在内存中连续释放 从低到高释放
//	
//	return 0;
//}

//=========================================================================================================================================
//二维数组的创建和初始化
//
//int main()
//{
//	int    arr1[3][4];  //创建3行4列的数列
//	char   arr2[3][4];
//	double arr3[3][4];
//
//	//初始化
//	int arr4[3][4] = { {1,2},{4,5} }; //第一行放1，2，0    第二行放4，5，0
//	int arr5[][4] = { {1,2,3,4},{5,6,7} };  //一维的长度可以省略 二维的数组的长度不可以省略
//						                //二维数组的访问也是通过下标来访问的
//	int i, j;
//	//行列下标数都是从0开始的
//	for (i = 0; i <3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("&arr4[%d][%d] = %p\n", i, j ,& arr4[i][j]);  
//		}                  ////二维数组的内存创建也是连续的 int 类型占4个字节 故每个元素之间差4字节
//	}
//	return 0;
//}

//=====================================================================================================================================

//数组的函数参数
//冒泡排序 

//void bubble_sort(int arr[],int sz)     
//{
//	
//	int i = 0;
//	for (i=0;i<sz-1;i++)                 //控制外部循环数 10个数只循环9次
//	{
//		int j = 0;
//		int flag=1;
//		for (j = 0; j < sz - 1 - i; j++)  //控制内部循环数，第二次循环只循坏8次
//		{
//			int tmp;
//			if ( arr[j] > arr[j+1] )
//			{		tmp = arr[j];
//					arr[j] = arr[j + 1];
//					arr[j + 1] = tmp;	
//			}
//			flag = 0;
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//	
//}
//int main()
//{
//	int arr[] = { 9,8,6,7,5,14,3,2,1,0 };
//	//对数组进行排序，排成升序
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	bubble_sort(arr,sz);
//	int j = 0;
//	for (j = 0; j < sz; j++)
//	{
//		printf("%d  ", arr[j]);
//	}
//
//	return 0;
//}
//=======================================================================================================================

//数组名地址
int main()
{
	int arr[] = {1,2,3,4,5,6};

	printf("%p\n",   arr );			//打印结果都是一样的
	printf("%p\n",  &arr[0] );		//都是头元素的地址
	printf("%p\n",  &arr );			//代表整个数组的地址 
	printf("%p\n",  &arr );			//代表整个数组的地址 
	//但是
	printf("%p\n", arr+1);			//前两项的打印结果都是一样的 首地址+1
	printf("%p\n", &arr[0]+1);		//首地址加1

	printf("%p\n", &arr+1);         //是 4（int） * 元素个数

	return 0;
}















