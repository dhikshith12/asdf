#include<bits/stdc++.h>
const int N = 30;
#define gc (c = getchar())
int read() {
	char c;
	while (gc < '-')
		;
	if (c == '-') {
		int x = gc - '0';
		while (gc >= '0') x = x * 10 + c - '0';
		return -x;
	}
	int x = c - '0';
	while (gc >= '0') x = x * 10 + c - '0';
	return x;
} 
int f[32768];
int n;
 
int main() {
#ifdef local
	freopen("1.in", "r", stdin);
#endif
	memset(f, -1, sizeof(f));
	n = read();
	f[0] = 0;
	for (int i = 1; i <= 15; i++) {
		for (int j = 1; j < 32768; j++) {
			if (f[j] == -1 && (f[j * 2 % 32768] == i - 1 || f[(j + 1) % 32768] == i - 1)) {
				f[j] = i;
			}
		}
	}
	while (n--) {
		int x = read();
		printf("%d ", f[x]);
	}
	printf("\n");
}