#include <stdio.h>

int main () {
FILE *aa;
char ch;
char isim[100];
int numara=0;
int kelime=0,i;
int siralama=0;

printf("HELLO-Mehmet Cagri Aksoy-Encrypt Program\nEnter a file name:");
gets(isim);
aa = fopen(isim,"r");
if(aa){
while((ch=getc(aa)) !=EOF){
  
if(ch!=' ' && ch!='\n'){
++siralama; 
}
if(ch ==' ' || ch == '\n'){
++kelime;
}
if(isim[i]=='0'||isim[i]=='1'||isim[i]=='2'||isim[i]=='3'){
++numara;
}


}//whilenin sonu

if (siralama>0){
++kelime;

}
else
{
printf("failed to open file\n");
}
}
printf("Words: %d \n" ,kelime-1 );
printf("Characters: %d \n", siralama-1);
printf("Numbers: %d \n",numara);

}

