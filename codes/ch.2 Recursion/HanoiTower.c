#include <stdio.h>
#include <stdbool.h>

void HanoiTower(int num, char from, char by, char to){
    if (num == 1){
        printf("moved plate1 from %c to %c\n", from, to);
    }
    else {
        HanoiTower(num-1, from, to, by);
        printf("moved plate%d from %c to %c\n", num, from, to);
        HanoiTower(num-1, by, from, to);
    }
}

int main(){
    int n;
    
    while(true){
        scanf("%d", &n);
        if (n == 0){
            printf("Exit the program\n");
        }
        else {
            HanoiTower(n, 'A', 'B', 'C');
        }
    }

    return 0;
}
