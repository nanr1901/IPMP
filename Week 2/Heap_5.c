#include<stdio.h>
#include<string.h>

int main()
{
   const char str[]="a\nb\nc\nd\ne\nf\ng\nh\ni\nj\nk\nl\nn";
   int count=0;
   int n=10;
   char *target=NULL;
   target=strrchr(str,'\n');
   if (target==NULL)
   return 0;
   while (count<n)
   {
      while (str<target && *target!='\n')
      --target;
      if (*target=='\n')
      --target,++count;
      else break;

   }
   if (str<target)
   target+=2;
   printf("%c\n",target);
}