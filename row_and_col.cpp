//給定一個數組，四個數，對其進行2048式求和。
//先不管傳值還是傳參了
#include<cstdio>
#include<cstring>
using namespace std;
void like2222(int[]); 

int main () {
    int row[4];
    int i,j;
    for (i=0;i<4;i++){
        scanf("%d", &row[i]);
    }
    like2222(row);
    return 0;
}

// 直接處理原數組（備選方案是創建一個臨時數組）
//該方案在 處理 0 2 2 8 時出現了未知bug
void like2222(int list[]){ 
    int i = 3,j;
    while(i>0){
        if (list[i] == list[i-1] && list[i-2] == list[i-3] ){ // 處理四個數字相同的情況
            list[3] = list[i] + list[i-1];
            list[2] = list[i-2] +  list[i-3];
            break;
        }
        else if (list[i] == list[i-1]){  // 相同則加總,並將下標左移兩位；
            list[i] = list[i] + list[i-1];
            i = i - 2;
        }
        else if (list[i] != list[i-1]){ // 不同則跳過，將下標左移一位
            i--;
        }
    }
    for (j=0;j<4;j++){
        printf("%d  ", list[j]);
    }
}

//還沒有解決歸零的問題。