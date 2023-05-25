* Sync time: 5/24/2023 by Zacky J.

# 1. Java program to perform basic Calculator operations ( group 1 ).
When you think about a calculator, operations like addition, subtraction, multiplication, and division comes into the mind. Let’s implement the basic calculator operations with the help of the below program.


```java
package Edureka;
import java.util.Scanner;
public class Calculator {
public static void main(String[] args) {
Scanner reader = new Scanner(System.in);
System.out.print("Enter two numbers: ");
// nextDouble() reads the next double from the keyboard
double first = reader.nextDouble();
double second = reader.nextDouble();
System.out.print("Enter an operator (+, -, *, /): ");
char operator = reader.next().charAt(0);
double result;
//switch case for each of the operations
switch(operator)
{
case '+':
result = first + second;
break;
case '-':
result = first - second;
break;
case '*':
result = first * second;
break;
case '/':
result = first / second;
break;
// operator doesn't match any case constant (+, -, *, /)
 
 
default:
System.out.printf("Error! operator is not correct");
return;
}
//printing the result of the operations
System.out.printf("%.1f %c %.1f = %.1f", first, operator, second, result);
}
}
```


# 2. Java program to calculate a Factorial of a number (group 2).

Factorial of a number is the product of all the positive numbers less than or equal to the number. The factorial of a number n is denoted by n!

Now, let’s write a program and find factorial of a number using recursion.

```java
package Edureka;
import java.util.Scanner;
public class Factorial {
public static void main(String args[]){
//Scanner object for capturing the user input
Scanner scanner = new Scanner(System.in);
System.out.println("Enter the number:");
//Stored the entered value in variable
int num = scanner.nextInt();
//Called the user defined function fact
int factorial = fact(num);
System.out.println("Factorial of entered number is: "+factorial);
}
static int fact(int n)
{
int output;
if(n==1){
return 1;
}
//Recursion: Function calling itself!!
output = fact(n-1)* n;
return output;
}
}
```


# 3. Java Program to calculate Fibonacci Series up to n numbers (group 3).

It is a series in which the next term is the sum of the preceding two terms. For Example: 0 1 1 2 3 5 8 13…….  Let’s write a Java program to calculate the Fibonacci series.


```java
package Edureka;
public class Fibonacci {
public static void main(String[] args) {
//initializing the constants
int n = 100, t1 = 0, t2 = 1;
System.out.print("Upto " + n + ": ");
//while loop to calculate fibonacci series upto n numbers
while (t1<= n)
{
System.out.print(t1 + " + ");
int sum = t1 + t2;
t1 = t2;
t2 = sum;
}
}
}
```

# 4. Java Program to find out whether the given String is Palindrome or not (group 4).

A palindrome is a number, string or a sequence which will be the same even after you reverse the order. For example, RACECAR, if spelled backward will be same as RACECAR.


```java

package Edureka;
import java.util.Scanner;
public class Palindrome {
static void checkPalindrome(String input) {
//Assuming result to be true
boolean res = true;
int length = input.length();
//dividing the length of the string by 2 and comparing it.
for(int i=0; i<= length/2; i++) {
if(input.charAt(i) != input.charAt(length-i-1)) {
res = false;
break;
}
}
System.out.println(input + " is palindrome = "+res);
}
public static void main(String[] args) {
Scanner sc = new Scanner(System.in);
System.out.print("Enter your Statement: ");
String str = sc.nextLine();
//function call
checkPalindrome(str);
}
}
```

# Java Program to calculate Permutation and Combination of 2 numbers (group 5).

It is the different arrangements of a given number of elements taken one by one, or some, or all at a time. Let’s have a look at its implementation.

```java
package Edureka;
import java.util.Scanner;
public class nprandncr {
//calculating a factorial of a number
public static int fact(int num)
{
int fact=1, i;
for(i=1; i<=num; i++)
{
fact = fact*i;
}
return fact;
}
public static void main(String args[])
{
int n, r;
Scanner scan = new Scanner(System.in);
System.out.print("Enter Value of n : ");
n = scan.nextInt();
System.out.print("Enter Value of r : ");
r = scan.nextInt();
// NCR and NPR of a number
System.out.print("NCR = " +(fact(n)/(fact(n-r)*fact(r))));
System.out.print("nNPR = " +(fact(n)/(fact(n-r))));
}
}
```



# Write a program in Java to find out Alphabet Pattern (group 6).

Here, you can use the for loop to print various patterns in Java. I will be implementing two different patterns in this article. First one will be Alphabet A pattern and the next one will be Diamond shaped pattern.  Let’s now see the implementation of the alphabet A pattern.

```java

package Edureka;
import java.util.Scanner;
public class PatternA {
// Java program to print alphabet A pattern
void display(int n)
{
// Outer for loop for number of lines
for (int i = 0; i<=n; i++) {
// Inner for loop for logic execution
for (int j = 0; j<= n / 2; j++) {
// prints two column lines
if ((j == 0 || j == n / 2) && i != 0 ||
// print first line of alphabet
i == 0  && j != n / 2 ||
// prints middle line
i == n / 2)
System.out.print("*");
else
System.out.print(" ");
}
System.out.println();
}
}
public static void main(String[] args)
{
Scanner sc = new Scanner(System.in);
PatternA a = new PatternA();
a.display(7);
}
}
```

# Java Program to reverse the letters present in the given String (group 7).

This Java program reverses letters present in the string entered by a user. For example, Hello People will be termed as olleH elpoeP. Let’s implement the same using Java.

```java
package Edureka;
public class stringreverse {
public static void main(String[] args) {
// TODO Auto-generated method stub
String str = "Welcome To Edureka";
String[] strArray = str.split(" ");
for (String temp: strArray){
System.out.println(temp);
}
for(int i=0; i<3; i++){ char[] s1 = strArray[i].toCharArray(); for (int j = s1.length-1; j>=0; j--)
{System.out.print(s1[j]);}
System.out.print(" ");
}
}
}
```

#  Java Program to check whether the given array is Mirror Inverse or not (group 8).

An array is called mirror–inverse if its inverse is equal to itself. Let’s now write a program and check whether the given array is mirror inverse or not.

```java
package Edureka;
//Java implementation of the approach
public class MirrorInverse {
// Function that returns true if
// the array is mirror-inverse
static boolean isMirrorInverse(int arr[])
{
for (int i = 0; i<arr.length; i++) {
// If condition fails for any element
if (arr[arr[i]] != i)
return false;
}
// Given array is mirror-inverse
return true;
}
 
public static void main(String[] args)
{
int arr[] = { 1, 2, 3, 0 };
if (isMirrorInverse(arr))
System.out.println("Yes");
else
System.out.println("No");
}
}
```
----------------------------------------------
# ADVANCED Projects

# Java program to implement a Binary Search Algorithm.

It is a search algorithm that finds the position of a target value within a sorted array. Binary search compares the target value to the middle element of the array. Let’s now see how to implement a binary search algorithm.

```java
package Edureka1;
public class BinarySearch {
// Java implementation of recursive Binary Search
// Returns index of x if it is present in arr[l..
// r], else return -1
int binarySearch(int arr[], int l, int r, int x)
{
if (r >= l) {
int mid = l + (r - l) / 2;
// If the element is present at the
// middle itself
if (arr[mid] == x)
return mid;
// If element is smaller than mid, then
// it can only be present in left subarray
if (arr[mid] >x)
return binarySearch(arr, l, mid - 1, x);
// Else the element can only be present
// in right subarray
return binarySearch(arr, mid + 1, r, x);
}
// We reach here when element is not present
// in array
return -1;
}
public static void main(String args[])
{
BinarySearch ob = new BinarySearch();
int arr[] = { 2, 3, 4, 10, 40 };
int n = arr.length;
int x = 40;
int result = ob.binarySearch(arr, 0, n - 1, x);
if (result == -1)
System.out.println("Element not present");
else
System.out.println("Element found at index " + result);
}
}
```

# Java Program to implement HeapSort Algorithm.
Heap sort is a comparison based sorting technique based on Binary Heap data structure. It is similar to selection sort where we first find the maximum element and place the maximum element at the end. Then repeat the same process for the remaining element. Let’s write the program and understand its working.

```java
package Edureka1;
public class HeapSort
{
public void sort(int arr[])
{
int n = arr.length;
// Build heap (rearrange array)
for (int i = n / 2 - 1; i >= 0; i--)
heapify(arr, n, i);
// One by one extract an element from heap
for (int i=n-1; i>=0; i--)
{
// Move current root to end
int temp = arr[0];
arr[0] = arr[i];
arr[i] = temp;
// call max heapify on the reduced heap
heapify(arr, i, 0);
}
}
void heapify(int arr[], int n, int i)
{
int largest = i; // Initialize largest as root
int l = 2*i + 1; // left = 2*i + 1
int r = 2*i + 2; // right = 2*i + 2
// If left child is larger than root
if (l< n && arr[l] >arr[largest])
largest = l;
// If right child is larger than largest so far
if (r < n && arr[r] > arr[largest])
largest = r;
 
// If largest is not root
if (largest != i)
{
int swap = arr[i];
arr[i] = arr[largest];
arr[largest] = swap;
// Recursively heapify the affected sub-tree
heapify(arr, n, largest);
}
}
/* A utility function to print array of size n */
static void printArray(int arr[])
{
int n = arr.length;
for (int i=0; i<n; ++i)
System.out.print(arr[i]+" ");
System.out.println();
}
// Driver program
public static void main(String args[])
{
int arr[] = {12, 11, 13, 5, 6, 7};
int n = arr.length;
HeapSort ob = new HeapSort();
ob.sort(arr);
System.out.println("Sorted array is");
printArray(arr);
}
}
```

#  Java Program to remove elements from an ArrayList

ArrayList is the implementation of List Interface where the elements can be dynamically added or removed from the list. Also, the size of the list is increased dynamically if the elements are added more than the initial size. In the below program, I am first inserting elements into the ArrayList and then deleting the elements from the list based on the specification. Let’s understand the code.

```java
package Edureka1;
 
import java.util.ArrayList;
import java.util.List;
import java.util.function.Predicate;
 
public class ArrayListExample {
public static void main(String[] args) {
List<String> programmingLanguages = new ArrayList<>();
programmingLanguages.add("C");
programmingLanguages.add("C++");
programmingLanguages.add("Java");
programmingLanguages.add("Kotlin");
programmingLanguages.add("Python");
programmingLanguages.add("Perl");
programmingLanguages.add("Ruby");
 
System.out.println("Initial List: " + programmingLanguages);
 
// Remove the element at index `5`
programmingLanguages.remove(5);
System.out.println("After remove(5): " + programmingLanguages);
 
// Remove the first occurrence of the given element from the ArrayList
// (The remove() method returns false if the element does not exist in the ArrayList)
boolean isRemoved = programmingLanguages.remove("Kotlin");
System.out.println("After remove(\"Kotlin\"): " + programmingLanguages);
 
// Remove all the elements that exist in a given collection
List<String> scriptingLanguages = new ArrayList<>();
scriptingLanguages.add("Python");
scriptingLanguages.add("Ruby");
scriptingLanguages.add("Perl");
 
programmingLanguages.removeAll(scriptingLanguages);
System.out.println("After removeAll(scriptingLanguages): " + programmingLanguages);
 
// Remove all the elements that satisfy the given predicate
programmingLanguages.removeIf(new Predicate<String>() {
@Override
public boolean test(String s) {
return s.startsWith("C");
}
});
 
System.out.println("After Removing all elements that start with \"C\": " + programmingLanguages);
 
// Remove all elements from the ArrayList
programmingLanguages.clear();
System.out.println("After clear(): " + programmingLanguages);
}
}
```

# Write a program in Java to implement HashMap.

HashMap is a Map based collection class that is used for storing Key & value pairs, it is denoted as HashMap<Key, Value> or HashMap<K, V>. This class makes no guarantees as to the order of the map. It is similar to the Hashtable class except that it is unsynchronized and permits nulls(null values and null key).  Let’s see how to implement HashMap logic in Java with the help of below program.

```java
package Edureka1;
 
import java.util.HashMap;
import java.util.Map;
 
public class Hashmap
{
public static void main(String[] args)
{
HashMap<String, Integer> map = new HashMap<>();
print(map);
map.put("abc", 10);
map.put("mno", 30);
map.put("xyz", 20);
 
System.out.println("Size of map is" + map.size());
 
print(map);
if (map.containsKey("abc"))
{
Integer a = map.get("abc");
System.out.println("value for key \"abc\" is:- " + a);
}
map.clear();
print(map);
}
public static void print(Map<String, Integer> map)
{
if (map.isEmpty())
{
System.out.println("map is empty");
}
else
{
System.out.println(map);
}
}
}
```

# Java Program to print the nodes present in the Circular LinkedList
It follows the first thing first approach. Here, the node is an element of the list, and it has two parts that are, data and next. Data represents the data stored in the node and next is the pointer that will point to the next node. let’s now understand its implementation.

```java
package Edureka1;
 
public class CircularlinkedList {
//Represents the node of list.
public class Node{
int data;
Node next;
public Node(int data) {
this.data = data;
}
}
//Declaring head and tail pointer as null.
public Node head = null;
public Node tail = null;
 
//This function will add the new node at the end of the list.
public void add(int data){
//Create new node
Node newNode = new Node(data);
//Checks if the list is empty.
if(head == null) {
//If list is empty, both head and tail would point to new node.
head = newNode;
tail = newNode;
newNode.next = head;
}
else {
//tail will point to new node.
tail.next = newNode;
//New node will become new tail.
tail = newNode;
//Since, it is circular linked list tail will point to head.
tail.next = head;
}
}
 
//Displays all the nodes in the list
public void display() {
Node current = head;
if(head == null) {
System.out.println("List is empty");
}
else {
System.out.println("Nodes of the circular linked list: ");
do{
//Prints each node by incrementing pointer.
System.out.print(" "+ current.data);
current = current.next;
}while(current != head);
System.out.println();
}
}
 
public static void main(String[] args) {
CircularlinkedList cl = new CircularlinkedList();
//Adds data to the list
cl.add(1);
cl.add(2);
cl.add(3);
cl.add(4);
//Displays all the nodes present in the list
cl.display();
}
}
```


# Java program to connect to a SQL DataBase.
JDBC is a standard Java API for database-independent connectivity between the Java programming language and a wide range of databases. This application program interface lets you encode the access request statements, in Structured Query Language (SQL). They are then passed to the program that manages the database. It mainly involves opening a connection, creating a SQL Database, executing SQL queries and then arriving at the output. Let’s see an example code to create a database and establish a connection and run the queries.

```java
package Edureka1;
import java.sql.*;
import java.sql.DriverManager;
public class Example {
// JDBC driver name and database URL
static final String JDBC_DRIVER = "com.mysql.jdbc.Driver";
static final String DB_URL = "jdbc:mysql://localhost/emp";
// Database credentials
static final String USER = "root";
static final String PASS = "edureka";
public static void main(String[] args) {
Connection conn = null;
Statement stmt = null;
try{
//STEP 2: Register JDBC driver
Class.forName("com.mysql.cj.jdbc.Driver");
//STEP 3: Open a connection
System.out.println("Connecting to database...");
conn = DriverManager.getConnection(DB_URL,"root","edureka");
//STEP 4: Execute a query
System.out.println("Creating statement...");
stmt = conn.createStatement();
String sql;
sql = "SELECT id, first, last, age FROM Employees";
ResultSet rs = stmt.executeQuery(sql);
//STEP 5: Extract data from result set
while(rs.next()){
//Retrieve by column name
int id = rs.getInt("id");
int age = rs.getInt("age");
String first = rs.getString("first");
String last = rs.getString("last");
//Display values
System.out.print("ID: " + id);
System.out.print(", Age: " + age);
System.out.print(", First: " + first);
System.out.println(", Last: " + last);
}
//STEP 6: Clean-up environment
rs.close();
stmt.close();
conn.close();
}catch(SQLException se){
//Handle errors for JDBC
se.printStackTrace();
}catch(Exception e){
//Handle errors for Class.forName
e.printStackTrace();
}finally{
//finally block used to close resources
try{
if(stmt!=null)
stmt.close();
}catch(SQLException se2){
}// nothing can be done
try{
if(conn!=null)
conn.close();
}catch(SQLException se){
se.printStackTrace();
}//end finally try
}//end try
System.out.println("Goodbye!");
}//end main
} // end Example
```

# Java Program to find the Transpose of a given Matrix.

Transpose of a matrix is obtained by changing rows to columns and columns to rows. In other words, transpose of A[][] is obtained by changing A[i][j] to A[j][i].

```java

package Edureka1;
 
public class Transpose
{
static final int N = 4;
 
// This function stores transpose
// of A[][] in B[][]
static void transpose(int A[][], int B[][])
{
int i, j;
for (i = 0; i< N; i++)
for (j = 0; j <N; j++)
B[i][j] = A[j][i];
}
 
public static void main (String[] args)
{
int A[][] = { {1, 1, 1, 1},
{2, 2, 2, 2},
{3, 3, 3, 3},
{4, 4, 4, 4}};
 
int B[][] = new int[N][N], i, j;
 
transpose(A, B);
 
System.out.print("Result matrix is n");
for (i = 0; i<N; i++)
{
for (j = 0; j<N; j++)
System.out.print(B[i][j] + " ");
System.out.print("n");
}
}
}
```
