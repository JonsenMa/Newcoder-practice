#include <stdio.h>
#include <string.h>

int main()
{
	int l,num=0;
	char s[10];
	scanf("%s",s);
	l = strlen(s);
	printf("%d\n", l);
	for (int i = 0; i < l; ++i)
	{
		/* code */
		if (s[i]<0)
		{
			num++;
			printf("%d\t%d\n", i, num);
		}
	}
	printf("Total Chinese Character(s):\t%d\n", (num/2));
	return 0;
}
