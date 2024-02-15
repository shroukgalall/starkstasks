 #include <stdio.h>
 int main(){
 int arr [5][5]={{8,3,9,0,10},{3,5,17,1,1},{2,8,6,23,1},{15,7,3,2,9},{6,14,2,6,0}};
 int sum_rows=0;
  printf("sum rows =");
 for (int i=0 ; i<5;i++){

 for (int j=0 ; j<5;j++){
 sum_rows=sum_rows+arr[i][j];}
 printf("%d ",sum_rows);
 sum_rows=0;}
 
 int sum_column=0;
 printf("\n");
  printf("sum_columns = ");
 for (int j=0 ; j<5;j++){

 for (int i=0 ; i<5;i++){
 sum_column=sum_column+arr[i][j];}
 printf("%d ",sum_column);
 sum_column=0;}
 
 return 0;
 }