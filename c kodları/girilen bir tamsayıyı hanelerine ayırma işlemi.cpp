#include<stdio.h>
#include<math.h>
int a,b,c,s,p;
main()
{
	printf("sayiyi giriniz..");scanf("%d",&a);
	b=a; s=0;
	while(a!=0){
		a=int(a/10);
		s++;
	}
	while(b!=0){
		p=pow(10,s-1);
		c=int(b/p)*p;
		printf("%d\n",c);
		b=b-c;
		s--;
	}
}
