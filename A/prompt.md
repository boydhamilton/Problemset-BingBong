
<h1> Bing Bong's Watermelon Selection </h1>

Bing Bong the jaguar is collecting watermelons to get summer ready! In order to slim down and sit by the pool, he is going on a watermelon-only crash diet. Bing Bong's found watermelons are given as array `a`, where the `ith` watermelon has radius `a[i]`. Bing Bong likes to maintain a strict aesthetic, and so only wants a collection of watermelons strictly increasing in size. However, Bing Bong is worried he may crush the watermelons with his paws if he moves them, and so will simply take the longest pre-existing sequence of watermelons of increasing size.

Given `N` space seperated integers, return the amount of watermelons Bing Bong will collect as integer `w` in form "`Bing Bong collects w watermelons`".

**RESTRAINTS**<br>
`0 < N <= 10^3`<br>
`0 < a[i] < 10^2`

**CASES**

**Input:**
```
5
1 2 3 1 5
```

**Output:**
```
Bing Bong collects 3 watermelons.
```
*1 2 3 are all increasing, while 1 is smaller than three and so is not included. The second subarray is 1 5 of length 2, smaller than previous length 3, and so the greater is taken*

**Input:**
```
3
9 9 9
```

**Output:**
```
Bing Bong collects 1 watermelon.
```
*Because there is no sequence of increasingly larger watermelons, Bing Bong will only take one. Because there is only one watermelon taken, output will be in the singular.*
