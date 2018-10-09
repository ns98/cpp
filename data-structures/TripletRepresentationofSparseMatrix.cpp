#include<bits/stdc++.h>
using namespace std;
int main()
{int row,column,i,j;
printf("enter no. of rows and columns:");
scanf("%d %d",&row,&column);
int a[row][column];
for(i=0;i<row;i++)
{for(j=0;j<column;j++)
{printf("enter the element at %d , %d\n",i,j);
scanf("%d",&a[i][j]);
}
}
int count1=0;
for(i=0;i<row;i++)
{for(j=0;j<column;j++)
{if(a[i][j]!=0)
count1++;
}
}
int b[count1][3];
count1=0;
for(i=0;i<row;i++)
{for(j=0;j<column;j++)
{if(a[i][j]!=0)
{b[count1][0]=i;
b[count1][1]=j;
b[count1][2]=a[i][j];
count1++;
}
}
}
printf("sparse matrix is:\n");
for(i=0;i<count1;i++)
{for(j=0;j<3;j++)
{printf("%d ",b[i][j]);
}
printf("\n");
}
return 0;
}
