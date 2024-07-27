//  main.c
//  odd.c
//  Created by lakshiita kalyanasundaram on 25/07/24.


#include <stdio.h>
int main(){
    
int n;
printf("enter number : ",n);
scanf("%d",&n);
if(n%2==0){
    printf("%d is an even number",n);
}
else{
    printf("%d isn an odd number",n);
}
    return 0;
}
