
#include<stdlib.h>
#include<stdio.h>

int cmp(const void* a, const void* b){
    return -(*(int*)a)+(*(int*)b);
}

float watermelons(int* in, int N, int A){
    int s= 0;
    qsort(in, N, sizeof(int), cmp);
    for(int i=0; i<A; i++)
        s+=in[i];
    
    return (float)s/(float)A;
}

int main(){
    int N, A;
    scanf("%d\n%d",&N, &A);
    int* a = malloc(N*sizeof(int));

    for(int i=0; i<N; i++)
        scanf("%d",&a[i]);

    float out = watermelons(a, N, A);

    if(out>0)
        printf("%.3f",out);
    else
        printf(":(");

    return 0;
}
