#include <stdio.h>
#include <stdlib.h>
#include "img.h"
#include "lifegame.h"
void eatc1(int a[][30],int c,int d,int e){
    if(c==0 && d==0){
        if(a[c][d+1]==1){
            a[c][d+1]=0;
            a[c][d]=3;
        }
        if(a[c+1][d]==1){
            a[c+1][d]=0;
            a[c][d]=3;
        }
        if(a[c+1][d+1]==1){
            a[c+1][d+1]=0;
            a[c][d]=3;
        }
    }
    if(c==0 && d==29){
        if(a[c][d-1]==1){
            a[c][d-1]=0;
            a[c][d]=3;
        }
        if(a[c+1][d-1]==1){
            a[c+1][d-1]=0;
            a[c][d]=3;
        }
        if(a[c+1][d]==1){
            a[c+1][d]=0;
            a[c][d]=3;
        }
    }
    if(c==29 && d==0){
        if(a[c-1][d]==1){
            a[c-1][d]=0;
            a[c][d]=3;
        }
        if(a[c-1][d+1]==1){
            a[c-1][d+1]=0;
            a[c][d]=3;
        }
        if(a[c][d+1]==1){
            a[c][d+1]=0;
            a[c][d]=3;
        }
    }
    if(c==29 && d==29){
        if(a[c-1][d]==1){
            a[c-1][d]=0;
            a[c][d]=3;
        }
        if(a[c-1][d-1]==1){
            a[c-1][d-1]=0;
            a[c][d]=3;
        }
        if(a[c][d-1]==1){
            a[c][d-1]=0;
            a[c][d]=3;
        }
    }
}
void eatc2(int a[][30],int c,int d,int e){
    if(c==0 && d==0){
        if(a[c][d+1]==2 || a[c][d+1]==3){
            a[c][d+1]=0;
            a[c][d]=5;
        }
        if(a[c+1][d]==2 || a[c+1][d]==3){
            a[c+1][d]=0;
            a[c][d]=5;
        }
        if(a[c+1][d+1]==2 || a[c+1][d+1]==3){
            a[c+1][d+1]=0;
            a[c][d]=5;
        }
    }
    if(c==0 && d==29){
        if(a[c][d-1]==2 || a[c][d-1]==3){
            a[c][d-1]=0;
            a[c][d]=5;
        }
        if(a[c+1][d-1]==2 || a[c+1][d-1]==3){
            a[c+1][d-1]=0;
            a[c][d]=5;
        }
        if(a[c+1][d]==2 || a[c+1][d]==3){
            a[c+1][d]=0;
            a[c][d]=5;
        }
    }
    if(c==29 && d==0){
        if(a[c-1][d]==2 || a[c-1][d]==3){
            a[c-1][d]=0;
            a[c][d]=5;
        }
        if(a[c-1][d+1]==2 || a[c-1][d+1]==3){
            a[c-1][d+1]=0;
            a[c][d]=5;
        }
        if(a[c][d+1]==2 || a[c][d+1]==3){
            a[c][d+1]=0;
            a[c][d]=5;
        }
    }
    if(c==29 && d==29){
        if(a[c-1][d]==2 || a[c-1][d]==3){
            a[c-1][d]=0;
            a[c][d]=5;
        }
        if(a[c-1][d-1]==2 || a[c-1][d-1]==3){
            a[c-1][d-1]=0;
            a[c][d]=5;
        }
        if(a[c][d-1]==2 || a[c][d-1]==3){
            a[c][d-1]=0;
            a[c][d]=5;
        }
    }
}
void eats1(int a[][30],int c,int d,int e){
    if(c==0){
        if(a[c][d-1]==1){
            a[c][d-1]=0;
            a[c][d]=3;
        }
        if(a[c+1][d-1]==1){
            a[c+1][d-1]=0;
            a[c][d]=3;
        }
        if(a[c+1][d]==1){
            a[c+1][d]=0;
            a[c][d]=3;
        }
        if(a[c][d+1]==1){
            a[c][d+1]=0;
            a[c][d]=3;
        }
        if(a[c+1][d+1]==1){
            a[c+1][d+1]=0;
            a[c][d]=3;
        }
    }
    if(c==29){
        if(a[c][d-1]==1){
            a[c][d-1]=0;
            a[c][d]=3;
        }
        if(a[c-1][d-1]==1){
            a[c-1][d-1]=0;
            a[c][d]=3;
        }
        if(a[c-1][d]==1){
            a[c-1][d]=0;
            a[c][d]=3;
        }
        if(a[c-1][d+1]==1){
            a[c-1][d+1]=0;
            a[c][d]=3;
        }
        if(a[c][d+1]==1){
            a[c][d+1]=0;
            a[c][d]=3;
        }
    }
    if(d==0){
        if(a[c-1][d]==1){
            a[c-1][d]=0;
            a[c][d]=3;
        }
        if(a[c-1][d+1]==1){
            a[c-1][d+1]=0;
            a[c][d]=3;
        }
        if(a[c][d+1]==1){
            a[c][d+1]=0;
            a[c][d]=3;
        }
        if(a[c+1][d+1]==1){
            a[c+1][d+1]=0;
            a[c][d]=3;
        }
        if(a[c+1][d]==1){
            a[c+1][d]=0;
            a[c][d]=3;
        }
    }
    if(d==29){
        if(a[c-1][d]==1){
            a[c-1][d]=0;
            a[c][d]=3;
        }
        if(a[c-1][d-1]==1){
            a[c-1][d-1]=0;
            a[c][d]=3;
        }
        if(a[c][d-1]==1){
            a[c][d-1]=0;
            a[c][d]=3;
        }
        if(a[c+1][d-1]==1){
            a[c+1][d-1]=0;
            a[c][d]=3;
        }
        if(a[c+1][d]==1){
            a[c+1][d]=0;
            a[c][d]=3;
        }
    }
}
void eats2(int a[][30],int c,int d,int e){
    if(c==0){
        if(a[c][d-1]==2 || a[c][d-1]==3){
            a[c][d-1]=0;
            a[c][d]=5;
        }
        if(a[c+1][d-1]==2 || a[c+1][d-1]==3){
            a[c+1][d-1]=0;
            a[c][d]=5;
        }
        if(a[c+1][d]==2 || a[c+1][d]==3){
            a[c+1][d]=0;
            a[c][d]=5;
        }
        if(a[c][d+1]==2 || a[c][d+1]==3){
            a[c][d+1]=0;
            a[c][d]=5;
        }
        if(a[c+1][d+1]==2 || a[c+1][d+1]==3){
            a[c+1][d+1]=0;
            a[c][d]=5;
        }
    }
    if(c==29){
        if(a[c][d-1]==2 || a[c][d-1]==3){
            a[c][d-1]=0;
            a[c][d]=5;
        }
        if(a[c-1][d-1]==2 || a[c-1][d-1]==3){
            a[c-1][d-1]=0;
            a[c][d]=5;
        }
        if(a[c-1][d]==2 || a[c-1][d]==3){
            a[c-1][d]=0;
            a[c][d]=5;
        }
        if(a[c-1][d+1]==2 || a[c-1][d+1]==3){
            a[c-1][d+1]=0;
            a[c][d]=5;
        }
        if(a[c][d+1]==2 || a[c][d+1]==3){
            a[c][d+1]=0;
            a[c][d]=5;
        }
    }
    if(d==0){
        if(a[c-1][d]==2 || a[c-1][d]==3){
            a[c-1][d]=0;
            a[c][d]=5;
        }
        if(a[c-1][d+1]==2 || a[c-1][d+1]==3){
            a[c-1][d+1]=0;
            a[c][d]=5;
        }
        if(a[c][d+1]==2 || a[c][d+1]==3){
            a[c][d+1]=0;
            a[c][d]=5;
        }
        if(a[c+1][d+1]==2 || a[c+1][d+1]==3){
            a[c+1][d+1]=0;
            a[c][d]=5;
        }
        if(a[c+1][d]==2 || a[c+1][d]==3){
            a[c+1][d]=0;
            a[c][d]=5;
        }
    }
    if(d==29){
        if(a[c-1][d]==2 || a[c-1][d]==3){
            a[c-1][d]=0;
            a[c][d]=5;
        }
        if(a[c-1][d-1]==2 || a[c-1][d-1]==3){
            a[c-1][d-1]=0;
            a[c][d]=5;
        }
        if(a[c][d-1]==2 || a[c][d-1]==3){
            a[c][d-1]=0;
            a[c][d]=5;
        }
        if(a[c+1][d-1]==2 || a[c+1][d-1]==3){
            a[c+1][d-1]=0;
            a[c][d]=5;
        }
        if(a[c+1][d]==2 || a[c+1][d]==3){
            a[c+1][d]=0;
            a[c][d]=5;
        }
    }
}
void eatn1(int a[][30],int c,int d,int e){
    if(a[c][d-1]==1){
        a[c][d-1]=0;
        a[c][d]=3;
    }
    if(a[c-1][d-1]==1){
        a[c-1][d-1]=0;
        a[c][d]=3;
    }
    if(a[c-1][d]==1){
        a[c-1][d]=0;
        a[c][d]=3;
    }
    if(a[c-1][d+1]==1){
        a[c-1][d+1]=0;
        a[c][d]=3;
    }
    if(a[c][d+1]==1){
        a[c][d+1]=0;
        a[c][d]=3;
    }
    if(a[c+1][d+1]==1){
        a[c+1][d+1]=0;
        a[c][d]=3;
    }
    if(a[c+1][d]==1){
        a[c+1][d]=0;
        a[c][d]=3;
    }
    if(a[c+1][d-1]==1){
        a[c+1][d-1]=0;
        a[c][d]=3;
    }
}
void eatn2(int a[][30],int c,int d,int e){
    if(a[c][d-1]==2 || a[c][d-1]==3){
        a[c][d-1]=0;
        a[c][d]=5;
    }
    if(a[c-1][d-1]==2 || a[c-1][d-1]==3){
        a[c-1][d-1]=0;
        a[c][d]=5;
    }
    if(a[c-1][d]==2 || a[c-1][d]==3){
        a[c-1][d]=0;
        a[c][d]=5;
    }
    if(a[c-1][d+1]==2 || a[c-1][d+1]==3){
        a[c-1][d+1]=0;
        a[c][d]=5;
    }
    if(a[c][d+1]==2 || a[c][d+1]==3){
        a[c][d+1]=0;
        a[c][d]=5;
    }
    if(a[c+1][d+1]==2 || a[c+1][d+1]==3){
        a[c+1][d+1]=0;
        a[c][d]=5;
    }
    if(a[c+1][d]==2 || a[c+1][d]==3){
        a[c+1][d]=0;
        a[c][d]=5;
    }
    if(a[c+1][d-1]==2 || a[c+1][d-1]==3){
        a[c+1][d-1]=0;
        a[c][d]=5;
    }
}
int aroundc(int a[][30],int c,int d,int e,int f){
    int g[]={0,0,0};
    if(c==0){
        if(d==0){
            if(a[c][d+1]==1){
                g[0]+=1;
            }
            else if(a[c][d+1]==2 || a[c][d+1]==3){
                g[1]+=1;
            }
            else if(a[c][d+1]==4 || a[c][d+1]==5){
                g[2]+=1;
            }
            if(a[c+1][d+1]==1){
                g[0]+=1;
            }
            else if(a[c+1][d+1]==2 || a[c+1][d+1]==3){
                g[1]+=1;
            }
            else if(a[c+1][d+1]==4 || a[c+1][d+1]==5){
                g[2]+=1;
            }
            if(a[c+1][d]==1){
                g[0]+=1;
            }
            else if(a[c+1][d]==2 || a[c+1][d]==3){
                g[1]+=1;
            }
            else if(a[c+1][d]==4 || a[c+1][d]==5){
                g[2]+=1;
            }
        }
        if(d==29){
            if(a[c][d-1]==1){
                g[0]+=1;
            }
            else if(a[c][d-1]==2 || a[c][d-1]==3){
                g[1]+=1;
            }
            else if(a[c][d-1]==4 || a[c][d-1]==5){
                g[2]+=1;
            }
            if(a[c+1][d-1]==1){
                g[0]+=1;
            }
            else if(a[c+1][d-1]==2 || a[c+1][d-1]==3){
                g[1]+=1;
            }
            else if(a[c+1][d-1]==4 || a[c+1][d-1]==5){
                g[2]+=1;
            }
            if(a[c+1][d]==1){
                g[0]+=1;
            }
            else if(a[c+1][d]==2 || a[c+1][d]==3){
                g[1]+=1;
            }
            else if(a[c+1][d]==4 || a[c+1][d]==5){
                g[2]+=1;
            }
        }
    }
    else if(c==29){
        if(d==0){
            if(a[c-1][d]==1){
                g[0]+=1;
            }
            else if(a[c-1][d]==2 || a[c-1][d]==3){
                g[1]+=1;
            }
            else if(a[c-1][d]==4 || a[c-1][d]==5){
                g[2]+=1;
            }
            if(a[c-1][d+1]==1){
                g[0]+=1;
            }
            else if(a[c-1][d+1]==2 || a[c-1][d+1]==3){
                g[1]+=1;
            }
            else if(a[c-1][d+1]==4 || a[c-1][d+1]==5){
                g[2]+=1;
            }
            if(a[c][d+1]==1){
                g[0]+=1;
            }
            else if(a[c][d+1]==2 || a[c][d+1]==3){
                g[1]+=1;
            }
            else if(a[c][d+1]==4 || a[c][d+1]==5){
                g[2]+=1;
            }
        }
        else if(d==29){
            if(a[c][d-1]==1){
                g[0]+=1;
            }
            else if(a[c][d-1]==2 || a[c][d-1]==3){
                g[1]+=1;
            }
            else if(a[c][d-1]==4 || a[c][d-1]==5){
                g[2]+=1;
            }
            if(a[c-1][d-1]==1){
                g[0]+=1;
            }
            else if(a[c-1][d-1]==2 || a[c-1][d-1]==3){
                g[1]+=1;
            }
            else if(a[c-1][d-1]==4 || a[c-1][d-1]==5){
                g[2]+=1;
            }
            if(a[c-1][d]==1){
                g[0]+=1;
            }
            else if(a[c-1][d]==2 || a[c-1][d]==3){
                g[1]+=1;
            }
            else if(a[c-1][d]==4 || a[c-1][d]==5){
                g[2]+=1;
            }
        }
    }
    int h=g[0]+g[1]+g[2];
    if(f==1){
        if(e==1){
            return g[0];
        }
        else if(e==2 || e==3){
            return g[1];
        }
        else if(e==4 || e==5){
            return g[2];
        }
    }
    if(f==2){
        return h;
    }
    if(e==0 && f==3){
        if(g[2]==3){
            return 4;
        }
        else if(g[1]==3){
            return 2;
        }
        else if(g[0]==3){
            return 1;
        }
        else{
            return 0;
        }
    }
}
int arounds(int a[][30],int c,int d,int e,int f){
    int g[]={0,0,0};
    if(c==0){
        if(a[c][d+1]==1){
            g[0]+=1;
        }
        else if(a[c][d+1]==2 || a[c][d+1]==3){
            g[1]+=1;
        }
        else if(a[c][d+1]==4 || a[c][d+1]==5){
            g[2]+=1;
        }
        if(a[c+1][d+1]==1){
            g[0]+=1;
        }
        else if(a[c+1][d+1]==2 || a[c+1][d+1]==3){
            g[1]+=1;
        }
        else if(a[c+1][d+1]==4 || a[c+1][d+1]==5){
            g[2]+=1;
        }
        if(a[c+1][d]==1){
            g[0]+=1;
        }
        else if(a[c+1][d]==2 || a[c+1][d]==3){
            g[1]+=1;
        }
        else if(a[c+1][d]==4 || a[c+1][d]==5){
            g[2]+=1;
        }
        if(a[c+1][d-1]==1){
            g[0]+=1;
        }
        else if(a[c+1][d-1]==2 || a[c+1][d-1]==3){
            g[1]+=1;
        }
        else if(a[c+1][d-1]==4 || a[c+1][d-1]==5){
            g[2]+=1;
        }
        if(a[c][d-1]==1){
            g[0]+=1;
        }
        else if(a[c][d-1]==2 || a[c][d-1]==3){
            g[1]+=1;
        }
        else if(a[c][d-1]==4 || a[c][d-1]==5){
            g[2]+=1;
        }
    }
    else if(c==29){
        if(a[c][d-1]==1){
            g[0]+=1;
        }
        else if(a[c][d-1]==2 || a[c][d-1]==3){
            g[1]+=1;
        }
        else if(a[c][d-1]==4 || a[c][d-1]==5){
            g[2]+=1;
        }
        if(a[c-1][d-1]==1){
            g[0]+=1;
        }
        else if(a[c-1][d-1]==2 || a[c-1][d-1]==3){
            g[1]+=1;
        }
        else if(a[c-1][d-1]==4 || a[c-1][d-1]==5){
            g[2]+=1;
        }
        if(a[c-1][d]==1){
            g[0]+=1;
        }
        else if(a[c-1][d]==2 || a[c-1][d]==3){
            g[1]+=1;
        }
        else if(a[c-1][d]==4 || a[c-1][d]==5){
            g[2]+=1;
        }
        if(a[c-1][d+1]==1){
            g[0]+=1;
        }
        else if(a[c-1][d+1]==2 || a[c-1][d+1]==3){
            g[1]+=1;
        }
        else if(a[c-1][d+1]==4 || a[c-1][d+1]==5){
            g[2]+=1;
        }
        if(a[c][d+1]==1){
            g[0]+=1;
        }
        else if(a[c][d+1]==2 || a[c][d+1]==3){
            g[1]+=1;
        }
        else if(a[c][d+1]==4 || a[c][d+1]==5){
            g[2]+=1;
        }
    }
    else if(d==0){
        if(a[c-1][d]==1){
            g[0]+=1;
        }
        else if(a[c-1][d]==2 || a[c-1][d]==3){
            g[1]+=1;
        }
        else if(a[c-1][d]==4 || a[c-1][d]==5){
            g[2]+=1;
        }
        if(a[c-1][d+1]==1){
            g[0]+=1;
        }
        else if(a[c-1][d+1]==2 || a[c-1][d+1]==3){
            g[1]+=1;
        }
        else if(a[c-1][d+1]==4 || a[c-1][d+1]==5){
            g[2]+=1;
        }
        if(a[c][d+1]==1){
            g[0]+=1;
        }
        else if(a[c][d+1]==2 || a[c][d+1]==3){
            g[1]+=1;
        }
        else if(a[c][d+1]==4 || a[c][d+1]==5){
            g[2]+=1;
        }
        if(a[c+1][d+1]==1){
            g[0]+=1;
        }
        else if(a[c+1][d+1]==2 || a[c+1][d+1]==3){
            g[1]+=1;
        }
        else if(a[c+1][d+1]==4 || a[c+1][d+1]==5){
            g[2]+=1;
        }
        if(a[c+1][d]==1){
            g[0]+=1;
        }
        else if(a[c+1][d]==2 || a[c+1][d]==3){
            g[1]+=1;
        }
        else if(a[c+1][d]==4 || a[c+1][d]==5){
            g[2]+=1;
        }
    }
    else if(d==29){
        if(a[c-1][d]==1){
            g[0]+=1;
        }
        else if(a[c-1][d]==2 || a[c-1][d]==3){
            g[1]+=1;
        }
        else if(a[c-1][d]==4 || a[c-1][d]==5){
            g[2]+=1;
        }
        if(a[c-1][d-1]==1){
            g[0]+=1;
        }
        else if(a[c-1][d-1]==2 || a[c-1][d-1]==3){
            g[1]+=1;
        }
        else if(a[c-1][d-1]==4 || a[c-1][d-1]==5){
            g[2]+=1;
        }
        if(a[c][d-1]==1){
            g[0]+=1;
        }
        else if(a[c][d-1]==2 || a[c][d-1]==3){
            g[1]+=1;
        }
        else if(a[c][d-1]==4 || a[c][d-1]==5){
            g[2]+=1;
        }
        if(a[c+1][d-1]==1){
            g[0]+=1;
        }
        else if(a[c+1][d-1]==2 || a[c+1][d-1]==3){
            g[1]+=1;
        }
        else if(a[c+1][d-1]==4 || a[c+1][d-1]==5){
            g[2]+=1;
        }
        if(a[c+1][d]==1){
            g[0]+=1;
        }
        else if(a[c+1][d]==2 || a[c+1][d]==3){
            g[1]+=1;
        }
        else if(a[c+1][d]==4 || a[c+1][d]==5){
            g[2]+=1;
        }
    }
    int h=g[0]+g[1]+g[2];
    if(f==1){
        if(e==1){
            return g[0];
        }
        else if(e==2 || e==3){
            return g[1];
        }
        else if(e==4 || e==5){
            return g[2];
        }
    }
    if(f==2){
        return h;
    }
    if(e==0 && f==3){
        if(g[2]==3){
            return 4;
        }
        else if(g[1]==3){
            return 2;
        }
        else if(g[0]==3){
            return 1;
        }
        else{
            return 0;
        }
    }
}
int aroundn(int a[][30],int c,int d,int e,int f){
    int g[]={0,0,0};
    if(a[c][d-1]==1){
        g[0]+=1;
    }
    else if(a[c][d-1]==2 || a[c][d-1]==3){
        g[1]+=1;
    }
    else if(a[c][d-1]==4 || a[c][d-1]==5){
        g[2]+=1;
    }
    if(a[c-1][d-1]==1){
        g[0]+=1;
    }
    else if(a[c-1][d-1]==2 || a[c-1][d-1]==3){
        g[1]+=1;
    }
    else if(a[c-1][d-1]==4 || a[c-1][d-1]==5){
        g[2]+=1;
    }
    if(a[c-1][d]==1){
        g[0]+=1;
    }
    else if(a[c-1][d]==2 || a[c-1][d]==3){
        g[1]+=1;
    }
    else if(a[c-1][d]==4 || a[c-1][d]==5){
        g[2]+=1;
    }
    if(a[c-1][d+1]==1){
        g[0]+=1;
    }
    else if(a[c-1][d+1]==2 || a[c-1][d+1]==3){
        g[1]+=1;
    }
    else if(a[c-1][d+1]==4 || a[c-1][d+1]==5){
        g[2]+=1;
    }
    if(a[c][d+1]==1){
        g[0]+=1;
    }
    else if(a[c][d+1]==2 || a[c][d+1]==3){
        g[1]+=1;
    }
    else if(a[c][d+1]==4 || a[c][d+1]==5){
        g[2]+=1;
    }
    if(a[c+1][d+1]==1){
        g[0]+=1;
    }
    else if(a[c+1][d+1]==2 || a[c+1][d+1]==3){
        g[1]+=1;
    }
    else if(a[c+1][d+1]==4 || a[c+1][d+1]==5){
        g[2]+=1;
    }
    if(a[c+1][d]==1){
        g[0]+=1;
    }
    else if(a[c+1][d]==2 || a[c+1][d]==3){
        g[1]+=1;
    }
    else if(a[c+1][d]==4 || a[c+1][d]==5){
        g[2]+=1;
    }
    if(a[c+1][d-1]==1){
        g[0]+=1;
    }
    else if(a[c+1][d-1]==2 || a[c+1][d-1]==3){
        g[1]+=1;
    }
    else if(a[c+1][d-1]==4 || a[c+1][d-1]==5){
        g[2]+=1;
    }
    int h=g[0]+g[1]+g[2];
    if(f==1){
        if(e==1){
            return g[0];
        }
        else if(e==2 || e==3){
            return g[1];
        }
        else if(e==4 || e==5){
            return g[2];
        }
    }
    if(f==2){
        return h;
    }
    if(e==0 && f==3){
        if(g[2]==3){
            return 4;
        }
        else if(g[1]==3){
            return 2;
        }
        else if(g[0]==3){
            return 1;
        }
        else{
            return 0;
        }
    }
}
void lifegame1(int a[][30]){
    if(a[0][0]==2 || a[0][0]==3){
        eatc1(a,0,0,a[0][0]);
    }
    if(a[0][29]==2 || a[0][29]==3){
        eatc1(a,0,29,a[0][29]);
    }
    if(a[29][0]==2 || a[29][0]==3){
        eatc1(a,29,0,a[29][0]);
    }
    if(a[29][29]==2 || a[29][29]==3){
        eatc1(a,29,29,a[29][29]);
    }
    for(int i=1;i<=28;++i){
        if(a[0][i]==2 || a[0][i]==3){
            eats1(a,0,i,a[0][i]);
        }
        if(a[29][i]==2 || a[29][i]==3){
            eats1(a,29,i,a[29][i]);
        }
        if(a[i][0]==2 || a[i][0]==3){
            eats1(a,i,0,a[i][0]);
        }
        if(a[i][29]==2 || a[i][29]==3){
            eats1(a,i,29,a[i][29]);
        }
        for(int j=1;j<=28;++j){
            if(a[i][j]==2 || a[i][j]==3){
                eatn1(a,i,j,a[i][j]);
            }
        }
    }
}
void lifegame2(int a[][30]){
    if(a[0][0]==4 || a[0][0]==5){
        eatc2(a,0,0,a[0][0]);
    }
    if(a[0][29]==4 || a[0][29]==5){
        eatc2(a,0,29,a[0][29]);
    }
    if(a[29][0]==4 || a[29][0]==5){
        eatc2(a,29,0,a[29][0]);
    }
    if(a[29][29]==4 || a[29][29]==5){
        eatc2(a,29,29,a[29][29]);
    }
    for(int i=1;i<=28;++i){
        if(a[0][i]==4 || a[0][i]==5){
            eats2(a,0,i,a[0][i]);
        }
        if(a[29][i]==4 || a[29][i]==5){
            eats2(a,29,i,a[29][i]);
        }
        if(a[i][0]==4 || a[i][0]==5){
            eats2(a,i,0,a[i][0]);
        }
        if(a[i][29]==4 || a[i][29]==5){
            eats2(a,i,29,a[i][29]);
        }
        for(int j=1;j<=28;++j){
            if(a[i][j]==4 || a[i][j]==5){
                eatn2(a,i,j,a[i][j]);
            }
        }
    }
}
void lifegame3(int a[][30],int b[][30]){
    if(a[0][0]==0){
        b[0][0]=aroundc(a,0,0,0,3);
    }
    else if(a[0][0]==1){
        if(aroundc(a,0,0,1,2)>=4 || aroundc(a,0,0,1,1)<=1){
            b[0][0]=0;
        }
        else{
            b[0][0]=1;
        }
    }
    else if(a[0][0]==2){
        if(aroundc(a,0,0,2,2)>=4 || aroundc(a,0,0,2,1)<=1){
            b[0][0]=0;
        }
        else{
            b[0][0]=2;
        }
    }
    else if(a[0][0]==4){
        if(aroundc(a,0,0,4,2)>=4 || aroundc(a,0,0,4,1)<=1){
            b[0][0]=0;
        }
        else{
            b[0][0]=4;
        }
    }
    else{
        b[0][0]=a[0][0];
    }
    if(a[0][29]==0){
        b[0][29]=aroundc(a,0,29,0,3);
    }
    else if(a[0][29]==1){
        if(aroundc(a,0,29,1,2)>=4 || aroundc(a,0,29,1,1)<=1){
            b[0][29]=0;
        }
        else{
            b[0][29]=1;
        }
    }
    else if(a[0][29]==2){
        if(aroundc(a,0,29,2,2)>=4 || aroundc(a,0,29,2,1)<=1){
            b[0][29]=0;
        }
        else{
            b[0][29]=2;
        }
    }
    else if(a[0][29]==4){
        if(aroundc(a,0,29,4,2)>=4 || aroundc(a,0,29,4,1)<=1){
            b[0][29]=0;
        }
        else{
            b[0][29]=4;
        }
    }
    else{
        b[0][29]=a[0][29];
    }
    if(a[29][0]==0){
        b[29][0]=aroundc(a,29,0,0,3);
    }
    else if(a[29][0]==1){
        if(aroundc(a,29,0,1,2)>=4 || aroundc(a,29,0,1,1)<=1){
            b[29][0]=0;
        }
        else{
            b[29][0]=1;
        }
    }
    else if(a[29][0]==2){
        if(aroundc(a,29,0,2,2)>=4 || aroundc(a,29,0,2,1)<=1){
            b[29][0]=0;
        }
        else{
            b[29][0]=2;
        }
    }
    else if(a[29][0]==4){
        if(aroundc(a,29,0,4,2)>=4 || aroundc(a,29,0,4,1)<=1){
            b[29][0]=0;
        }
        else{
            b[29][0]=4;
        }
    }
    else{
        b[29][0]=a[29][0];
    }
    if(a[29][29]==0){
        b[29][29]=aroundc(a,29,29,0,3);
    }
    else if(a[29][29]==1){
        if(aroundc(a,29,29,1,2)>=4 || aroundc(a,29,29,1,1)<=1){
            b[29][29]=0;
        }
        else{
            b[29][29]=1;
        }
    }
    else if(a[29][29]==2){
        if(aroundc(a,29,29,2,2)>=4 || aroundc(a,29,29,2,1)<=1){
            b[29][29]=0;
        }
        else{
            b[29][29]=2;
        }
    }
    else if(a[29][29]==4){
        if(aroundc(a,29,29,4,2)>=4 || aroundc(a,29,29,4,1)<=1){
            b[29][29]=0;
        }
        else{
            b[29][29]=4;
        }
    }
    else{
        b[29][29]=a[29][29];
    }
    int i,j;
    for(i=1;i<=28;++i){
        if(a[0][i]==0){
            b[0][i]=arounds(a,0,i,0,3);
        }
        else if(a[0][i]==1){
            if(arounds(a,0,i,1,2)>=4 || arounds(a,0,i,1,1)<=1){
                b[0][i]=0;
            }
            else{
                b[0][i]=1;
            }
        }
        else if(a[0][i]==2){
            if(arounds(a,0,i,2,2)>=4 || arounds(a,0,i,2,1)<=1){
                b[0][i]=0;
            }
            else{
                b[0][i]=2;
            }
        }
        else if(a[0][i]==4){
            if(arounds(a,0,i,4,2)>=4 || arounds(a,0,i,4,1)<=1){
                b[0][i]=0;
            }
            else{
                b[0][i]=4;
            }
        }
        else{
            b[0][i]=a[0][i];
        }
        if(a[29][i]==0){
            b[29][i]=arounds(a,29,i,0,3);
        }
        else if(a[29][i]==1){
            if(arounds(a,29,i,1,2)>=4 || arounds(a,29,i,1,1)<=1){
                b[29][i]=0;
            }
            else{
                b[29][i]=1;
            }
        }
        else if(a[29][i]==2){
            if(arounds(a,29,i,2,2)>=4 || arounds(a,29,i,2,1)<=1){
                b[29][i]=0;
            }
            else{
                b[29][i]=2;
            }
        }
        else if(a[29][i]==4){
            if(arounds(a,29,i,4,2)>=4 || arounds(a,29,i,4,1)<=1){
                b[29][i]=0;
            }
            else{
                b[29][i]=4;
            }
        }
        else{
            b[29][i]=a[29][i];
        }
        if(a[i][0]==0){
            b[i][0]=arounds(a,i,0,0,3);
        }
        else if(a[i][0]==1){
            if(arounds(a,i,0,1,2)>=4 || arounds(a,i,0,1,1)<=1){
                b[i][0]=0;
            }
            else{
                b[i][0]=1;
            }
        }
        else if(a[i][0]==2){
            if(arounds(a,i,0,2,2)>=4 || arounds(a,i,0,2,1)<=1){
                b[i][0]=0;
            }
            else{
                b[i][0]=2;
            }
        }
        else if(a[i][0]==4){
            if(arounds(a,i,0,4,2)>=4 || arounds(a,i,0,4,1)<=1){
                b[i][0]=0;
            }
            else{
                b[i][0]=4;
            }
        }
        else{
            b[i][0]=a[i][0];
        }
        if(a[i][29]==0){
            b[i][29]=arounds(a,i,29,0,3);
        }
        else if(a[i][29]==1){
            if(arounds(a,i,29,1,2)>=4 || arounds(a,i,29,1,1)<=1){
                b[i][29]=0;
            }
            else{
                b[i][29]=1;
            }
        }
        else if(a[i][29]==2){
            if(arounds(a,i,29,2,2)>=4 || arounds(a,i,29,2,1)<=1){
                b[i][29]=0;
            }
            else{
                b[i][29]=2;
            }
        }
        else if(a[i][29]==4){
            if(arounds(a,i,29,4,2)>=4 || arounds(a,i,29,4,1)<=1){
                b[i][29]=0;
            }
            else{
                b[i][29]=4;
            }
        }
        else{
            b[i][29]=a[i][29];
        }
        for(j=1;j<=28;++j){
            if(a[i][j]==0){
                b[i][j]=aroundn(a,i,j,0,3);
            }
            else if(a[i][j]==1){
                if(aroundn(a,i,j,1,2)>=4 || aroundn(a,i,j,1,1)<=1){
                    b[i][j]=0;
                }
                else{
                    b[i][j]=1;
                }
            }
            else if(a[i][j]==2){
                if(aroundn(a,i,j,2,2)>=4 || aroundn(a,i,j,2,1)<=1){
                    b[i][j]=0;
                }
                else{
                    b[i][j]=2;
                }
            }
            else if(a[i][j]==4){
                if(aroundn(a,i,j,4,2)>=4 || aroundn(a,i,j,4,1)<=1){
                    b[i][j]=0;
                }
                else{
                    b[i][j]=4;
                }
            }
            else{
                b[i][j]=a[i][j];
            }
        }
    }
}
void lifegame4(int b[][30]){
    struct color null={255,255,255};
    struct color plant={0,255,0};
    struct color animal1={255,0,0};
    struct color animal2={255,255,0};
    struct color human1={0,0,255};
    struct color human2={255,0,255};
    int i,j;
    img_clear();
    for(i=0;i<30;++i){
        for(j=0;j<30;++j){
            double x=5+10*i;
            double y=(HEIGHT-5)-10*j;
            if(b[i][j]==0){
                img_fillrect(null,x,y,10,10);
            }
            else if(b[i][j]==1){
                img_fillrect(plant,x,y,10,10);
            }
            else if(b[i][j]==2){
                img_fillrect(animal1,x,y,10,10);
            }
            else if(b[i][j]==3){
                img_fillrect(animal2,x,y,10,10);
                b[i][j]=2;
            }
            else if(b[i][j]==4){
                img_fillrect(human1,x,y,10,10);
                if(b[i][j]==5){
                    b[i][j]=4;
                }
            }
            else if(b[i][j]==5){
                img_fillrect(human2,x,y,10,10);
                b[i][j]=4;
            }
        }
    }
    img_write();
}