//
//  main.c
//  Power_of_a_number.c
//
//  Created by lakshiita kalyanasundaram on 28/07/24.
// with using pow function
/*
#include <stdio.h>
#include <math.h>
int main() {
    double base,exp,result;

    printf("Enter base: ",base);
    scanf("%lf",&base);
    printf("Enter Exp: ",exp);
    scanf("%lf",&exp);
    
    result=pow(base, exp);
   
    printf("%.2lf\n",result);
    return 0;
}
*/
//without using POW function:

 #include<stdio.h>
 
 int main(){
 
 double base,exp,result=1.0;
 printf("Enter base: ",base);
 scanf("%lf",&base);
 printf("Enter Exp: ",exp);
 scanf("%lf",&exp);
 while(exp!=0){
        result=result*base;
        --exp;
 
 }
 
 printf("ans : %.0lf\n",result);
 return 0;
 }


