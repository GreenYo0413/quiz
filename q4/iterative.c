#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int maxSubArray(int A[], int n);

int main(int argc, char *argv[])
{

    int array[9]= {-2,1,-3,4,-1,2,1,-5,4};
    printf("%d\n",maxSubArray(array,9));
    return 0;
}

int maxSubArray(int A[], int n)
{

    if(n==0)
        return 0;
    int max=A[0];
    int i,j;
    for(i=0; i<n; i++) {
        int localmax=A[i];
        int current=0;
        for(j=i; j<n; j++) {
            current+=A[j];
            if(localmax<current)
                localmax=current;
        }
        if(max<localmax)
            max=localmax;
    }
    return max;
}
