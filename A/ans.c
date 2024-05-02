
#include<stdio.h>
#include<stdlib.h>

int watermelons(int* in, int s){
    int b = -1;
    int c =1, prev = in[0];
    for(int i=1; i<s; i++){
        if(in[i]>prev)
            c++;
        else{
            if(c>b)
                b=c;
            c=1;
        }
        prev = in[i];
    }

    if(b==-1 || b<c)
        return c;
    return b;
}

int main(){
    int N;
    scanf("%d",&N);

    int a[N];
    for(int i=0; i<N; i++)
        scanf("%d",&a[i]);

    int out = watermelons(a, N);
    char* wtrm = (out==1) ? "watermelon" : "watermelons";
    printf("Bing Bong collects %d %s.",out, wtrm);

    return 0;
}