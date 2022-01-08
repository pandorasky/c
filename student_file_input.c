 #include<stdio.h>
 #include<stdlib.h>
 void main(){
     FILE*fin,*fout;
     int rollno,n,i;
     char name[30];
     fin = fopen("student.dat","w");
     if (fin==NULL)
     {
         printf("file cannot be open");
         exit(0);
     }
     printf("Enter the number of students");
     scanf("%d",&n);
     for(i=0;i<n;i++)
     {
         printf("\n students %d\n",i+1);
         printf("\nEnter the rollnumber:");
         scanf("%d",&rollno);
         printf("\nEnter the name ");
         scanf("%s",name);
         fprintf(fin,"%d %s\n",rollno,name);
     }
        fclose(fin);
        printf("\n student file created successfully");
        fin = fopen("student.dat","r");
        if(fin==NULL)
     {
         printf("\n file cannot be open\n");
         exit(0);
     }
         fout=fopen("output.dat","w");
         if(fout==NULL)
         {
             printf("\n file cannot be open\n");
             exit(0);
         }
         fprintf(fout,"\nrollno,name\n");
         while(fscanf(fin,"%d %s",&rollno,name)!=EOF);
         {
         fprintf(fout,"%d\t %s\n",rollno,name);
         }
             fclose(fout);
 }