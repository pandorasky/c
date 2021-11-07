#include<stdio.h>
int main(){
    int w=841, h=1189, t;
     for(int i=0;i<9;i++){
         printf("\n A%d: %d * %d", i, w, h);
         t = h;
         h = w;
         w = t/2;
     }
     return 0;
}