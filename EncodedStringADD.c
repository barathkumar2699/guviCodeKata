#include <stdio.h>
#include<string.h>

int main() {
	char a[1000],b[1000];
	scanf("%s",a);
	scanf("%s",b);
	for(int i=0;a[i];i++)
	{
	  //  printf("%c",(((a[i]-96 )+ (b[i]-96))%26+97)-1);
	    printf("%c",((a[i]+b[i]-96))%123+97);
	}
	return 0;
}
