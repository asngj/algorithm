#include <stdio.h>
#include <string.h>
fun(char s[],int *num);

fun(char s[],int *num)
{
	int i;
       *num=strlen(s);
	for(i=0;i < (*num);i++)
	if(s[i]==' ')
	{
		strcpy(s,s+i+1);
		i=0;	
		*num=strlen(s);
	}	

}

int main()
{
	char s[]="hello jweord! ashffhaj ajdkjj!";
	int n;
	fun(s,&n);
	printf("%d\n",n);
}
