#include<stdio.h>
int main()
{
   char a[200];
   char b[200];
   char c[200];
   char bug[100];
   int s;
   FILE *fp;
   printf("Press 1 to add\nPress 2 to show\n");
   scanf("%d",&s);
   if(s==1)
      goto level1;
   else
      goto level2;
   level1:
      gets(bug);
      printf("Name: ");
      gets(a);
      printf("Address: ");
      gets(b);
      printf("Comment: ");
      gets(c);
      fp=fopen("practice2.txt", "a+");
      fprintf(fp, "\n%s\t%s\t%s\t",a,b,c);
      fclose(fp);
      printf("\n1 for add\n2 for show\n");
      scanf("%d",&s);
      if(s==1)
         goto level1;
      else
         goto level2;
      level2:
         fp=fopen("practice2.txt", "r");
         if(fp==0)
            printf("\nEmpty\n");
         else
         {
            while(!feof(fp))
            {
               fscanf(fp, "\n%s\t%s\t%s\t",&a,&b,&c);
               printf("%s\n%s\n%s\n\n",a,b,c);
            }
         }
         fclose(fp);
         return 0;
}
