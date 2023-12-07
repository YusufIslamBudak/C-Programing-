#include<stdio.h>
#include<math.h>
#include<conio.h>
int a,b,c,p,tp,e,h;
char cv;
main()
{
	do{
	printf("sayiyi giriniz..\n");scanf("%d",&a);
	p=pow(10,2);
	b=int(a/p)-int(int(a/p)/10)*10;
	p=pow(10,4);
	c=int(a/p)-int(int(a/p)/10)*10;
	tp=b+c;
	p=pow(tp,0.5);
	if (tp==int(p)*int(p))
	 printf("%d tam kare\n",tp);
	else printf("%d tam kare degil\n",tp);
	printf("baska sayi hesaplayacak misiniz(e/h)\n"); cv=getch();
}
	while(cv=='e');
}