#include<stdio.h>
void cal(int len, int startDay){
    printf("Su Mo Tu We Th Fr Sa\n");
    char str[]="____________________";
    puts(str);
    int start=0,count=1;
    int i,j;
    for(i=1;count<=len;i++){
        for(j=1;j<=7;j++){
            if(i==1 && j==startDay){
                start=1;
            }
            if(count>len) {
                start=0;
                break;
            }
            if(start == 1){
                printf("%2d ",count);
                count++;
            }
            else printf("   ");
        }
        printf("\n");
    }
}
int main(){
    int sDay[]={7,3,4,7,2,5,7,3,6,1,4,6};
    int len[]={31,29,31,30,31,30,31,31,30,31,30,31};

    int y,n;
    scanf("%d %d",&y,&n);
    int p = y - 2000;
    if(y%4 == 0){
        p = p+ p/4;
    }
    else {
        p= p + p/4 + 1;
        len[1] = 28;
    }
        int i;
        for(i=0;i<12;i++){
                sDay[i]+=p;
                if(i>1 && len[1] == 28) sDay[i]--;
                if(sDay[i] > 7){
                        int q = sDay[i]/7;
                        sDay[i] = sDay[i] - 7*q;
                }
        }
        
    char mName[][10]={"January", "February","March","April","May","June","July","August","September","October","November", "December"};
    printf("   %s %d\n",mName[n-1],y);
    cal(len[n-1],sDay[n-1]);
    return 0;
}
