
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

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
    /* 
    return (L/4) + (L) + (L/4)*3;
    all equal case proving no ambiguity:
        first character is one bit (L/4) because a quarter of the characters * 1. 
        the next two (L/2) are two bits (L/2)*2 -> L. such that the leftmost bit != the first characters bit
        the last character is three bits, because there are only two bitset composed of two bits
        that does not have the first bit leading so we have to overflow to three,
        and so (L/4)*3 as a quarter of the characters are three bits
        expanding out the equation:
            (L/4) + L + (3L / 4)
        we get (4L / 4) + L = 2L
        because we know all bits to be equal, we could also find this by averaging the bits and knowing them to be equal
        (1 + 2 + 2 + 3) / 4 = 2
    */

    /* 
    any point they aren't all equal it'll always be optimal to do a 1 2 2 3
        first bit is leading - 0
        second bitset is - 10
        third - 11
        fourth - 110
    */
    int sum = 0;
    sum += a[0] * 1;
    sum += a[1] * 2;
    sum += a[2] * 2;
    sum += a[3] * 3;

    return sum;
}

int main(){
    
    int N;
    scanf("%d",&N);
    while(getchar()!='\n'); // consume up to newline (i loooooove reading raw stdin into a buffer)

    char* s = malloc(N+1);
    fgets(s,N+1, stdin);
    int out = watermelons(s, N);

    printf("%d", out);

    return 0;
}