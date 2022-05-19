#include<stdio.h>
void MaxSum(int array[],unsigned int length){
    if(NULL == array || length == 0) {
        return;
    }
    int Cursum = 0,Maxsum = 0;
    for (int i = 0; i < length; i++)
    {
        Cursum += array[i];  

        if (Cursum < 0){
            Cursum = 0; 
        }
        if(Cursum > Maxsum){
            Maxsum = Cursum; 
        }
    }
    if (Maxsum == 0){
        Maxsum = array[0];
        for (int i = 1; i < length; i++){
            if (array[i] > Maxsum){
                Maxsum = array[i];
            }
        }
    }
    printf("数组中最大的子数组之和为:%d\n", Maxsum);
}
int main(){
    int i, n;
    int array[50];
    printf("请输入数组元素的个数(不得小于2):\n");
    scanf("%d", &n);
    printf("请输入数组其中的1个元素并按下Enter键:\n");
    for (i = 0; i < n; i++){
        scanf("%d", &array[i]);
    }
    MaxSum(array, n);
}
