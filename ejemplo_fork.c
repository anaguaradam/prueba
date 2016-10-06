#include <unitstd.h>
#include <sys/types.h>
#include <stdio.h>

int mani(int argc, char const *argv[])
{
	pid_t id_padre;
	pid_t id_actual;

	id_actual = getpid();

	id_padre = getppid();

	fprintf(stdout, "PID proceso actual: %d\n", id_actual );

	fprintf(stdout, "PID proceso padre:%d\n", id_padre);
	
	return 0;

}