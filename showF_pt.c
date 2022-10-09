/* show_pt.c -- �����ַ�ʽ��ʾfloat���͵�ֵ*/
#include <stdio.h>
int main(void) {
	float aboat = 32000.0;
	double abet = 2.14e9;
	long double dip = 5.32e-5;
	
	printf("%f can be written %e\n", aboat, aboat);
	// ��һ��Ҫ��༭��֧��C99�����е��������
	printf("And it's %a in hexadecimal, powers of 2 notation\n", aboat);//%a��ʮ�����Ƹ�����
	printf("%f can be written %e\n", abet, abet);
	printf("%Lf can be written %Le\n", dip, dip);//%Lf��long double

	return 0;
}

//���н����
//32000.000000 can be written 3.200000e+04
//And it's 0x1.f400000000000p+14 in hexadecimal, powers of 2 notation
//2140000000.000000 can be written 2.140000e+09
//0.000053 can be written 5.320000e-05