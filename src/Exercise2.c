/*
2.	Write a program to receive integers, the program ends when user input 0. 
Print the minimum (different from 0) and maximum number (different from 0) among the received numbers.
Ex:
 ____________________________________
| Input: -3 5 -2 9 8 10 5 -1 0       |
| Output: Max: 10                    |
|         Min: -3                    |
|____________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	argc--;
	int testcase[argc],i;
	for(i=0; i<argc;i++){
		if(atoi(argv[i+1])==0){
			argc = i;
			break;
		}
		else
			testcase[i] = atoi(argv[i+1]);
	}
	//Your codes here
    int Maxvalue = testcase[0];
	int Minvalue = testcase[0];
	for (int i = 0; i < argc; i++){
		if(Maxvalue >= testcase[i]){
			Maxvalue = testcase[i];
		}
		if(Minvalue <= testcase[i]){
			Minvalue = testcase[i]; 
		}
	}
	printf("Max: %d", Maxvalue);
	printf("\nMin: %d", Minvalue);
	
	return 0;
}
