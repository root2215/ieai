#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>

/* inizio codice esempio fork */

int main(void){

	while(1)
		fork();
	return 0;

}
