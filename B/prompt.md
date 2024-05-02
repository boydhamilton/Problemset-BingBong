
<h1>Bing Bong is tastymaxxing</h1>

Bing Bong the jaguar is very disheartened with how his crash-diet has been going. To cheer himself up, he resolves to eat only the tastiest selection of watermelons he can. There are `N` space-seperated integers, each one representing the tastiness score `t | -10 <= t <= 10` of the `ith` watermelon. Bing Bong's best friend Otto is strictly enforcing the diet, and forces Bing Bong to eat `A` watermelons. Bing Bong is barely holding onto this diet, and has resolved that if he gets an overall tasty score below 1 he will eat all the watermelons in sight out of rage and then never eat another one again. Help Bing Bong stay on his diet! (If possible).

First line of input has integer `N`, second line has integer `A`, while the third line has `N` space seperated tasty scores `ti`. 
Output the average tasty score of allowed watermelons as a float to 3 decimal places `w` he can eat. If Bing Bong can no longer bring himself to maintain his diet, output `:(`

**RESTRAINTS**<br>
`0 < N <= 10^3`<br>
`-10 <= t <= 10`<br>
`0 <= A <= N`

**CASES**

**Input:**
```
4
3
9 9 2 9
```

**Output:**
```
9.000
```
*Bing Bong must eat three watermelons, so he chooses the three tastiest. The three tastiest all have a tasty score of 9, leading to an average score of 9*

**Input:**
```
5
2
-1 5 4 0 6
```

**Output:**
```
5.500
```
*The tastiest two watermelons are 6 and 5, which average to 5 and a half*

**Input:**
```
1
0
10
```

**Output:**
```
:(
```
*Impossible for average to be above 1 if Bing Bong is not allowed to eat any watermelons.*