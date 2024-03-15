# C-Lab-MST
Certainly! Below are some potential viva questions related to the programs provided:

**Program No. 1 (i) - Finding Average Marks:**
1. What is the purpose of this program?
2. Can you explain the significance of the variables `subjects`, `marks`, `total`, `averageMarks`, and `percentage`?
3. How does the program handle input validation?
4. Explain the process of calculating the average marks.
5. What modifications would you suggest to handle a larger number of subjects efficiently?

**Program No. 1 (ii) - Generating Fibonacci Series:**
1. Describe the aim of this program.
2. Explain the concept of the Fibonacci series.
3. How does the program generate the series?
4. What is the significance of the array `a` in this program?
5. How does the program identify and display the missing terms in the Fibonacci series?

**Program No. 2 (i) - Class for Room Calculation:**
1. What is the purpose of creating a class named `Room`?
2. Describe the data members and member functions of the `Room` class.
3. How does the `calculateArea` function work?
4. Explain how the `calculateVolume` function calculates the volume of the room.
5. How would you modify this program to handle rooms with non-uniform dimensions?

**Program No. 2 (ii) - Class for Employee Details:**
1. What is the objective of creating the `Employee` class?
2. Describe the variables declared within the `Employee` class.
3. Explain the purpose of the `GetData` and `PutData` member functions.
4. How does the program utilize arrays of `Employee` objects?
5. Suggest enhancements to this program to accommodate additional employee attributes or operations.

Feel free to ask for further clarification or additional questions!

Certainly! Here are the answers to the viva questions:

**Program No. 1 (i) - Finding Average Marks:**
1. The purpose of this program is to calculate the average marks of a student in a class based on the marks obtained in multiple subjects.
2. 
   - `subjects`: Stores the number of subjects for which marks are to be entered.
   - `marks`: Temporarily stores the marks entered for each subject.
   - `total`: Accumulates the total marks obtained across all subjects.
   - `averageMarks`: Stores the calculated average marks.
   - `percentage`: Could potentially be used to calculate the percentage of marks obtained by the student.
3. Input validation is not explicitly handled in this program. It assumes that the user will input valid integer values for the number of subjects and valid floating-point values for the marks.
4. The program calculates the average marks by dividing the total marks obtained by the number of subjects.
5. To handle a larger number of subjects efficiently, the program could be modified to dynamically allocate memory for storing marks, or it could implement a more robust input validation mechanism to handle unexpected user inputs.

**Program No. 1 (ii) - Generating Fibonacci Series:**
1. The aim of this program is to generate the Fibonacci series up to a user-specified limit and display all the missing terms in the series.
2. The Fibonacci series is a sequence of numbers where each number is the sum of the two preceding ones, usually starting with 0 and 1.
3. The program generates the Fibonacci series using a loop and calculates each term based on the preceding two terms.
4. The array `a` is used to store the missing terms in the Fibonacci series.
5. The program identifies and displays missing terms by comparing the difference between consecutive terms in the series and adding the missing terms to the array `a`.

**Program No. 2 (i) - Class for Room Calculation:**
1. The purpose of creating the `Room` class is to model a room with specific dimensions and provide functionality to calculate its area and volume.
2. 
   - Data members: `length`, `breadth`, and `height` represent the dimensions of the room.
   - Member functions: `calculateArea` computes and displays the area of the room, while `calculateVolume` calculates and displays its volume.
3. The `calculateArea` function multiplies the length and breadth of the room to obtain its area.
4. The `calculateVolume` function multiplies the length, breadth, and height of the room to determine its volume.
5. To handle rooms with non-uniform dimensions, the program could be extended to accept input for irregular shapes or additional parameters such as angles for calculating volume accurately.

**Program No. 2 (ii) - Class for Employee Details:**
1. The objective of creating the `Employee` class is to encapsulate information about an employee, including their name, age, designation, and salary.
2. 
   - Variables: `Name`, `Age`, `Desg`, and `Salary` represent the attributes of an employee.
   - Member functions: `GetData` is used to accept input for employee details, while `PutData` displays the information.
3. The `GetData` function prompts the user to input employee details and assigns them to the respective variables.
4. The program utilizes an array of `Employee` objects to store details for multiple employees.
5. Enhancements could include adding validation for input data, implementing methods for calculating bonuses or salary adjustments, or incorporating features for sorting or searching employee records.

**Program No. 5 (i) - Linear Search:**
1. The aim of this program is to demonstrate the use of linear search to find a given element in an array.
2. Linear search is a simple searching algorithm that sequentially checks each element of the array until the target element is found or the end of the array is reached.
3. The program prompts the user to input the size of the array and its elements. It then asks for the element to search.
4. The linear search algorithm iterates through the array elements one by one until it finds the target element.
5. If the element is found, its position is displayed; otherwise, a message indicating that the element is not in the list is shown.

**Program No. 5 (ii) - Binary Search:**
1. This program demonstrates the use of binary search to find a given element in a sorted array.
2. Binary search is a more efficient searching algorithm for sorted arrays, as it repeatedly divides the search interval in half until the target element is found.
3. The program prompts the user to input the size of the array and its elements, then sorts the array in ascending order.
4. It asks the user for the element to search and applies the binary search algorithm to locate it.
5. If the element is found, its position is displayed; otherwise, a message indicating search failure is shown.

**Program No. 6 (i) - Sorting Algorithms:**
1. This program demonstrates three sorting algorithms: bubble sort, selection sort, and insertion sort.
2. Bubble sort repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order until the entire list is sorted.
3. Selection sort divides the input list into two parts: a sorted sublist and an unsorted sublist. It repeatedly selects the minimum element from the unsorted sublist and moves it to the beginning of the sorted sublist.
4. Insertion sort builds the final sorted array one element at a time. It takes one element from the input data and places it in its correct position within the sorted array.
5. Each sorting algorithm sorts the array in ascending order, and the sorted array is displayed after sorting.

Feel free to ask if you have any further questions or need clarification on any point!
