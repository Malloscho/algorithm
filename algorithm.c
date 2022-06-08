#include <stdio.h>
#include <stdlib.h>

int suche(int liste[], int e)
{
	for(int i=0; i<sizeof(liste); i++)
	{
			        
		if(liste[i] == e)
		{
		   return i;
	 	  }
         }
	 return -1;
			        
   }
int main(){
	int liste[5] = {1,3,5,7,9};
	int suche(liste[], 7);
	printf("%i\n", suche);


}
