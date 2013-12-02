#include <stdio.h>

#define SEARCHINGFORITEM 0
#define	SEARCHINGFORTITLE 1
#define PRINTINGTITLE 2

int main(int argc, char *argv[])
{
	int c;
	int state = SEARCHINGFORITEM;

	while ((c = getchar()) !=-1)
	{
		if (c == '<')
		{
			if (state == PRINTINGTITLE)
			{
				state = SEARCHINGFORITEM;
				putchar('\n');
			}
			else
			{
				c = getchar();
				if (c == 'i')
				{
					state = SEARCHINGFORTITLE;
					while ((c = getchar()) != '<')
					{
						//looking for next < character
					}
					
					if (c == '<')
					{
						c = getchar();
						if (c == 't')
						{
							int i;	
							i = 0;
							for(i = 0; i < 5; i++)
							{
								getchar();
							}
							state = PRINTINGTITLE;
						}
					}
				}
			}
		
		}
		else
		{
			if (state == PRINTINGTITLE)
			{
				putchar(c);
			}
		}
	}


}

