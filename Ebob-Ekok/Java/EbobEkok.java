import java.util.Scanner;
public class EbobEkok{
public static void Obeb(int a,int b){
	int i;
	int result=1;
	if(a<0||b<0){
		System.out.println("Please enter positive numbers!\n");
		return;
	}
	if(a>=b){
		for(i=2;i<=b;i++){
			if(a%i==0&&b%i==0){
				result=i;
			}
		}
		System.out.println("EBOB("+ b + "," + a +") = "+result);	
	}else{
			for(i=2;i<=a;i++){
			if(a%i==0&&b%i==0){
				result=i;
			}
		}
		System.out.println("EBOB("+ a + "," + b +") = "+result);		
	}
	return;
}
public static void Okek(int a,int b){
	int i,d;
	int result=1;
	if(a<0||b<0){
		System.out.println("Please enter positive numbers!\n");
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
		   System.out.println("EKOK("+ a + "," + b +") = "+result);
	    }else{
	    d=result;
	    result=(a*b)/d;
		   System.out.println("EKOK("+ b + "," + a +") = "+result);
	    }	
	}else{
		for(i=2;i<=a;i++){
			if(a%i==0&&b%i==0){
				result=i;
			}
		}
		if(result==1){
		result=a*b;
		 System.out.println("EKOK("+ b + "," + a +") = "+result);
	}else{
		d=result;
		result=(a*b)/d;
		 System.out.println("EKOK("+ a + "," + b +") = "+result);
	}		
	}
}
public static void Process(String str,int a,int b){
    String d="EBOB";
    String e="ebob";
    String f="ekok";
    String g="EKOK";
	if(d.compareTo(str)==0||e.compareTo(str)==0){
		Obeb(a,b);
	}else if(f.compareTo(str)==0||g.compareTo(str)==0){
		Okek(a,b);
	}else{
		System.out.println("Invalid Process!\n");
	}
}
public static void main(String[] args){
    Scanner input= new Scanner(System.in);
	int num1,num2;
	String str;
	System.out.println("Please enter a number : ");
	num1=input.nextInt();
	System.out.println("Please enter a number : ");
	num2=input.nextInt();
	System.out.println("Please enter a process (EBOB/EKOK) : ");
	str=input.next();
	
	Process(str,num1,num2);
}
}