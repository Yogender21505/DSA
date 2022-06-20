#include <stdio.h>
#include <stdlib.h>
int numberOfTimes(int array[] , int n) {
    int flag = 0;
    int sizeCounter = 0;
	int ans=0;
    while (1){
        for (int i = 0; i < n-1; ++i) {
            if (array[i]<= array[i+1]){
                sizeCounter++;
                array[sizeCounter] = array[i+1];
            } else{
                flag = 1;
				ans++;
            }
        }
        if (flag == 0)
            return ans;
        flag = 0;
        n = (sizeCounter+1);
        sizeCounter = 0;
    }
}
int main (){
	int n;
	scanf("%d",&n);
	int arr[n];
	for (int i =0; i <n; i++){
        scanf("%d",&arr[i]);
    }
	printf("%d",numberOfTimes(arr,n));
}