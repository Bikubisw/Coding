#include <iostream>
using namespace std;
void wavePrint(int input[][1000], int row, int col){
	int j=0;
 while(j<col)
 {
  /* Print odd columns */
  for(int i=0;i<row;i++)
  {
   printf("%d ",input[i][j]);
  }
  /* increment for even columns */
  j++;
  if(j<col)
     {
      /* print even columns */ 
      for(int i=row-1;i>=0;i--)
      {
       printf("%d ",input[i][j]);
   }
  }
  j++;
 }


}



int main() {
    int input[1500][1000];
    int row, col;
    cin >> row >> col;

    for(int i = 0; i < row; i++) {
	    for(int j = 0; j < col; j++) {
	        cin >> input[i][j];
	    }
    }
    wavePrint(input, row, col);
}
