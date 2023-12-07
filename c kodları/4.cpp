#include<stdio.h>
#include<math.h>
#include<conio.h>
char cv;
int a,b,c;
main()
{
	do
	{	
	printf("sayiyi giriniz..");scanf("%d",&a);
	b=int(sqrt(a));
	c=pow(b,2);
	if(a==c) printf("%d sayisi tamkare sayi\n",a); else printf("%d sayisi tamkare sayi degil\n",a);
	printf("baska sayi girilecek mi(e/h)\n");cv=getch();
}
    while(cv=='e');
}
