# DS_Assignments

## 1) <br/>  <br/>

These are assignments of data structures and algotithms.

Assignment1:Write a C program that calculates the average of marks got by a student in three subjects ie Physics, Chemistry, Math...assume for each subject, four different tests were conducted; assignment, Course work, mid term and end of term exams
![image](https://github.com/user-attachments/assets/c5c6aa00-4e26-47e9-8473-7c7e19a156ca)


Assignment2:Write a C program that accepts a group of N domestic animals and a group of X wild animals. Your program should print N + X animals after entering each group
![image](https://github.com/user-attachments/assets/4af0147f-57e8-49c8-a99c-bf44b337af45)

### a) <br/>  <br/>
   i) <br/> **An algorithm that `swaps two numbers`.**  <br/>
   step 1:Declare the variables a,b and c.<br/>
   step 2: Prompt the user for the first number and store it in a variable a. <br/>
   step 3: Prompt the user the second number and store it in a variable named b. <br/>
   step 4: Swap the values of a and b by assigning c to a , 
   step 5: Equate c to a ie c=a, then equate a to b ie a=b then equate d to c ie d = c. <br/>

  ii) <br/> **Pseudo code to swap two numbers.**  <br/> <br/>
   
   START <br/>
        // declare variables a,b and c. <br/>
       DECLARE a, d ,c  <br/>
       PRINT "Enter value for a:"  <br/>
       INPUT a <br/>
       PRINT "Enter value for b:" <br/>
       INPUT b <br/>
       PRINT "Before swapping: a= , b= ",a,b <br/>
         //swapiing the two numbers <br/>
       c=a <br/>
       a=b <br/>
       b=c <br/>
       //printing results <br/>
       PRINT "After swapping:a= ,b= ",a,b <br/>
       
   END <br/>  <br/>

   ### b) <br/> <br/>

   Algorithm to push an item into a stack <br/>

   step 1: Check if a stack is full: <br/>
            If stack is full <br/>
            PRINT "The stack is full" <br/>
            return <br/>
   step 2: Increment the top pointer: top ++ <br/>
   step 3: Add an new item at the top position of the stack: stack[top]=item <br/>
   step 4: Return Success: PRINT "ITEM PUSHED SUCCESSFULLY" <br/>   <br/>


<br>
<br>
Screen shot for traversing an array
<br>

![image](https://github.com/user-attachments/assets/978533f4-2731-42d3-a9b5-189da3ad24f9)

<br/>
<br/>
 3) Determining the time complexity of an algorithm.<br/>
 linear time complexity
<br/>
This is C code where i have created an array of 4 items and printed out the first item of index 0. This is a demonstarion of constant time complexity using Big Oh notation.<br/>
This is because the time required to extraxt any item located in an index n of the array is equal to the time reuired to extract the first item of the array<br/><br/>
 code:<br/>
#include <stdio.h>
#include <time.h>

 int main() {<br/>
    // Declare an array of names and aliases<br/>
    char *names[5] = {"Alice", "Bob", "Charlie", "David", "Eve"};<br/>
    char *aliases[5] = {"Al", "Bobby", "Chuck", "Dave", "Evie"};<br/><br/>
    
   clock_t start, end;<br/>
   double time_taken;<br/>

   // Measure O(1) - Accessing a specific element directly in an array<br/>
   start = clock();<br/>
   // Accessing an element at index 2 (constant time operation)<br/>
   printf("The name at index 2 is: %s\n", names[2]);<br/>
   end = clock();<br/>
   time_taken = ((double)(end - start)) / CLOCKS_PER_SEC;<br/>
   printf("Time taken for O(1) operation: %f seconds\n", time_taken);<br/><br/>
  
 algotithm:<br/>

1. Initialize an array of names.<br/>
2. Iterate over the array from index 0 to the last index.<br/>
3. Print each name.<br/>
4. Measure the time taken for the operation.<br/><br/>
   
O(n)<br/>
<br>
 code:<br/>
   start = clock();<br/>
    for (int i = 0; i < 5; i++) {<br/>
        printf("Name: %s\n", names[i]);<br/>
    }<br/>
    end = clock();<br/>
    time_taken = ((double)(end - start)) / CLOCKS_PER_SEC;<br/>
    printf("Time taken for O(n) operation: %f seconds\n", time_taken);<br/>
    <br/><br/>
    #### algotithm:<br/>

1. Initialize an array of names.<br/>
2. Iterate over the array from index 0 to the last index.<br/>
3. Print each name.<br/>
4. Measure the time taken for the operation.<br/>
   <br/><br/>
   O(n2)<br/>
   
 code:<br/>
start = clock();<br/>
    for (int i = 0; i < 5; i++) {<br/>
        for (int j = 0; j < 5; j++) {<br/>
            printf("Pair: %s, Alias: %s\n", names[i], aliases[j]);<br/>
        }<br/>
    }<br/>
    end = clock();<br/>
    time_taken = ((double)(end - start)) / CLOCKS_PER_SEC;<br/>
    printf("Time taken for O(n²) operation: %f seconds\n", time_taken);<br/>
<br/>
 algotithm:<br/>
1. Initialize two arrays: one for names and one for aliases.<br/>
2. Iterate over the names array (outer loop).<br/>
3. For each name, iterate over the aliases array (inner loop).<br/>
4. Print all possible pairs of names and aliases.<br/>
5. Measure the time taken for the operation.<br/>




       
       
       
   
   
   
    


For more information please do not hesitate to get in touch with the ripo owner at joelssengendo.1204@gmail.com 
