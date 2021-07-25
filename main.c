#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define CONF ".phirc"

char *curdir = NULL;
int tsz_cols = 80;
int tsz_rows = 25;

char *editor = NULL;

int main(int argc, char *argv[])
{
        editor = getenv("EDITOR");
        return 0;
}
