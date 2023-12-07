#include<stdio.h>
#include<math.h>
int a,c,eb,ek,ort,d,b,k,p,g;
main()
{
	printf("sayiyi gir..");scanf("%d",&a);
	eb=0; ek=9;b=a;
	while(a!=0) {
		c=a-int(a/10)*10;
		if(eb<c) eb=c;
		a=int(a/10);
		if(ek>c) ek=c;	    	
	}
	printf("en buyuk hane degeri=%d\n",eb);
	printf("en kucuk hane degeri=%d\n",ek);

	{	
	ort=int(ek+eb)/2;
	d=(ort*2);
		if(d==ek+eb) printf("ortalama %d\n",ort);
		else printf("ortalamaniz tam sayi degil\n");
	 }
		    k=0;
    while(b!=0) {
    	g=b-int(b/10)*10;
    	p=pow(10,k);
    	if(d==ek+eb)
    	if(ort==g) printf("%d ler hanesinde var\n",p);
    	b=int(b/10);
    	k++;
	}
    	}
	

