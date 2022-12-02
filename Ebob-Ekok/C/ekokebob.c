#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void Obeb(int a,int b){
	int i;
	int result=1;
	if(a<0||b<0){
		printf("Please enter positive numbers!\n");
		return;
	}
	if(a>=b){
		for(i=2;i<=b;i++){
			if(a%i==0&&b%i==0){
				result=i;
			}
		}
		printf("EBOB(%d,%d) = %d\n",b,a,result);	
	}else{
			for(i=2;i<=a;i++){
			if(a%i==0&&b%i==0){
				result=i;
			}
		}
			printf("EBOB(%d,%d) = %d\n",a,b,result);	
	}
	return;
}
void Okek(int a,int b){
	int i,d;
	int result=1;
	if(a<0||b<0){
		printf("Please enter positive numbers!\n");
		return;
	}
	if(a>=b){
		for(i=2;i<=b;i++){ 
			if(a%i==0&&b%i==0){
				result=i;
			}
		}
	    if(result==1){
		   result=a*b;
		   printf("EKOK(%d,%d) = %d\n",b,a,result);
	    }else{
	    d=result;
	    result=(a*b)/d;
		printf("EKOK(%d,%d) = %d\n",b,a,result);
	    }	
	}else{
		for(i=2;i<=a;i++){
			if(a%i==0&&b%i==0){
				result=i;
			}
		}
		if(result==1){
		result=a*b;
		printf("EKOK(%d,%d) = %d\n",b,a,result);
	}else{
		d=result;
		result=(a*b)/d;
		printf("EKOK(%d,%d) = %d\n",b,a,result);
	}		
	}
}
void Process(char *str,int a,int b){
	if(strcmp("EBOB",str)==0||strcmp("ebob",str)==0){
		Obeb(a,b);
	}else if(strcmp("EKOK",str)==0||strcmp("ekok",str)==0){
		Okek(a,b);
	}else{
		printf("Invalid Process!\n");
	}
}
int main(){
	char str[5];
	int num1,num2;
	printf("Please enter a number : ");
	scanf("%d",&num1);
	fflush(stdin);
	printf("Please enter a number : ");
	scanf("%d",&num2);
	fflush(stdin);
	printf("Please enter a process : ");
	scanf("%s",str);
	fflush(stdin);
	Process(str,num1,num2);
	return 0;
}