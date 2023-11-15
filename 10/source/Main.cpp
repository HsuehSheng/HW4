/*
#include <stdio.h>
int addbyone(int &xref);
void main()
{
	int x = 100;
	int y = addbyone(x);
	printf("x=%d\n", x);
	system("pause");
}
*/
/*
int addbyone(int &xref)
{
	xref++;
	printf("xref=%d\n", xref);
	return xref;
}
*/
#include <iostream>

int addbyone(int &xref);

int main()
{
    int x = 100;
    int y = addbyone(x);
    std::cout << "x=" << x << std::endl;
    system("pause");
	return 0;
}

int addbyone(int &xref)
{
    xref++;
    std::cout << "xref=" << xref << std::endl;
    return xref;
}


