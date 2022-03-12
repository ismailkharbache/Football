#include <unistd.h>
#include <stdio.h>
int main()
{
	int i = 0;
	char s[100];
	int count = 0;
	int countl = 0;
	int countm = 0;
	int countb = 0;
	scanf("%s",s);
	while(s[i])
	{
 
		if(s[i] == '1')
			count++;
		else if(count >= 7)
			countm = count;
		else if(s[i+1] == '0' || count < 7)
			count = 0;
		i++;
	}
	i = 0;
	while(s[i])
	{
		if(s[i] == '0')
			countb++;
		else if(countb >= 7)
			countl = countb;
		else if(s[i+1] == '1' || countb < 7)
			countb = 0;
		i++;
	}
	if(count + countb >= 7 || countm + countl >= 7 )
		printf("YES");
	else
		printf("NO");
}
