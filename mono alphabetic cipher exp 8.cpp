#include <stdio.h>
#include <string.h>
int main() 
{
    char plaintext[100], ciphertext[100], keyword[100];
    char alphabet[] ="abcdefghijklmnopqrstuvwxyz";
    char cipher[26];
    int i, j, k = 0;
    printf("Enter the keyword: ");
    scanf("%s", keyword);
    printf("Enter the plaintext: ");
    scanf("%s", plaintext);
    for(i=0;i<strlen(keyword);i++) 
	{
        if(strchr(cipher,keyword[i])==NULL) 
		{ 
            cipher[k++]=keyword[i];
        }
    }
    for(i=0;i<26;i++) 
	{
        if(strchr(keyword,alphabet[i])==NULL) 
		{
            cipher[k++]=alphabet[i];
        }
    }
    for(i=0;i<strlen(plaintext);i++) 
	{
        ciphertext[i]=cipher[plaintext[i]-'a'];
    }
    ciphertext[i]='\0'; 
    printf("Encrypted text: %s\n",ciphertext);
    return 0;
}