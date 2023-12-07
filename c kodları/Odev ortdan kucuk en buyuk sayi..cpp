#include<stdio.h>
#include<math.h>
int a,b,c,d,k,s,p;
float tp,ort,eym;
main()
{
	printf("sayiyi gir..");scanf("%d",&a);
	b=a; d=a; tp=0; s=0;
	while(a!=0) {
		c=a-int(a/10)*10;
		tp+=c; s++;
		a=int(a/10);
	}
	ort=tp/s;
	printf("ort=%2.1f\n",ort);
	eym=10;
	while(b!=0) {
		c=b-int(b/10)*10;
		if(eym>abs(ort-c)){
		if(ort>c) eym=abs(ort-c);
		}
		b=int(b/10);
	}
	printf("ortalamadan kucuk en buyuk sayi %d\n",c);
	k=0;
	while(d!=0) {
		c=d-int(d/10)*10;
		p=pow(10,k);
		if(eym==abs(ort-c)){
		if(ort>c) printf("%d den %d ler hanesinde var\n",c,p);
	}
		d=int(d/10);
		k++;
	}
}

