#include <stdio.h>

int main(void)
{
	int height;
	int hash;
	int line;
	do
	{
		printf("Input height: ");
		scanf("%d", &height);
	} 
	while(height < 1 || height > 50);
		for (line = 0; line < height; line++)
	{
		for (hash = -1; hash < line; hash++)
		{
			printf("#");
		}
		printf("\n");
	}
	return 0;
}