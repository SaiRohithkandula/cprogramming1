#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n,s=0,s1=0,s2=0,i,j; 
    scanf("%d",&n);
    int a[n][n];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i==j)
            {
                s=s+a[i][j];
            }
            if(i==n-j-1)
            {
                s1=s1+a[i][j];
            }
        }
    }
s2=abs(s-s1);
    printf("%d",s2);
}



