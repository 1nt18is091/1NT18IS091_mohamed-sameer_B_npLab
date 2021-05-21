#include<stdio.h>
#include<string.h>
void main(){
  int n;
  printf("Enter the number of frames\n");
  scanf("%d",&n);
  char str[n][30];
  printf("Enter the frames:\n");
  for(int i=0;i<n;i++){
      scanf("%s[^\n]",str[i]);
  }
  printf("Frame size:\n");
  for(int i=0;i<n;i++){
      printf("length of frame %d=%ld\n",i+1,strlen(str[i]));
  }
      printf("\nEntered frames are: \n");
      for(int i=0;i<n;i++){
          printf("%s",str[i]);
      }
      printf("\n");
  }
