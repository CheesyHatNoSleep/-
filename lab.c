#include "laba.h"

float foo(float S, int t,float u){
    return (S/t - u);
}

void laba1()
{
    float V1,u , S;
    int t;
    printf("V2 = ");
    scanf("%f", &u);
    printf("t = ");
    scanf("%d", &t);
    printf("S = ");
    scanf("%f", &S);
    V1 = S/t;
    //printf("%f\n", V1);
    printf("%f\n",foo(S,t,u));
}


void laba2(){
    float x, ans, X;
    int n, i, m;
    printf("n=");
    scanf("%d", &n);
    printf("x=");
    scanf("%f", &x);
    ans = 0;
    X = 1;
    i = 1;
    m = -1;
    //while(n != 1){
        //m = m*(-1);
        //X *= x;
        //i++;
        //ans += X/i*m;
        //n-- ;
    //}
    for (;n!=0;n--){
        m = m*(-1);
        ans += X/i*m; 
        X *= x;
        i++;
    }
    printf ("%f\n", ans);
}



void laba3(void){
    int c , countr , ans, a, N;
        scanf("%d", &N);
    //N = 3;
    ans = 0;
    countr = 0;
    while( (c = getchar()) != '\n' ){
        if( c != ' ' && c != '.' && c != ',' ){
            countr ++ ;}
        
        else{
            if (countr > N){
                //printf ("%d\n", countr);
                ans ++;}
                //printf("%d\n", ans);
            countr = 0;}}
    if (countr > N) {
        ans++;}
    printf("%d\n",ans);
    }
    


void laba4(void){
    char c , C;
    scanf("%c", &C);
    printf("%c", C);
    while( (c = getchar()) != '\n' ){
        if(C == ' ' && c == ' '){
                C = c;}
        
        else{
            printf("%c", c);
            C = c;
        }
    }
    printf("\n");
}
