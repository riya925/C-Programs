Q:2 There are N bottles. ith bottle has A[i] radius. Once a bottle is enclosed inside another bottle, it ceases to be visible. Minimize the number of visible bottles.

You can put ith bottle into jth bottle if following condition is fulfilled:

1) ith bottle itself is not enclosed in another bottle.

2) jth bottle does not enclose any other bottle.

3) Radius of bottle i is smaller than bottle j (i.e. A[i] < A[j]).

Constraints
1 <= N <= 100000.

1 <= A[i] <= 10^18.

Input Format
First line contains a single integer N denoting the number of bottles.

Second line contains N space separated integers, ith integer denoting the radius of Ith bottle.

(1 <= i <= N).

Output
Minimum number of visible bottles.

Test Case

Explanation
Example 1

Input

8

1 1 2 3 4 5 5 4

Output

2

Explanation

1st bottle can be kept in 3 rd one 1-->2 , which makes following bottles visible [1,2,3,4,5,5,4]

similarly after following operations, the following will be the corresponding visible bottles

Operation ? Visible Bottles

2 ? 3 [1,3,4,5,5,4]

3 ? 4 [1,4,5,5,4]

4 ? 5 [1,5,5,4]

1 ? 4 [5,5,4]

4 ? 5 [5,5]

finally there are 2 bottles which are visible. Hence, the answer is 2

Q:3 In the Indian Ocean, there are several small islands. A war ship is stationed in the ocean and wants to find how many of these islands are within its striking power. For simplicity, the islands are all assumed to have square shapes and again, the curvature of the earth can be ignored. The coordinates of two opposite corners of the islands are given and the position of the ship is also given. You need to find the islands in the increasing sequence of their distances from the ship. The distance is the shortest distance – the distance of the nearest point on the island boundary from the ship. Use Manhattan Distance, i.e. distance between 2 points (x1,y1) and (x2,y2) is |x1-x2| + |y1-y2|.

Constraints
1 <= N <= 100000.

-10^9 <= x1i, y1i, x2i,y2i <= 10^9.

Input Format
First line contains single integer N denoting the number of islands.

Next N lines contain 4 integers separated by space denoting the coordinates of the opposite corners of the islands (x1i, y1i) & (x2i,y2i). (1 <= i <= N)

Islands are numbered 1, 2, …, N.

The final line contains 2 integer separated by space denoting the coordinates of the warship.

Output
N integers separated by space each integer denoting the index of island sorted by distance from warship in non-decreasing order.

If 2 islands are at the same distance from warship, rank them according to their index.

Test Case

Explanation
Example 1

Input

2

0 0 1 1

0 3 1 4

0 0

Output

1 2

Explanation



Example 2

3

1 1 0 0

1 2 2 3

3 0 4 1

0 4

Output

2 1 3

Q:4 On a busy road, multiple cars are passing by. A simulation is run to see what happens if brakes fail for all cars on the road. The only way for them to be safe is if they don't collide and pass by each other. The goal is to identify whether any of the given cars would collide or pass by each other safely around a Roundabout. Think of this as a reference point O ( Origin with coordinates (0,0) ), but instead of going around it, cars pass through it.

Considering that each car is moving in a straight line towards the origin with individual uniform speed. Cars will continue to travel in that same straight line even after crossing origin. Calculate the number of collisions that will happen in such a scenario.

Note : - Calculate collisions only at origin. Ignore the other collisions. Assume that each car continues on its respective path even after the collision without change of direction or speed for an infinite distance.

Constraints
1<=C<=10^5

-10^9 <= x,y <= 10^9

0 < v < 10^9.

Input Format
The first line contains an integer C, denoting the number of cars being considered that are passing by around the origin.

Next C lines contain 3 space delimited values, first two of them being for position coordinates (x,y) in 2D space and the third one for speed (v).

Output
A single integer Q denoting the number of collisions at origin possible for given set of cars.

Test Case

Explanation
Example 1

Input

5

5 12 1

16 63 5

-10 24 2

7 24 2

-24 7 2

Output

4

Explanation

Let the 5 cars be A, B, C, D, and E respectively.

4 Collisions are as follows -

1) A & B.

2) A & C.

3) B & C.

4) D & E.

Q:5 You are a System Administrator and have access to unlimited number of servers with same amount of CPU (#of cores) and Memory (GB).

On these servers, you need pack number of applications K, deployed as VMs such that the total cost of ownership without affecting the application performance, is the least. Application resource requirements are provided in the following format

* CPU Utilization in percentage for a single core system

* Memory Allocated in MB

You need to pack the applications on the server in such a manner that its resource requirement is fully met on that server i.e. you cannot deploy the same application across different servers.

Each server that hosts the application has a constant initial cost in terms of

* Reserved CPU in percentage for a single core system

* Reserved Memory in MB

The cost of the server can be calculated from the following equation:

Cost per Hour = constant initial cost + ( 1.5/10000 )( cpu_utilization_os_server ^ 3) + 0.5(mem_utilization_of_server)

where 0 <= cpu_utilization_os_server, mem_utilization_of_server <= 100

and constant initial cost = 100

Your task is to find the minimum cost per hour for running the applications.

Constraints
1 <= number of cores <= 10

1 <= memory in GB <= 10

0 <= number of VMs <= 100

1 GB = 1024 MB

Input Format
First line provides the number of cores, C, in each server

Second line provides the amount of memory, M, in gigabytes in each server

Third line provides number of applications, K, to be packed on servers

Next, K * 2 lines consists of the following information, on one line each

CPU requirement in percentage of single core for current application

Memory requirement in megabytes for current application

Last 2 lines consists of the following information

Reserved CPU in percentage of a single core system

Reserved Memory in MB

Output
Least cost per hour for hosting all applications, rounded up to the next integer

Test Case

Explanation
Example 1

Input

2

1

4

29.72

366

25.53

163

28.98

206

26.64

506

11.21

176

Output

289

Example 2

Input

3

1

4

26.66

451

25.8

294

26.81

207

26.77

192

8.03

184

Output

277

Q:6 2N friends (A,B,C... , 2N) are standing in a circle. There is exactly one person standing opposite of one other person. Some of them are facing inwards and some of them are facing outwards. Here given some facts your task is to build the standing positions and answer a few Questions. If the arrangement is not possible or more than one arrangement is possible, then print "ARRANGEMENT NOT POSSIBLE".

The formats of Facts & Questions and its meanings are as follows.

Facts
"1AB" means : A and B are standing adjacent to each other
"2AB" means : A and B are standing opposite to each other
"3AB" means : A is standing to the immediate left of B
"4AB" means : A is standing to the immediate right of B
"5A" means : A is facing inwards
"6A" means : A is facing outwards
"7n" means : n people are facing inwards, where n is a number
"8n" means : n people are facing outwards, where n is a number

Questions
"?2A" means : who is standing opposite of A?
'?3A" means : who is standing to the immediate left of A?
"?4A" means : who is standing to the immediate right of A?
"?5A" means : is A facing inwards? Ans:Y/N
"?6A" means : is A facing outwards? Ans:Y/N

Constraints
1 < N < 10

1 < Total Facts < 30

1 < Total Questions < 20

Input Format
N Multiple facts, separated by semicolon multiple questions, separated by semicolon

Output
Answers, separated by semicolon corresponding to order of questions OR "ARRANGEMENT NOT POSSIBLE"

Test Case

Explanation
Example 1

Input

2
2AB;72;1AC;6D;4BD;6C
?2D;?3C;?4B;?5A;?6B

Output

C;B;D;Y;N

Explanation

4 people- A, B, C and D are standing in circle.
There are 6 facts separated in semicolons:
2AB ==> A and B are standing opposite
72 ==> 2 people are facing inwards
1AC ==> A and C are standing nearby
6D ==> D is facing outwards
4BD ==> B is standing immediate right of D
6C ==> C is facing outwards
From the above facts, we can build the standing positions as below image:

com.tcs.cv.automata.ei.middleware.DocxToHtmlConverter@682b3ce2:image1.png

There are 5 questions:
?2D ==> who is standing opposite of D? Ans:C
?3C ==> who is standing immediate left of C? Ans:B
?4B ==> who is standing immediate right of B? Ans:D
?5A ==> is A facing inwards? Ans:Y
?6B ==> is B facing outwards? Ans:N
Finally printing all answers in a single line separated by semicolon.

Example 2

Input

2
4BA;3CA;3CD;5C;5B
?5A;?3D;?4C;?6B

Output

ARRANGEMENT NOT POSSIBLE

Explanation

We can arrange 4 people in two different ways as the image below, from the facts provided. Directions of A and D can be set differently.

 com.tcs.cv.automata.ei.middleware.DocxToHtmlConverter@682b3ce2:image2.png
