#include<stdio.h>
int main(){
    int  eng, maths ,sst,sci,hindi ,agg;
    float percentage;
    
    printf("enter your marks in english ",eng);
    scanf("%d",&eng);
    
    printf("enter your marks in maths",maths);
    scanf("%d",&maths);
    
    printf("enter your marks in sst",sst);
    scanf("%d",&sst);
    
    printf("enter your marks in science",sci);
    scanf("%d",&sci);
    
    printf("enter your marks in hindi",hindi);
    scanf("%d",&hindi);
    
    agg = eng+ maths+ sst + sci + hindi;
     percentage = agg/5;
    printf("aggerate marks of a student is %d\n",agg );
    printf("\nPercentage marks: %0.2f%", percentage);
    
}