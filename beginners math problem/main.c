//
//  main.c
//  Palindrome.c
//
//  Created by lakshiita kalyanasundaram on 28/07/24.
//
#include<stdio.h>
int main()
{
    int n,d,rev=0,q;
    printf("enter number : ",n);
    scanf("%d",&n);
    q=n;
    while(n!=0){
        d=n%10;
        rev=rev*10+d;
        n=n/10;
    }
  
    if(q==rev)
        printf("given number is a palindrome\n");
        
    
    else
        printf("given number is not palindrome\n");
    
   
    return 0;
}
