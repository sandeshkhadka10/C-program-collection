#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *p;
    char r;
    int v=0, c=0;
    p=fopen("D:\\abc.txt","r");
    if(p==NULL)
    {
        printf("File does not exist");
        exit(0);
    }
    while(fscanf(p,"%c",&r)!=EOF)
    {
		if(r=='.')
		{
			goto flag;
		}
		printf("%c ",r);
	
         if((r>='a' && r<='z') || (r>='A' && r<='Z'))
         {
            if(r=='a' || r=='e' || r=='i' || r=='o'|| r=='u' || r=='A' || r=='E' || r=='I'|| r=='O'|| r=='U' )
            {
                v++;
            }
            else
            {
                c++;
            }
         
    	}
	}
    flag:
    printf("\nNumber of vowels: %d\n", v);
    printf("Number of consonants: %d\n", c);
    fclose(p);
    return 0;
}
