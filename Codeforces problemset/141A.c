#include<stdio.h>
#include<string.h>
char sort(char arr[],int ful){
       for (int i =0;i<ful;i++)
        {
            for (int j=i+1;j<ful;j++)
            {
                if (arr[i]>arr[j])
                {
                    char a= arr[i];
                    arr[i]=arr[j];
                    arr[j]=a;
                }
            }
        }
}
int main(){
    char name[200];
    char lastname[100];
    int f1name;
    char fullname[200];
    int i,j;

    scanf("%s",&name);
    scanf("%s",&lastname);
    scanf("%s",&fullname);

    int nl=strlen(name);
    int ll=strlen(lastname);
    int ful=strlen(fullname);

    int k=nl+ll;
    //printf("%d ",k);

    if(k==ful){

    for(i=0;lastname[i]!='\0';i++)  
    {
    	name[i+nl]=lastname[i];
	}
	name[i+nl]='\0';
    ful=strlen(name);
    for (int i =0;i<2;i++)
    {
        if (i==0){
            sort(name,ful);
        }
        else if(i==1){
            sort(fullname,ful);
        }
    }
if ((nl+ll)!=ful){
    printf("NO");
}else{
for (int i =0;i<ful;i++)
    {

        if (name[i]==fullname[i])
        {
            f1name=1;
        }
        else{
            f1name=0;
            break;
        }
    }
if (f1name)
    {
    printf("YES");
    }
else{
    printf("NO");
}}}

else{
    printf("NO");
}
    return 0;
    }