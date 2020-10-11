#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<unistd.h>
#include<iostream>
using namespace std;

	
	
int encrypt(char plaintext[50], char k[50], char vs[27][27]);
int decrypt (char k[50], char plaintext[50],char vs[27][27]);

int main () {
	char plaintext[50];
	char k[50]; //Key
	int i = 0;
	int array1[50];
    int array2[50];
	char quest[50];					//potato
									//hello everyone
	int length1;
	int length2;
			
	char vs[27][27] = {

    {' ','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'},
	{'a','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'},
	{'b','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','a'},
	{'c','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','a','b'},
	{'d','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','a','b','c'},
	{'e','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','a','b','c','d'},
	{'f','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','a','b','c','d','e'},
	{'g','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','a','b','c','d','e','f'},
	{'h','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','a','b','c','d','e','f','g'},
	{'i','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','a','b','c','d','e','f','g','h'},
	{'j','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','a','b','c','d','e','f','g','h'},
	{'k','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','a','b','c','d','e','f','g','h','i','j'},
	{'l','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','a','b','c','d','e','f','g','h','i','j','k'},
	{'m','m','n','o','p','q','r','s','t','u','v','w','x','y','z','a','b','c','d','e','f','g','h','i','j','k','l'},
	{'n','n','o','p','q','r','s','t','u','v','w','x','y','z','a','b','c','d','e','f','g','h','i','j','k','l','m'},
  	{'o','o','p','q','r','s','t','u','v','w','x','y','z','a','b','c','d','e','f','g','h','i','j','k','l','m','n'},
 	{'p','p','q','r','s','t','u','v','w','x','y','z','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o'},
  	{'q','q','r','s','t','u','v','w','x','y','z','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p'},
  	{'r','r','s','t','u','v','w','x','y','z','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q'},
  	{'s','s','t','u','v','w','x','y','z','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r'},
  	{'t','t','u','v','w','x','y','z','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s'},
  	{'u','u','v','w','x','y','z','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t'},
  	{'v','v','w','x','y','z','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u'},
  	{'w','w','x','y','z','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v'},
  	{'x','x','y','z','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w'},
  	{'y','y','z','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x'},
  	{'z','z','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y'},
  	};
	
	printf ("Enter key: ");
	fgets(k, 50, stdin);
	
	printf ("\nWould you like to encrypt or decrypt (Exit)? e/d/x ");
	fgets(quest, 50, stdin);
	
	
	
		
		while (quest[0] != 'e' || 'd' || 'x')
		{
		if (quest[0] == 'e') 
		{
			printf ("\nPlease enter a string to encrypt: "); 
			fgets(plaintext, 50, stdin); // Need to get it to be able to input multiple worded string
			encrypt(plaintext, k, vs);
			break;
			
		}
		else if (quest[0] == 'd') 
		{
			printf ("\nPlease enter a string to decyrpt: ");
			fgets(plaintext, 50, stdin);
			decrypt(plaintext, k, vs);
			break;

		}
		else if (quest[0] == 'x') 
		{
			printf ("\nGood bye!");
			return 0;
		}
		else 
		{
			printf ("\nWould you like to encrypt or decrypt (Exit)? e/d/x ");
			fgets(quest, 50, stdin);
		}
		
	}
	return 0;
}

//Encrypts any messagve inputed
	encrypt (char plaintext[50], char k[50], char vs[27][27])
	{ 
		//all variables used within the function to encrypt
		int i = 0;
		int h = 0;
		int j = 0;
		int r = 0;
		int t = 0;
		int q = 0;
		int e = 0;
		int array1[50];
	  	int array2[50];
		int length1 = (strlen(plaintext) -1); //mississippi h
		int length2 = (strlen(k) -1); //potato j
	
		//gets the x_axis of the cipher and ammends it to an array
		while (h < length1)
		{
			for (i = 0; i < 27; i++)
			{
				if (plaintext[h] == vs[i][0])
				{
					array1[h] = i;
					h++;
					i = 0;
				}
				if (plaintext[h] == ' ')
				{
					array1[h] = 0;
					h++;
					i = 0;
				}
				if (h == length1)
					break;
			}
		}
		printf("\n");

		//gets the y_axis and ammends it to an array
		while (j < length1)
		{
			for (r = 0; r < 27; r++)
			{
				if (k[e] == vs[0][r])
				{
					array2[j] = r;
					j++;
					e++;
					q++;
					r = 0;
				}
				if (q == length2)
				{
					e = 0;
					q = 0;
				}
				if (j == length1)
				{
					break;
				}
				if (plaintext[j] == ' ' || k[e] == ' ')
				{
					array2[j] = 0;
					j++;
					e++;
					q++;
					r = 0;
				}
			}
		}

		//combines both x and y arrays and inputs them as indexes to the vs to
		//combine to print the encrypted message
		
		
		for (t = 0; t < length1; t++)
		{
			printf("%c", vs[array1[t]][array2[t]]);
		}
		return 0;
	}


	decrypt (char plaintext[50], char k[50], char vs[27][27])
	{
		//all variables used within the function to encrypt
		int h = 0;
		int j = 0;
		int r = 0;
		int q = 0;
		int e = 0;
		int array1[50];
		int array2[50];
		int length1 = (strlen(plaintext) -1); //bwlsbghwipb h
		int length2 = (strlen(k) -1); //potato j

		//gets the y_axis and ammends it to an array
		while (j < length1)
		{
			for (r = 0; r < 27; r++)
			{
				if (k[e] == vs[0][r])
				{
					array2[j] = r;
					j++;
					e++;
					q++;
				}
				if (q == length2)
				{
					e = 0;
					q = 0;
				}
				if (plaintext[j] == ' ')
				{
					array2[j] = 0;
					j++;
					e++;
					q++;
				}
			}
		}

		//gets the x_axis of the cipher and ammends it to an array
		while (h < length1)
		{
			for (int i = 0; i < 27; i++)
			{
				if (h == length1)
				{
					break;
				}
				if (plaintext[h] == vs[i][array2[h]])
				{
					array1[h] = i;
					++h;
					i = 0;
				}
				if (plaintext[h] == ' ')
				{
					array1[h] = 0;
					++h;
					i = 0;
				}
			}
		}
		printf("\n");

		//combines both x and y arrays and inputs them as indexes to the vs to
		//combine to print the encrypted message
		for (int t = 0; t < length1; t++)
		{
			printf ("%c", vs[array1[t]][0]);
		}
		return 0;
	}
