#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
////	//int a = 7 / 2;
////	//double a = 7.0 / 2;//除号两端只要有一个浮点数 就执行浮点数除法
////	//printf("%lf\n", a);
////	int a = 7 % 2;//取模时   %左右两边只能是整数
////	printf("%d\n", a);
//	return 0;
//}



//移位操作符
//    >> 右移操作符 
//有两种右移方式

//1 算术右移
// 右边丢弃，左边补原符号位

//2 逻辑右移
// 右边丢弃，左边补0


//    << 左移操作符
// 左边丢弃，右边补0




//>> 移动的是二进制位
//整数 -- 二进制表示形式有三种：原码，反码，补码

//内存中存储这个整数的时候，存储的是补码

//正整数 --原码，反码，补码相同
//负整数 --原码 ：直接写出的二进制序列就是原码 ；原码的符号位不变，其他的按位取反得到的就是反码 ；反码+1得到补码；
//int main()
//{
	//int a = 14;
	//14是正整数 - 4个字节 - 32bit位
	//00000000000000000000000000001110
	//最高位是符号位 0是正数 1是负数
	//int a = -1;
	//10000000000000000000000000000001 - 原码
	//11111111111111111111111111111110 - 反码
	//11111111111111111111111111111111 - 补码

	//int b = a >> 1;
	//printf("b=%d\n", b);
//	int a = 5;
//	int b = a << 1;
//	//00000000000000000000000000000101
//	printf("b = %d\n", b);
//	return 0;
//}

//
//int main()
//{
//	int a = 3;
//	int b = 5;
//	//int c=a&b;//按二进制位与
//	//00000000000000000000000000000011
//	//00000000000000000000000000000101
//	//00000000000000000000000000000001
//	//int c = a | b;//按二进制或
//	//00000000000000000000000000000011
//	//00000000000000000000000000000101
//	//00000000000000000000000000000111
//	


//	int c = a^b;//二进制按位异或
//	//异或：对应二进制位 相同为0，相异为1
//	//00000000000000000000000000000011
//	//00000000000000000000000000000101
//	//00000000000000000000000000000110
//	printf("c=%d\n", c);
//	return 0;
//}



//把两个数交换
//int main()
//{
//	int a = 3;
//	int b = 5;
//	//把a,b两个数交换
//	int c = 0;
//	printf("a=%d b=%d\n", a, b);
//	//c = a;
//	//a = b;
//	//b = c;
//
//	//a = a + b;
//	//b = a - b;
//	//a = a - b;
//	//这种方法可能会溢出
//
//
//	//不创建临时变量 交换两个数
//	a = a^b;
//	b = a^b;
//	a = a^b;
//	printf("a=%d b=%d\n", a, b);
//
//	return 0;
//}

//int main()
//{
//	//int a = 0;
//	//int arr[10] = { 0 };
//	////sizeof() --计算变量所占空间大小
//	//printf("%d\n", sizeof(a));
//	//printf("%d\n", sizeof(int));
//	//
//	//printf("%d\n", sizeof(arr));//计算的数组总大小，单位是字节
//	//printf("%d\n", sizeof(int[10]));
//
//	int a = 10;
//	short s = 5;
//	printf("%d\n", sizeof(s = a + 3));//sizeof内部放个表达式不会真的进行计算
//	printf("%d\n", s);
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	printf("%d\n", ~a);// ~按位取反
//	//00000000000000000000000000000000 - 补码
//	//11111111111111111111111111111111 - 补码
//	//11111111111111111111111111111110 - 反码
//	//10000000000000000000000000000001 - 原码
//	return 0;
//}
//
//int main()
//{
//	int a = 13;
//	a = a | (1 << 4);
//	printf("%d\n", a);
//	a &= (~(1 << 4));
//	printf("%d\n", a);
//	//00000000000000000000000000001101
//	//00000000000000000000000000010000  |    1<<4
//	//按位或一下
//	//00000000000000000000000000011101
//	//11111111111111111111111111101111  &
//	//按位与一下
//	//00000000000000000000000000001101   
//	return 0;
//}



//int main()
//{
//	int a = 10;
//	//int b = a++;//后置++ ，先使用 ，再++
//	//int b = ++a;//先++ ，后使用
//	//int b = a--;//先使用 ，后--
//	int b = --a;//先-- ，后使用
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}
//
//int main()
//{
//	int a = (int) 3.14;
//	printf("a=%d\n", a);
//	return 0;
//}

//void test1(int arr[])
//{
//	printf("%d\n",sizeof(arr));
//}
//void test2(char ch[])
//{
//	printf("%d\n", sizeof(ch));
//}
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(ch));
//	test1(arr);
//	test2(ch);
//	return 0;
//}

//
//int main()
//{
//	int i = 0, a = 1 ,b = 2 , c = 3 , d = 4;
//	//i = a++ && ++b && d++;
//	i=a++|| ++b || d++;
//	printf("a=%d\nb=%d\nc=%d\nd=%d\n", a, b, c, d);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = 0;
//	if (a > b)
//		max = a;
//	else
//		max = b;
//	
//	
//	//条件操作符 --三目操作符 
//	max = (a > b) ? (a) : (b);
//	return 0;
//}

//结构体
//复杂对象 -- 复杂类型
//学生 ： 名字+电话+性别+年龄

//struct Stu
//{
//	char name[20];
//	int age;
//	char tele[12];
//	char sex[5];
//
//};
//int main()
//{
//	struct Stu s = {"张三",20,"15236983698" ,"男"};
//	strcpy(s.name, "zhangsan");
//	printf("%s\n", s.name);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	int ret = (++i) + (++i) + (++i);
//	printf("ret = %d\n", ret);
//	return 0;
//}

//#include <stdio.h>
//int i;
//int main()
//{
//	i--;
//	if (i > sizeof(i))
//	{
//		printf(">\n");
//	}
//	else
//	{
//		printf("<\n");
//	}
//	return 0;
//}

#include <stdio.h>
int main()
{
	int a, b, c;
	a = 5;
	c = ++a;
	b = ++c, c++, ++a, a++;
	b += a++ + c;
	printf("a = %d b = %d c = %d\n:", a, b, c);
	return 0;
}