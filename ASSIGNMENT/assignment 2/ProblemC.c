#include<stdio.h>
 
char s[100001];
int count[26];
 
void add(int pos,int k,int *sum){
    int index;
    index = s[pos] - 'a';
    count[index]++;
    if(count[index] % k == 1) (*sum)++;
}
 
void del(int pos,int k,int *sum){
    int index;
    index = s[pos] - 'a';
    count[index]--;
    if(count[index] % k == 0) (*sum)--;
}
 
int search(int start,int k,int sum,int limit_sum){
    if(sum < limit_sum){
        if(start < 26) return start;
        return -1;
    }
    while(start < 26 && count[start] % k == 0) start++;
    if(start >= 26) return -1;
    return start;
}
 
void repair(int start,int k,int n,int *sum,int limit_sum){
    while(start < n){
        s[start] = search(0,k,*sum,limit_sum) + 'a';
        add(start,k,sum);
        start++;
    }
}
 
int main(){
    int t,n,k,i,sum,limit_sum,pos,flag;
    scanf("%d",&t);
    while(t--){
        scanf("%d%d",&n,&k);
        scanf(" %s",s);
        for(i = 0;i < 26;i++) count[i] = 0;
        if(n % k) printf("-1\n");
        else if(k != 1){
            sum = 0;
            limit_sum = n / k;
            flag = 0;
            for(i = 0;i < n;i++){
                add(i,k,&sum);
                if(sum > limit_sum){
                    pos = i;
                    del(pos,k,&sum);
                    flag = 1;
                    //printf("break:count[%d] = %d\n",s[pos] - 'a',count[s[pos] - 'a']);
                    break;
                }
            }
            if(flag){
                while(search(s[pos] - 'a' + 1,k,sum,limit_sum) == -1) del(--pos,k,&sum);
                s[pos] = search(s[pos] - 'a' + 1,k,sum,limit_sum) + 'a';
                add(pos,k,&sum);
                repair(pos + 1,k,n,&sum,limit_sum);
            }
            printf("%s\n",s);
        }
        else printf("%s\n",s);
    }
    return 0;
}