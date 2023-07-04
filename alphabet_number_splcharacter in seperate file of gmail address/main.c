#include <stdio.h>
#include <stdlib.h>
    //
int main()
{
  FILE *fptr;
  char ch[20]="hari123@gmail.com",al[20],spl[20];
  int i,x=0,y=0,z=0;
  char num[20];
  for(i=0;i<20;i++)
  {
      if(ch[i]>='a'&&ch[i]<='z')
      {
          al[x]=ch[i];
          x++;
      }
      else if(ch[i]>='0'&&ch[i]<='9')  //
      {
          num[y]=ch[i];
          y++;
      }
      else
      {
          spl[z]=ch[i];
          z++;
      }
  }

  fptr=fopen("fmain.txt","w");
  fputs(ch,fptr);
  fclose(fptr);

  fptr=fopen("alphabets.txt","w");
  fputs(al,fptr);
  fclose(fptr);

  fptr=fopen("special_chara.txt","w");
  fputs(spl,fptr);
  fclose(fptr);

  fptr=fopen("numbers.txt","w");
  fputs(num,fptr);
  fclose(fptr);


}
