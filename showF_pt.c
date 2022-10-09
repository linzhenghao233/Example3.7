/* show_pt.c -- 以两种方式显示float类型的值*/
#include <stdio.h>
int main(void) {
	float aboat = 32000.0;
	double abet = 2.14e9;
	long double dip = 5.32e-5;
	
	printf("%f can be written %e\n", aboat, aboat);
	// 下一行要求编辑器支持C99或其中的相关特性
	printf("And it's %a in hexadecimal, powers of 2 notation\n", aboat);//%a：十六进制浮点数
	printf("%f can be written %e\n", abet, abet);
	printf("%Lf can be written %Le\n", dip, dip);//%Lf：long double

	return 0;
}

//运行结果：
//32000.000000 can be written 3.200000e+04
//And it's 0x1.f400000000000p+14 in hexadecimal, powers of 2 notation
//2140000000.000000 can be written 2.140000e+09
//0.000053 can be written 5.320000e-05