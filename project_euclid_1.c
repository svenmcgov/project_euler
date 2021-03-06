#include <stdio.h>
#define LIMIT 1000
void init_arr(int*, int);
void print_arr(int*, int);
int sum_arr(int*, int);
int div_by_n(int, int);

int main(void){
  int multiples[LIMIT/2];
  init_arr(multiples, LIMIT/2);
  int i = 0, j = 0;

  for(i=1;i<LIMIT;i++){
    if(div_by_n(i, 3) || div_by_n(i, 5)){
        multiples[j] = i;
        j++;
    }
  }

  printf("%d\n", sum_arr(multiples, LIMIT/2));
  // print_arr(multiples, SIZE);

  return 0;
}

void init_arr(int *arr, int size){
  int i = 0;
  for(i=0;i<size;i++)
    arr[i] = 0;
  // printf("%s\n", "Initialization complete.");
}

void print_arr(int *arr, int size){
  int i = 0;
  for(i=0;i<size;i++){
    if(arr[i]==0)
      break;
    printf("%d ", arr[i]);
  }
  puts(""); // newline
}

int sum_arr(int *arr, int size){
  int i = 0, sum = 0;
  for(i=0;i<size;i++){
    if(arr[i]==0)
      break;
    sum += arr[i];
  }
  return sum;
}

int div_by_n(int n, int d){
  if(n % d == 0){
      return 1;
  }
  return 0;
}
