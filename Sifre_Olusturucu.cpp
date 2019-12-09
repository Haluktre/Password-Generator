#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int rastgele1;
	int rastgele2;
	int z;
	int x;
	float y;
	int i;
	
	srand(time(NULL));
	
	rastgele1=23+rand()%76;
	printf("%d",rastgele1);
	
	rastgele2=23+rand()%76;
	printf("%d",rastgele2);
	
	x = rastgele1*rastgele1 + rastgele2*rastgele2;
		
	if(x > 9999){
		
	y = x/2;
	
	printf("\n%4.0f",y);
	printf("\nSifre Giriniz: ");
	scanf("%d",&z);
	if(y==z){
		printf("\nGiris yapildi");
	}
	else{
		printf("\nYanlis sifre");
	}
	}
	if(x < 9999){
		printf("\n%d",x);
		printf("\nSifre Giriniz: ");
		scanf("%d",&i);
	
	if(i==x){
		printf("\nGiris yapildi");
	}
	else{
			printf("\Sifre yanlis");	
	}
	}
}

	

