#include <stdio.h>
int sort(int ){
    char s;
    char a[100];
    scanf("%s",&s);
    int size= sizeof(arr);
    printf("%d",size);
    for (int i =0;i<size;i++){
        printf("%c",arr);
    }
}
int main()
{
	char s;
	char a[100];
	scanf("%s",&s);
	int j = 0;
	for (int i = 0;i < sizeof(s);i++)
	{
		if (s[i] != '+')
		{
			a[j] = s[i];
			j++;
		}
	}
	sort(a, a + j);
	for (int i = 0;i < j;i++)
	{
		if (i == j - 1) cout << a[i] << endl;
		else cout << a[i] << "+";
	}
	return 0;
}