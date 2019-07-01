#include<cstdio>
int main() {
	int N[3];
	for (int i = 0; i < 3; i++)
		scanf("%d", &N[i]);
	if (N[0] >= N[1] && N[0] <= N[2] || N[0] >= N[2] && N[0] <= N[1])
		printf("%d", N[0]);
	else if (N[1] >= N[0] && N[1] <= N[2] || N[1] >= N[2] && N[1] <= N[0])
		printf("%d", N[1]);
	else
		printf("%d", N[2]);

	return 0;
}