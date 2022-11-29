#include<stdio.h>
#include<math.h>
#include <stdbool.h>

int main(){
 double a,b,c,x1,y1,x2,y2,x3,y3,xx,yy; // i defined x1,y1,x2,y2,x3,y3 for triangle1---a,b,c, for slope---xx,yy for last dot
 double a1,b1,c1,x11,y11,x22,y22,x33,y33;  // i defined x11,y11,x22,y22,x33,y33 for triangle2---a1,b1,c1, for slope
 double a11,c11,b11,x111,y111,x222,y222,x333,y333; // i defined x111,y111,x222,y222,x333,y333 for triangle3---a11,b11,c11, for slope
 int area1,area2,area3,area4; // i defined area1 for area of triangle1---i defined area2,area3,area4(i will explain this by drawing in new pdf)
 int area11,area22,area33,area44; // i defined area1 for area of triangle2
 int area111,area222,area333,area444; // i defined area1 for area of triangle3

printf("(for triangle1)\nEnter a point from the xy plane(for x1,y1): ");  // I collected the information of the dots
scanf("%lf%lf",&x1,&y1);

printf("(for triangle1)\nEnter a point from the xy plane(for x2,y2): ");  
scanf("%lf%lf",&x2,&y2);

printf("(for triangle1)\nEnter a point from the xy plane(for x3,y3): ");  
scanf("%lf%lf",&x3,&y3);

printf("(for triangle2)\nEnter a point from the xy plane(for x1,y1): ");  
scanf("%lf%lf",&x11,&y11);

printf("(for triangle2)\nEnter a point from the xy plane(for x2,y2): ");  
scanf("%lf%lf",&x22,&y22);

printf("(for triangle2)\nEnter a point from the xy plane(for x2,y2): ");  
scanf("%lf%lf",&x33,&y33);

printf("(for triangle3)\nEnter a point from the xy plane(for x1,y1): ");  
scanf("%lf%lf",&x111,&y111);

printf("(for triangle3)\nEnter a point from the xy plane(for x2,y2): ");  
scanf("%lf%lf",&x222,&y222);

printf("(for triangle3)\nEnter a point from the xy plane(for x3,y3): ");  
scanf("%lf%lf",&x333,&y333);

a = (y1-y2)/(x1-x2);        // i find slopes for triangle1
b = (y2-y3)/(x2-x3);
c = (y3-y1)/(x3-x1);
  
a1 = (y11-y22)/(x11-x22);       // i find slopes for triangle2
b1 = (y22-y33)/(x22-x33);
c1 = (y33-y11)/(x33-x11);

a11 = (y111-y222)/(x111-x222);        // i find slopes for triangle3
b11 = (y222-y333)/(x222-x333);
c11 = (y333-y111)/(x333-x111);


if((a==b && a!=c && b!=c)||(a==c && b!=c && b!=a)||(b==c && b!=a && a!=c)||(a!=b||a!=c||b!=c)){ //With this line of code, I eliminated the parallelism of all 3(x,y) points for triangle1.
  if(!(x1==x2 && y1==y2)&&!(x2==x3 && y2==y3)&&!(x3==x1 && y3==y1)){ //With this line of code, I eliminated state of overlap
printf("Triangle1 is created with (%.f,%.f),(%.f,%.f)and(%.f,%.f)points.\n",x1,y1,x2,y2,x3,y3);
}
}else{
  do{
    printf("(triangle1)Please enter new points(before x after y): ");
    scanf("%lf%lf%lf%lf%lf%lf",&x1,&y1,&x2,&y2,&x3,&y3);
       }while((!(x1==x2 && y1==y2)||!(x2==x3 && y2==y3)||!(x3==x1 && y3==y1)||(a==b && a!=c && b!=c)||(a==c && b!=c && b!=a)||(b==c && b!=a && a!=c)||(a!=b||a!=c||b!=c))!=true);
       printf("Triangle1 is created with (%.f,%.f),(%.f,%.f)and(%.f,%.f)points.\n",x11,y11,x22,y22,x33,y33);
  }  //if all conditions are true code gets new points


 if((a1==b1 && a1!=c1 && b1!=c1)||(a1==c1 && b1!=c1 && b1!=a1)||(b1==c1 && b1!=a1 && a1!=c1)||(a1!=b1||a1!=c1||b1!=c1)){ //With this line of code, I eliminated the parallelism of all 3(x,y) points for triangle2.
  if(!(x11==x22 && y11==y22)&&!(x22==x33 && y22==y33)&&!(x33==x11 && y33==y11)){ //With this line of code, I eliminated state of overlap
printf("Triangle2 is created with (%.f,%.f),(%.f,%.f)and(%.f,%.f)points.\n",x11,y11,x22,y22,x33,y33);
}
}else{
  do{
    printf("(triangle2)Please enter new points(before x after y): ");
    scanf("%lf%lf%lf%lf%lf%lf",&x1,&y1,&x2,&y2,&x3,&y3);
       }while((!(x11==x22 && y11==y22)||!(x22==x33 && y22==y33)||!(x33==x11 && y33==y11)||(a==b && a!=c && b!=c)||(a==c && b!=c && b!=a)||(b==c && b!=a && a!=c)||(a!=b||a!=c||b!=c))!=true);
       printf("Triangle2 is created with (%.f,%.f),(%.f,%.f)and(%.f,%.f)points.\n",x11,y11,x22,y22,x33,y33);
  }  //if all conditions are true code gets new points


if((a11==b11 && a11!=c11 && b11!=c11)||(a11==c11 && b11!=c11 && b11!=a11)||(b11==c11 && b11!=a11 && a11!=c11)||(a11!=b11||a11!=c11||b11!=c11)){ //With this line of code, I eliminated the parallelism of all 3(x,y) points for triangle3.
  if(!(x111==x222 && y111==y222)&&!(x222==x333 && y222==y333)&&!(x333==x111 && y333==y111)){ //With this line of code, I eliminated state of overlap
printf("Triangle3 is created with (%.f,%.f),(%.f,%.f)and(%.f,%.f)points.\n",x111,y111,x222,y222,x333,y333);
}
}else{
  do{
    printf("(triangle3)Please enter new points(before x after y): ");
    scanf("%lf%lf%lf%lf%lf%lf",&x1,&y1,&x2,&y2,&x3,&y3);
       }while((!(x1==x2 && y1==y2)||!(x2==x3 && y2==y3)||!(x3==x1 && y3==y1)||(a==b && a!=c && b!=c)||(a==c && b!=c && b!=a)||(b==c && b!=a && a!=c)||(a!=b||a!=c||b!=c))!=true);
       printf("Triangle3 is created with (%.f,%.f),(%.f,%.f)and(%.f,%.f)points.\n",x11,y11,x22,y22,x33,y33);
  } //if all conditions are true code gets new points

printf("Enter a point on the xy-plane: "); //gets last dot 
scanf("%lf%lf",&xx,&yy);

area1=abs((x1*(y2-y3) + x2*(y3-y1)+ x3*(y1-y2))/2.0); // area of all triangle1
area2=abs((xx*(y2-y3) + x2*(y3-yy)+ x3*(yy-y2))/2.0); //i will explain this by drawing 
area3=abs((x1*(yy-y3) + xx*(y3-y1)+ x3*(y1-yy))/2.0);
area4=abs((x1*(y2-yy) + x2*(yy-y1)+ xx*(y1-y2))/2.0);

area11=abs((x11*(y22-y33) + x22*(y33-y11)+ x33*(y11-y22))/2.0);  // area of all triangle1
area22=abs((xx*(y22-y33) + x22*(y33-yy)+ x33*(yy-y22))/2.0);
area33=abs((x11*(yy-y33) + xx*(y33-y11)+ x33*(y11-yy))/2.0);
area44=abs((x11*(y22-yy) + x22*(yy-y11)+ xx*(y11-y22))/2.0);

area111=abs((x111*(y222-y333) + x222*(y333-y111)+ x333*(y111-y222))/2.0);  // area of all triangle1
area222=abs((xx*(y222-y333) + x222*(y333-yy)+ x333*(yy-y222))/2.0);
area333=abs((x111*(yy-y333) + xx*(y333-y111)+ x333*(y111-yy))/2.0);
area444=abs((x111*(y222-yy) + x222*(yy-y111)+ xx*(y111-y222))/2.0);

if(area1==area2+area3+area4){  
  printf("The given point is inside the Triangle1");
}else if(area11==area22+area33+area44){
 printf("The given point is inside the Triangle2");
}else if(area111==area222+area333+area444){
  printf("The given point is inside the Triangle3");
}else{
  printf("The given point is not inside these triangles");
}
}














