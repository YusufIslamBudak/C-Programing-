#include<stdio.h>
#include<math.h>
int a,b,c,k,p;
float tp,s,ort;
main()
{
	printf("sayiyi giriniz..\n");scanf("%d",&a);
	b=a; tp=0; s=0;
	while(a!=0){
		c=a-int(a/10)*10;
		tp=tp+c;
		s++;
		a=int(a/10);
	}
	ort=tp/s;
	if(ort==int(ort)){
		k=0;
		while(b!=0){
			c=b-int(b/10)*10;
			p=pow(10,k);
			if(ort==c)  printf("%d ler hanesinde var",p);
			b=int(b/10);
			k++;
		}
	}
	else printf("%2.1f ortalamasindan sayinin herhangi bir hanesinde yok",ort);
}