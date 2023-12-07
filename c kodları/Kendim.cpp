#include<stdio.h>
#include<conio.h>
int a,b,c,d,e,eb;
char cv;
main()
{
	do
	{
	printf("1.sayiyi giriniz..");scanf("%d",&a);
	printf("2.sayiyi giriniz..");scanf("%d",&b);
	printf("3.sayiyi giriniz..");scanf("%d",&c);
	printf("4.sayiyi giriniz..");scanf("%d",&d);
	printf("5.sayiyi giriniz..");scanf("%d",&e);
	eb=a;
	if(eb<b) eb=b;
	if(eb<c) eb=c;
	if(eb<d) eb=d;
	if(eb<e) eb=e;
	printf("en buyuk sayi %d sayisi\n",eb);
	printf("devam etmek istiyor musunuz (e/h)\n");cv=getch();
    } 
    while(cv=='e'); if(cv=='h'); printf("sonuc");
}
