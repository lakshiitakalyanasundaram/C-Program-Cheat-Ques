//
//  main.c
//  Reverse_Number.c
//
//  Created by lakshiita kalyanasundaram on 27/07/24.
//

#include <stdio.h>

int main(void) {
    int n,d;
    printf("enter number : ",n);
    scanf("%d",&n);
    
    int rev_num=0;
    
    while(n!=0)
    {
        d=n%10;
       
        rev_num = rev_num*10+d;
        n=n/10;
    }
    printf("reversed number : %d\n",rev_num);
    return 0;
}
