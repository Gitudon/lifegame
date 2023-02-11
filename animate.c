#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "lifegame.h"
#include "template.h"
int main(void) {
    srand(time(NULL));
    int a[30][30]={0};
    int b[30][30]={0};
    int g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v;
    printf("Do you play with a template?\n1:yes\nother number:no\n> ");
    scanf("%d",&h);
    if(h==1){
        printf("Choose a template\n1:nebula(roop in 8)\n2:glider(long roop)\n3:space_ship(long roop)\n4:flying_machine(long roop)\n5:10_length_line(roop in 15)\n6:queen_bee(roop in 30)\n7:mix1\n8:mix2\nother number:random\n> ");
        scanf("%d",&g);
        settemplate(a,g);
    }
    else{
        printf("The number of initial conditions of 'plant'\n> ");
        scanf("%d",&l);
        for(i=1;i<=l;++i){
            printf("x> ");
            scanf("%d",&m);
            printf("y> ");
            scanf("%d",&n);
            a[m][n]=1;
        }
        printf("The number of initial conditions of 'animal'\n> ");
        scanf("%d",&o);
        for(i=1;i<=o;++i){
            printf("x> ");
            scanf("%d",&p);
            printf("y> ");
            scanf("%d",&q);
            a[p][q]=2;
        }
        printf("The number of initial conditions of 'human'\n> ");
        scanf("%d",&r);
        for(i=1;i<=r;++i){
            printf("x> ");
            scanf("%d",&s);
            printf("y> ");
            scanf("%d",&t);
            a[s][t]=4;
        }
    }
    printf("Times of launch\n> ");
    scanf("%d",&k);
    printf("Do you want to play with predation?\n1:yes\nother number:no\n> ");
    scanf("%d",&v);
    if(v==1){
        for(u=1;u<=k;++u){
            lifegame1(a);
            lifegame2(a);
            for(i=0;i<30;++i){
                for(j=0;j<30;++j){
                    b[i][j]=a[i][j];
                }
            }
            lifegame3(a,b);
            lifegame4(b);
            for(i=0;i<30;++i){
                for(j=0;j<30;++j){
                    a[i][j]=b[i][j];
                }
            }
        }
    }
    else{
        for(u=1;u<=k;++u){
            for(i=0;i<30;++i){
                for(j=0;j<30;++j){
                    b[i][j]=a[i][j];
                }
            }
            lifegame3(a,b);
            lifegame4(b);
            for(i=0;i<30;++i){
                for(j=0;j<30;++j){
                    a[i][j]=b[i][j];
                }
            }
        }
    }
    return 0;
}