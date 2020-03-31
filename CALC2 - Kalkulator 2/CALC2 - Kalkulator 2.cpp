#include<iostream>
#include<string>
using namespace std;
int main()
{
	int tab[10], rej1, rej2, number, where;
	char operation; 
	while (operation = getchar()) {
		if (operation == EOF) {
			break;
		}
		switch (operation)
		{
		case 'z':
			scanf("%d %d", &where, &number);
			tab[where] = number;
			break;
		case '+':
			scanf("%d %d", &rej1, &rej2);
			printf("%d\n", tab[rej1] + tab[rej2]);
			break;
		case'-':
			scanf("%d %d", &rej1, &rej2);
			printf("%d\n", tab[rej1] - tab[rej2]);
			break;
		case'/':
			scanf("%d %d", &rej1, &rej2);
			printf("%d\n", tab[rej1] / tab[rej2]);
			break;
		case'*':
			scanf("%d %d", &rej1, &rej2);
			printf("%d\n", tab[rej1] * tab[rej2]);
			break;
		case '%':
			scanf("%d %d", &rej1, &rej2);
			printf("%d\n", tab[rej1] % tab[rej2]);
			break;
		default:
			break;
		}
	}
	return 0;
}
