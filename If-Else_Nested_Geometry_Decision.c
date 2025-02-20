#include <stdio.h>

int main() {

    int n,side1,side2,side3,side4,angle1,angle2,angle3,angle4;
    scanf("%d",&n);
    if(n==3){
        scanf("%d %d %d %d %d %d",&side1,&side2,&side3,&angle1,&angle2,&angle3);
        int all=angle1+angle2+angle3;
        if(side1+side2>side3 && side2+side3>side1 && side3+side1>side2 && angle1>0 && angle2>0 && angle3>0){
            if(side1==side2 && side2==side3 && angle1==60 && angle2==60 && angle3==60 && all==180){
                printf("Equilateral Triangle");
            }
            else if((((side1==side2 && side2!=side3) &&(angle1==angle2 && angle2!=angle3)) && all==180)  || (((side2==side3 && side3!=side1) && (angle2==angle3 && angle3!=angle1)) && all==180) || (((side3==side1 && side1!=side2) && (angle3==angle1 && angle1!=angle2)) && all==180) ){
                printf("Isosceles Triangle");
             }
            else if(side1!=side2 && side2!=side3 &&   side3!=side1 && angle1!=angle2 && angle2!=angle3 && angle3!=angle1 && all==180){
                printf("Scalene Triangle");
            }
            else{
                printf("Invalid Figure");
            }
        }
        else{
                printf("Invalid Figure");
            }
        }
    else if(n==4){
        scanf("%d %d %d %d %d %d %d %d",&side1,&side2,&side3,&side4,&angle1,&angle2,&angle3,&angle4);
        int all=angle1+angle2+angle3+angle4;
        if(angle1>0 && angle2>0 && angle3>0 && angle4>0 && side1+side2+side3>side4 && side2+side3+side4>side1 && side3+side4+side1>side2 && side1+side2+side4>side3){
            if(side1==side2 && side2==side3 && side3==side4 && angle1==90 && angle2==90 && angle3==90 && angle4==90 && all==360){
                printf("Square");
            }
            else if(side1!=side2 && side1==side3 && side3!=side4 && side2==side4 && angle1==90 && angle2==90 &&                           angle3==90 && angle4==90 )
            {
              printf("Rectangle");  
            }
            else if(side1==side2 && side2==side3 && side3==side4 && angle1!=90 && angle2!=90 && angle3!=90 && angle4!=90 && angle1==angle3 && angle2==angle4 && angle1!=angle2 && all==360) 
            {
                printf("Rhombus");
            }
            else if(side1==side3 && side2==side4 && side1!=side2  && angle1==angle3 && angle2==angle4 && angle2!=angle3 && all==360) 
            {
                printf("Parallelogram");
            }
            else{
                printf("Invalid Figure");
            }
        }
        else{
             printf("Invalid Figure");
        }
    }
    else if(n==0){
        printf("Circle");
    }
    else{
        printf("Invalid Figure");
    }
    return 0;
}
