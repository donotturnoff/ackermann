#include <stdio.h>

int ack(int m, int n) {
	if (m == 0) {
		return n+1;
	} else if ((m > 0) && (n == 0)) {
		return ack(m-1, 1);
	} else if ((m > 0) && (n > 0)) {
		return ack(m-1, ack(m, n-1));
	}
}

int main (int argc, char** argv) {
	if (argc-1 != 2) {
		printf("2 arguments required, %d supplied.", argc-1);
		return 1;
	} else {
		int i = atoi(argv[1]);
		int j = atoi(argv[2]);
		printf("ack(%d, %d) = %d\n", i, j, ack(i, j));
		return 0;
	}
}
