#include <stdbool.h>
#include <stdio.h>

// function for addition
int add(float arr[], int size) {
  float result = 0;
  for (int i = 0; i < size; i++) {
    result = result + arr[i];
  }
  return result;
}

// function for subtraction
int subtract(float arr[], int size) {
  float result = 0;
  for (int i = 0; i < size; i++) {
    result = result - arr[i];
  }
  return result;
}

// function for multiplication
int multiply(float arr[], int size) {
  float result = 1;
  for (int i = 0; i < size; i++) {
    result = result * arr[i];
  }
  return result;
}

// function for division
int divison(float arr[], int size) {
  float result = 1;
  for (int i = 0; i < size; i++) {
    if (result == 1) {
      result = arr[i];
    } else {
      result = result / arr[i];
    }
    return result;
  }
}

int main() {
  // declaring all the variables
  int num = 0, size = 0;
  float result = 0.0;
  char choice;
  bool run = true;
  printf("Welcome to the Calculator!\n");
  while (run == true) {
    printf(
        "Choose the operation you want to perform:\n'+'\n'-'\n'*'\n'/'\n 'To "
        "exit enter 'e'\n");
    scanf(" %c", &choice);
    if (choice == 'e') {
      run = false;
    } else {
      printf("Enter the number of digits you want to %c: ", choice);
      scanf("%d", &size);
      // declaring the array
      float arr[size];
      printf("Enter the numbers to perform the operation: \n");
      for (int i = 0; i < size; i++) {
        scanf("%d", &num);
        arr[i] = num;
      }
      if (choice == '+') {
        result = add(arr, size);
      } else if (choice == '-') {
        result = subtract(arr, size);
      } else if (choice == '*') {
        result = multiply(arr, size);
      } else if (choice == '/') {
        result = divison(&arr, size);
      } else {
        printf("Invalid choice. Please try again.\n");
      }
      printf("The result is: %.2f\n", result);
    }
  }
  printf("Thank you for joining us today! Have a nice day!\n");
  return 0;
}
