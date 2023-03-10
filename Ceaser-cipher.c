#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
#define MAX_SIZE 100
void encrypt();
void decrypt();
void clrscr(void);
int main()
{
int c;
void clrscr();
do
{
	printf("Enter your choice: \n 1. Encrypt\n 2. Decrypt\n 3. Exit\n");
	scanf("%d",&c);
	switch (c)
	{
	case 1: encrypt();
		break;
	case 2: decrypt();
		break;
	}
} while (c != 3);
getch();
}
void encrypt()
{
char plaintext[MAX_SIZE],ciphertext[MAX_SIZE];
int shift = 3, lettercode, len=0, i;
printf("Enter the string to be encrypted\n");
fflush(stdin);
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
ciphertext[i] = tolower(ciphertext[i]);
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
printf("Plain text: %s \n",plaintext);
}