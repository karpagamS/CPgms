#include<stdio.h>

void stringrev(char* begin,	char*end)
{	
//	for(; str[i] ;i++);//strlength find out
	//for(; i < j ;str[i]^= str[j], str[j]^= str[i], str[i]^= str[j], i++,j--);//string reverse
	char temp;
	while(begin < end)
	{
		temp = *begin;
		*begin++ = *end;
		*end-- = temp;
	}
	
	//printf("%s",str);
}

void reverseWordsInStr(char * s)
{
	char* wordbegin,*temp;
	
	temp = wordbegin = s;
	printf("%p %p %p\n",temp,wordbegin,s);
	
	while(*temp)
	{
		temp++;
		if(!*temp)
		{
			stringrev(wordbegin,temp - 1);
		} else if(*temp == ' ')
		{
			stringrev(wordbegin,temp - 1);
			wordbegin = temp + 1;
		}
	}
//	stringrev(s,temp - 1);
}
int main()
{
	char s[] = "hai hello";
	
	
	reverseWordsInStr(s);
	
	//if(!s[sizeof(s)])
	printf("reversed each word in a str: %s",s);
	return 0;
}
