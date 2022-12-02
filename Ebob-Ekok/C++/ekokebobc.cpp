#include <iostream>
#include <cstring>
#include <string>
using namespace std;
void Obeb(int a,int b){
	int i;
	int result=1;
	if(a<0||b<0){
		cout << "Please enter positive numbers!\n";
		return;
	}
	if(a>=b){
		for(i=2;i<=b;i++){
			if(a%i==0&&b%i==0){
				result=i;
			}
		}
		cout << "EBOB("<< b << ","<< a << ") = " <<result;	
	}else{
			for(i=2;i<=a;i++){
			if(a%i==0&&b%i==0){
				result=i;
			}
		}
			cout << "EBOB("<< a << ","<< b << ") = " <<result;	
	}
	return;
}
void Okek(int a,int b){
	int i,d;
	int result=1;
	if(a<0||b<0){
		cout << "Please enter positive numbers!\n";
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
		   cout << "EKOK("<< a << ","<< b << ") = " <<result;
	    }else{
	    	d=result;
		    result=(a*b)/d;
		   cout << "EKOK("<< b << ","<< a << ") = " <<result;
	    }	
	}else{
			for(i=2;i<=a;i++){
			if(a%i==0&&b%i==0){
				result*=i;
			}
		}
		if(result==1){
		result=a*b;
		cout << "EKOK("<< b << ","<< a << ") = " <<result;
	}else{
		d=result;
		result=(a*b)/d;
		cout << "EKOK("<< a << ","<< b << ") = " <<result;
	}		
	}
}
void Process(char *str,int a,int b){
	if(strcmp("EBOB",str)==0||strcmp("ebob",str)==0){
		Obeb(a,b);
	}else if(strcmp("EKOK",str)==0||strcmp("ekok",str)==0){
		Okek(a,b);
	}else{
		cout << "Invalid Process!\n";
	}
}
int main(){
	char str[5];
	int num1,num2;
	cout << "Please enter a number : ";
    cin >> num1;
	fflush(stdin);
	cout << "Please enter a number : ";
    cin >> num2;
	fflush(stdin);
	cout << "Please enter a process (EBOB / EKOK) : ";
    cin >> str;
	fflush(stdin);
	Process(str,num1,num2);
	return 0;
}