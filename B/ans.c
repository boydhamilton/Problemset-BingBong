
#include<stdlib.h>
#include<stdio.h>

float watermelons(int* in, int N, int A){
    int c =0,s= 0;
    for(int i=0; i<A; i++){
        int a, best = -10, ti; // dont want below 1
        for(int j=0; j<N; j++){ // start at 1, best is at 0
            a = in[j];
            if(a > best){
                best = a;
                ti = j;
            }
        }
        if(s+best > s){
            s+=best;
            c++;
        }
        in[ti] = -11;
    }
    
    return (float)s/(float)c;
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