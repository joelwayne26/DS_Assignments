# DS_Assignments

## 1) <br/>  <br/>

These are assignments of data structures and algotithms.

Assignment1:Write a C program that calculates the average of marks got by a student in three subjects ie Physics, Chemistry, Math...assume for each subject, four different tests were conducted; assignment, Course work, mid term and end of term exams
![image](https://github.com/user-attachments/assets/c5c6aa00-4e26-47e9-8473-7c7e19a156ca)


Assignment2:Write a C program that accepts a group of N domestic animals and a group of X wild animals. Your program should print N + X animals after entering each group
![image](https://github.com/user-attachments/assets/4af0147f-57e8-49c8-a99c-bf44b337af45)

### a) <br/>  <br/>
   i) <br/> **An algorithm that `swaps two numbers`.**  <br/>
   
   START
   step 1:Declare the variables a,b and c.<br/>
   step 2: Prompt the user for the first number and store it in a variable a. <br/>
   step 3: Prompt the user the second number and store it in a variable named b. <br/>
   step 4: Swap the values of a and b by assigning c to a , assign b to c and then assign a to b.<br/> 
   step 5: Print the values of a and b.<br/>
   STOP

  ii) <br/> **Pseudo code to swap two numbers.**  <br/> <br/>
   
   START <br/>
        // declare variables a,b and c. <br/>
       DECLARE a, d ,c  <br/>
       PRINT "Enter value for a:"  <br/>
       INPUT a <br/>
       PRINT "Enter value for b:" <br/>
       INPUT b <br/>
       PRINT "Before swapping: a= , b= "<br/>
         //swapiing the two numbers <br/>
       c=a <br/>
       a=b <br/>
       b=c <br/>
       //printing results <br/>
       PRINT "After swapping:a= ,b= "<br/>
       
   END <br/>  <br/>

   ### b) <br/> <br/>

   Algorithm to push an item into a stack <br/>
START
   step 1: Check if a stack is full: <br/>
            If stack is full <br/>
            PRINT "The stack is full" <br/>
            go to END
            else:
   step 2: Increment the top pointer: top ++ <br/>
   step 3: Add an new item at the top position of the stack: stack[top]=item <br/>
   step 4: Return Success: PRINT "ITEM PUSHED SUCCESSFULLY" <br/>   <br/>
END


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
 
 algotithm:
 <br/>
 
```
Alg Multi(a,b){
product=a*b <br/>
print (product) <br/>
```
}
<br/>
| Ops | Step | Frequency | Total Steps |
| ----------- | ----------- | ----------- | ----------- |
| product=a*b | 1 | 1 | 1 |
| print(product) | 1 | 1 | 1 |
|  |  |  | 2  |

### Analysis<br/>

The algorithm is used to multiply two variables a and b and then prints the product.<br/>
Frequency is the number of times a step runs.<br/>
The multiplication step has a frequency of 1 and the print step has a frequency of 1.<br/>
   
O(n)<br/>
<br>
```
 Algo sum(arr,size){
        sum = 0
        for (i=0; i<size; i++){
            if(arr[i] is even){
                sum += arr[i]
            }
        }
        print sum
    }
```
   | Ops | Step | Frequency | Total Steps |
| ----------- | ----------- | ----------- | ----------- |
| sum = 0 | 1 | 1 | 1 |
| i = 0 | 1 | 1 | 1 |
| i < size | 1 | n | n |
| i++ | 1 | n | n |
| arr[i] is even | 1 | n | n |
| sum += arr[i] | 1 | n | n |
| print sum | 1 | 1 | 1 |
|  |  |  | 4n + 3 |

### Analyis
The algorithm iterates an array and then adds up all even numbers in the array. This is a O(n) time complexity because we focus on the worst time complexity of the algorithm since here, even the odd numbers will be iterated so as to get the worst time complexity.<br/>

   <br/><br/>
   O(n^2)<br/>
   ```
 Algo sum(arr,size){ <br/>
        for (i=0; i<size; i++){<br/>
            for(j=0; j<size; j++){<br/>
                print arr[i] arr[j]<br/>
            }<br/>
        }<br/>
    }<br/>
```
| Ops | Step | Frequency | Total Steps |
| ----------- | ----------- | ----------- | ----------- |
| i = 0 | 1 | 1 | 1 |
| i < size | 1 | n*n | n*n |
| i++ | 1 | n*n | n*n |
| j = 0 | 1 | 1 | 1 |
| j < size | 1 | n*n | n*n |
| j++ | 1 | n*n | n*n |
| print arr[i] arr[j] | 1 | n*n | n*n |
|  |  |  | 5n^2 + 2  |

Analyis:<br/>
The outer loop runs size times.
For each iteration of the outer loop, the inner loop runs size times.
The print arr[i] arr[j] statement runs once per iteration of the inner loop.

#### Example Three (Performing Binary Search)
```
    Algo sum(arr,size, target){<br/>
        left = 0<br/>
        right = size - 1<br/>
        while(left <= right){<br/>
            mid = (left + right) / 2<br/>

            if (arr[mid] == target) {<br/>
                return mid<br/>
            }<br/>
            else if (arr[mid] < target) {<br/>
                left = mid + 1<br/>
            }<br/>
            else {<br/>
                right = mid - 1<br/>
            }<br/>
        }<br/>
        return -1<br/>
    }<br/>
```
| Ops | Step | Frequency | Total Steps |
| ----------- | ----------- | ----------- | ----------- |
| left = 0 | 1 | 1 | 1 |
| right = size - 1| 1 | 1 | 1 |
| while(left <= right) | 1 | log n | log n |
| mid = (left + right) / 2 | 1 | log n | log n |
| arr[mid] == target | 1 | log n | log n |
| return mid | 1 | 1 | 1 |
| arr[mid] < target | 1 | log n | log n |
| left = mid + 1 | 1 | log n | log n |
| right = mid - 1 | 1 | log n | log n |
| return -1 | 1 | 1 | 1 |
|  |  |  | 6log n + 4 |

### Analysis

The algorithm performs a Binary Searcg to efficiently find the target value in a sorted array `arr` <br/>
The mid value is gotten from ,mid=(left+right)/2<br/>
The algorithm runs until the left is greater than the right.<br/>
If arr[mid] == target, return mid (found).<br/>
If arr[mid] < target, search the right half (left = mid + 1).<br/>
If arr[mid] > target, search the left half (right = mid - 1).<br/>
If Not Found, Return -1.<br/>



       
       
       
   
   
   
    


For more information please do not hesitate to get in touch with the ripo owner at joelssengendo.1204@gmail.com 
