//
//  main.c
//  noofdigits.c
//
//  Created by lakshiita kalyanasundaram on 25/07/24.
//

#include <stdio.h>
int main()
{
    int n , count=0;
    printf("enter number : ",n);
    scanf("%d",&n);
    while(n!=0)
    {
        n=n/10;
        ++count;
    }
    printf("%d",count);
    return 0;
}
