#include <stdio.h>

int main(){
    FILE* fp_w;
    FILE* fp_r;
    fp_r = fopen("ROBOT.INP", "r");
    fp_w = fopen("ROBOT.OUT", "w");
    long long x1, y1, x2, y2;
    fscanf(fp_r, "%lld %lld %lld %lld", &x1, &y1, &x2, &y2);
    fprintf(fp_w, "%lld", (abs(x1 - x2) > abs(y1 - y2) ? abs(x1 - x2) : abs(y1 - y2)));
}