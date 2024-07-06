#include <stdio.h>
#include <string.h>

int main() {
	int n;
	char* fruit[4] = { "STRAWBERRY","BANANA","LIME",
	"PLUM" };
	int x;
	int sum_strawberry = 0;
	int sum_banana = 0;
	int sum_lime = 0;
	int sum_plum = 0;
	char name[20];

	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%s %d", name, &x);
		if (strcmp(name, fruit[0]) == 0) {
			sum_strawberry += x;
		}
		else if (strcmp(name, fruit[1]) == 0) {
			sum_banana += x;
		}
		else if (strcmp(name, fruit[2]) == 0) {
			sum_lime += x;
		}
		else if (strcmp(name, fruit[3]) == 0) {
			sum_plum += x;
		}
	}

	if (sum_strawberry == 5 || sum_banana == 5 || 
		sum_lime == 5 || sum_plum == 5) {
		printf("YES");
	}
	else
		printf("NO");

	return 0;
}