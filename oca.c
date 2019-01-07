# include <stdio.h>
# include <stdlib.h>
# include <time.h>
# define nmax 99
int dado ()
int casella ()
 int main ()
 {
     int i,j,x,n=5,y=0;
     int pos[n];
     int tiro[n];
     int speciali[n];

     for (i=0;i<n;i++)
     {
         srand(time(0));
         pos[i]=0;
         tiro[i]=0;
         speciali[i]=0;
     }
     while (y==0)
     {
         for (i=0;i<n;i++)
         {
             tiro[i]++;
             pos[i]=casella(pos[i]);
             if (pos[i]>=nmax)
             {
                 y=1;
             }
             if (pos[i]==13)
             {
                 speciali[i]++;
             }
             if (pos[i]==17)
             {
                 speciali[i]++;
             }
             if (pos[i]==33)
             {
                 speciali[i]++;
             }
             if (pos[i]==66)
             {
                 speciali[i]++;
             }
             if (pos[i]==88)
             {
                 i--;
                 speciali[i]++;
             }
             if (tiro[i]%5==0)
             {
                 printf("Il Giocatore %d si trova nella casella %d dopo %d tiri e è passato per %d caselle speciali\n",i,pos[i],tiro[i],speciali[i]);
             }
             if (pos[i]>nmax)
             {
                 printf("Il Giocatore %d ha vinto. Si trova nella casella %d, dopo  %d tiri e dopo esser passato su %d caselle speciali \n",i,pos[i],tiro[i],speciali[i]);
             }
         }
     }
     
 }
 int casella (int x)
     {
         if (x==13)
         {
             x=x;
         }
         if(x==17)
         {
             x=11;
         }
         if (x==33)
         {
             x=43;
         }
         if (x==66)
         {
             x=0;
         }
         
         x=x+dado();

         return x;
     }
      int dado()
     {
         int x;
         x=rand()%6+1;
         return x;
     }