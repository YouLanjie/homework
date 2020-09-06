//调用函数库
#include <stdio.h>                                      //标库
#include <stdlib.h>                                     //system();srand();rand();
#include <string.h>                                     //strcap();strcy();strcpy();
#include <unistd.h>                                     //sleep();

//定义函数

//无返回值的
void rbook();
void wbook();
void dbook();
void help();
void cls()
{
	system("clear");
}


//有返回值的
float size(char *name)
{
	FILE *fp=fopen(name,"r");
	float fsize;
	if(!fp)
	{
		return -1;
	}
	fseek(fp,0L,2);
	fsize=ftell(fp);
	fclose(fp);
	
	return fsize;
}

//定义全局变量
int jjj=0;
