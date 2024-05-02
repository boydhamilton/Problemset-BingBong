
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int cmp(const void* a, const void* b){
    return -((*(int*)a)-(*(int*)b));
}

int watermelons(char* s, int L){
    int a[] = {0,0,0,0}; // only need one dimension array, once it's sorted it already has the count of corresponding character
    
    for(int i=0; i<L; i++){
        switch (s[i])
        {
            case 'A':
                a[0]++;
                break;
            case 'B':
                a[1]++;
                break;
            case 'C':
                a[2]++;
                break;
            case 'D':
                a[3]++;
                break;
            default:
                break;
        }
    }
    qsort(a, 4, sizeof(int), cmp);

    if(a[0]==a[1] && a[1]==a[2] && a[2]==a[3])
        return 2*L;

    int sum = 0;
    sum += a[0] * 1;
    sum += a[1] * 2;
    sum += a[2] * 2;
    sum += a[3] * 3;

    return sum;
}

int main(){
    
    int N, M;
    scanf("%d %d",&N,&M);
    while(getchar()!='\n'); // consume up to newline (i loooooove reading raw stdin into a buffer)

    char* s = malloc(N+1);
    fgets(s,N+1, stdin);
    int out = watermelons(s, N);
    int chompstakenbywatermelons = (int)ceil((double)out/3.00);
    int chompsremaining = M-chompstakenbywatermelons;
    int chompstakenbydreaming = (int)ceil((double)chompsremaining/9.00);

    printf("%d", chompstakenbydreaming);

    return 0;
}