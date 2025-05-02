#include <stdio.h>

struct student{
    int roll;
    char div;
    float marks[3];
};

int main(){
    struct student s[2];
    float avg;

    for(int i = 0; i < 2; i++){
        printf("Add roll and div : ");
        scanf("%d %c", &s[i].roll,&s[i].div);
        printf("Give marks : ");
        for(int j = 0; j < 3; j++){
            scanf("%f",&s[i].marks[j]);
        }
    }

    for(int i = 0; i < 2; i++){
        avg = ( s[i].marks[0] +s[i].marks[1] + s[i].marks[2]) / 3;
        printf("roll no : %d , Div : %c, Avg Marks : %f",s[i].roll,s[i].div, avg);
    }
    return 0;
}