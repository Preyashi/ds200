/*
Write a program to sort an array of 0's,1's and 2's in ascending order.

Input:
The first line contains an integer 'T' denoting the total number of test cases. In each test cases, First line is number of elements in array 'N' and second its values.

Output: 
Print the sorted array of 0's, 1's and 2's.

Constraints: 

1 <= T <= 100
1 <= N <= 100
0 <= arr[i] <= 2

Example:

Input :

2
5
0 2 1 2 0
3
0 1 0
 

Output:

0 0 1 2 2
0 0 1

*/

#include <stdio.h>

int main() {
	int tot,i=0,n,c0=0,c1=0,c2=0,k=0;
	scanf("%d",&tot);
	for(k=0;k<tot;k++){
		c0=0;
		c1=0;
		c2=0;
		scanf("%d",&n);
		int a[n];
		for(i=0;i<n;i++){
			scanf("%d",&a[i]);
			switch(a[i]){
				case 0:c0++;break;
				case 1:c1++;break;
				case 2: c2++;break;
			}
		}
		for(i=0;i<c0;i++)printf("0 ");
		for(i=0;i<c1;i++)printf("1 ");
		for(i=0;i<c2;i++)printf("2 ");
		printf("\n");
	
	}
	return 0;
}




