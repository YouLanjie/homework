#include "src/head/head.h"                                   //引用头文件

int main()
{
	char a[5];
	char *p=a;                                      //我也不知道指针怎么减少使用内存
	char b[3]="a";

	cls();

	if(jjj>10)
	{
		printf("\t系统崩溃.........\n");         //防止循环过多
		sleep(1);
		cls();
		return 0;
	}

	printf("\n\t\t    作业管理系统\n\n");
	printf("\t1、查看作业\t\t2、编辑、添加作业\n");
	printf("\t3、删除作业\t\t4、查看帮助\n");
	printf("\t5、退出\n\t\t\t ");                   //主页。
	scanf("%s",p);
	printf("\n");
	if(strcmp(p,"1")==0)                           //解析您的选择。
	{
		cls();
		rbook();                               //看作业。
	}
	else if(strcmp(p,"2")==0)
	{
		cls();
		wbook();                               //写作业。
	}
	else if(strcmp(p,"3")==0)
	{
		cls();
		dbook();                               //删除作业。
	}
	else if(strcmp(p,"4")==0)
	{
		cls();
		help();                                //系统帮助。
	}
	else if(strcmp(p,"5")==0)
	{
		cls();
		printf("\n正在退出系统...\n");
		sleep(1);
	}
	else
	{
		cls();

		printf("\n\n\t      错误...系统崩溃...\n\n");

		printf("\t\t修复系统中...\n");

		strcpy(a,b);                           //清除内存中的内容

		sleep(1);

		cls();

		jjj++;

		main();                                //无限套娃。

		return 0;
	}
	cls();
	return 0;
}

void rbook()
{
	FILE *books;
	
	char b[39]="src/file/book/";
	char *p=b;
	char b2[25];
	char *p2=b2;
	
	char fbook[150];
	char *f=fbook;
	
	int c=0;
	
	printf("\t\t请选择要查看的作业：\n");
	system("ls src/file/book");
	printf("\n");
	scanf("%s",p2);
	strcat(p,p2);
	
	cls();
	
	if((books=fopen(p,"r"))==NULL)
	{
		printf("\t      错误，无法正常打开文件\n\n");
		sleep(1);
		cls();
		main();
		cls();
		return;
	}
	
	fread(f,size(p),10,books);
	printf("作业内容：\n%s\n\n\n",f);
	fclose(books);
	
	printf("按0回到首页：");
	scanf("%d",&c);
	
	cls();
	main();
}

void wbook()
{
	FILE *books;

	char fbook[150];
	char *f=fbook;
	
	char b[39]="src/file/book/";
	char *p=b;
	char b2[25];
	char *p2=b2;
	
	printf("\t\t请选择要编辑的作业\n");
	system("ls src/file/book");
	printf("\n");
	scanf("%s",p2);
	getchar();                                     //防止gets();函数失效。
	strcat(p,p2);
	
	cls();
	
	if((books=fopen(p,"w"))==NULL)                 //判断是否产生错误。
	{
		printf("\t       错误，无法正常打开文件\n\n");

		sleep(1);

		cls();
		main();                                //防止在发生错误时被强制退出。
		cls();
		return;                                //在系统发出错误警告前关闭程序(自欺欺人)。
	}
	
	printf("请输入：\n");
	while(strcmp(f,"*")!=0)
	{
		scanf("%s",f);
		if(strcmp(f,"*")==0)                   //以"*"符号判断是否结束输入。
		{
			printf("\n\n输入结束！\n");
		}
		else
		{
			fprintf(books,"%s\n",f);
		}
	}
	printf("请输入\"0\"以退出：");
	scanf("%s",f);
	fclose(books);
	
	cls();
	main();
}

void dbook()
{
	char filename[45];
	char file[50]="src/file/book/";
	
	printf("\t\t请选择要删除的文件：\n");
	system("ls src/file/book");
	printf("\n");
	scanf("%s",filename);
	strcat(file,filename);
	
	cls();
	
	if(remove(file)==0)
	{
		printf("\t\t      删除成功\n");
	}
	else
	{
		printf("\t\t      删除失败\n");
	}
	
	sleep(1);
	
	cls();
	main();
}

void help()
{
	FILE *fp;
	char fb[300];
	char *f=fb;
	
	int c=0;
	
	if((fp=fopen("src/file/help/help","rd"))==NULL)
	{
		printf("\t\t    无法打开文件！\n");
	}
	fread(f,300,1,fp);
	printf("%s\n\n",f);

	printf("按0回到首页：");
	scanf("%d",&c);

	cls();
	main();
}
