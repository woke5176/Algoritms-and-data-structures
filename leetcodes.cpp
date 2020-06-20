#include<string.h>
#include<stdlib.h> 
#include<stdio.h> 
#define NO_OF_CHARS 256 

int *count1(char *str) 
{ 
int *count = (int *)calloc(sizeof(int), NO_OF_CHARS); 
int i; 
for (i = 0; *(str+i); i++) 
	count[*(str+i)]++; 
return count; 
} 


int firstNonRepeating(char *str) 
{ 
int *count = count1(str); 
int index = -1, i; 
int flag=1;

for (i = 0; *(str+i); i++) 
{ 
	if (count[*(str+i)] == 1) 
	{ 
	index = i; 
	flag--;
	break; 
	} 
} 
	
free(count);
return index; 
if(flag==1){
	return -1;
}
} 
int main() 
{ 
 string s;
 getline(cin,s);
cout<<firstNonRepeating(char *str) ;

} 

