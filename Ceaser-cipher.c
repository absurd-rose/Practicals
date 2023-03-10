#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
#define MAX_SIZE 100
int encrypt();
void decrypt();
void clrscr(void);
int main()
{
int c;
void clrscr();
/*printf("Enter your choice: \n 1. Encrypt\n 2. Decrypt\n");
scanf("%d",&c);
if(c==1)
{ 
encrypt();
}
else if(c==2)
{ 
decrypt();
}*/
encrypt();
decrypt();
getch();
}
int encrypt()
{
char plaintext[MAX_SIZE],ciphertext[MAX_SIZE];
int shift = 3, lettercode, len=0, i;
printf("Enter the string to be encrypted\n");
gets(plaintext);
len = strlen(plaintext);
for(i=0;i<len;i++)
{
plaintext[i] = tolower(plaintext[i]);
lettercode = (int)plaintext[i];
	if((lettercode>=97)&&(lettercode<=122))
	{
		lettercode+=shift;
		if(lettercode>122)
		lettercode-=26;
		ciphertext[i] = (char)lettercode;
	}
	else
	{
		ciphertext[i] = plaintext[i];
	}
}
ciphertext[i] = '\0';
printf("Cipher text: %s\n",ciphertext);
return 0;
}
void decrypt()
{
char plaintext[MAX_SIZE],ciphertext[MAX_SIZE];
int shift = 3, lettercode, len=0, i;
printf("Enter the string to be decrypted\n");
fflush(stdin);
gets(ciphertext);
len = strlen(ciphertext);
for(i=0;i<len;i++)
{
//ciphertext[i] = tolower(ciphertext[i]);
lettercode = (int)ciphertext[i];
	if((lettercode>=97)&&(lettercode<=122))
	{
		lettercode-=shift;
		if(lettercode<97)
		lettercode+=26;
		plaintext[i] = (char)lettercode;
	}
	else
	{
		plaintext[i] = ciphertext[i];
	}
}
plaintext[i] = '\0';
printf("Plain text: %s",plaintext);
}