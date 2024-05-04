
<h1>Bing Bong is tastymaxxing II</h1>

Bing Bong wants to find the tastiest watermelon!
Otto (One of Bing Bong's close friends), organized Bing Bong's watermelons in a field made up of 1 meter by 1 meter boxes. Each watermelon is given a tastiness score `t`. Bing Bong is drunk on hard watermelon liqour to try and burn the pain away, and only remembers how to move down and to the right. Given the dimensions of the matrix in meters as `N` by `N`, find the path through the watermelons from point `A` to point `B` that gives Bing Bong the highest average tasty score. Return integer `d` that is the length of Bing Bong's path in meters.

Line one has `N`, side length of the `N x N` matrix
The next `M` lines have `N` space seperated integers where the `ith` integer is `ti` `t | -10 <= t <= 10`

Illustration of point A and B seperated by matrix. (point A and B are constant)
```
A
 4 5
 1 2
     B
```

**CASES**

**Input:**
```
2
1 2
3 9
```

**Output:**
```
13m
```
*1->3->9 = 13*

**Input:**
```
3
1 2 3
4 5 6
0 8 9
```

**Output:**
```
27m
```
*1->4->5->8->9 = 27*

**Input:**
```
4
3 1 0 10
3 3 3 0
-9 8 3 1
-2 -3 3 3
```

**Output:**
```
26m
```
*3->3->3->8->3->3->3 = 26*