
<h1> Bing Bong's Memory Conundrum </h1>

<h2>Pt. 1</h2>
Bing Bong the jaguar worked hard all day gathering new watermelons to snack on in his private pond.

Bing Bong needs some method to store his watermelons, as there are four different varieties but Bing Bong cannot remember the difference after he finds them! Bing Bong only wants certain ones at certain times (Bing Bong is a picky jaguar), and so must find a way to remember the type of each watermelon.

Bing Bong aspires to greatness, but frequently falls short due to the limitations of his jaguar brain. He cannot manage to remember `'A'`, `'B'`, `'C'`, or `'D'` types of watermelon, but he believes he may manage to remember the characters if they are compressed to binary codewords (assigning bitsets to each word, e.x. `A` -> `00`, `B` -> `11`). While Bing Bong's jaguar brain may be limited in memory, he is a very flexible jaguar, and understands if there is a different number of bits for each codeword in order to optimize for space. It is critical Bing Bong is able to communicate to his friend Ivnaas the types of watermelons, and so the binary must be decodeable. **ONE BITSET CANNOT BE THE PREFIX OF ANOTHER** (e.x. A -> 1 and B -> 101 are not valid as Ivnaas would get confused and think A is B). Bing Bong needs you create the smallest possible size binary string so he can remember which type of watermelon is which! Hurry! Summer is almost here!

First line of input contains integer `N` which is length of string on line two `"s"` that is comprised of only uppercase letters of set `{'A', 'B', 'C', 'D'}`. 
Output the length of the **smallest length** binary string `b` as an integer `i`.

**CASES**
*Remember: you do not ever have to output the binary string...*

**Input**
```
4
ABCD
```

**Output**
```
8
```
*Despite all characters having equal count, we cannot have each bitset be equal because there are not enough valid permutations*<br>/`
*A -> 0 leading bit, for this example it will be 0* <br>
*B -> 10 prefixed with the bit that is not the leading bit*<br>
*C -> 11 other permutation of two bits prefixed with nonleading bit*<br>
*D -> 110 cannot have any more valid two bit bitsets, we overflow to three*

**Input**
```
8
AABAACDB
```

**Output**
```
13
```
*A will be smallest bitsize, B second smallest*

**Input**
```
20
AAAAAABBAACCCCCCCCCD
```

**Output**
```
32
```
*C is most common character, A is second B is third D is last*

<h2>Pt. 2</h2>

Bing Bong's brain is split into regions of memory called `chomps`, each of which store three bits because three is Bing Bong's favourite number. Bing Bong wants to know how many `chomps` will be used while remembering the watermelons so he can measure how many dreams of chasing flying bananas through the sky he can have. Each dream takes nine `chomps` of memory. Given Bing Bong's available memory as integer `M` on the line following the above input schema, return how many dreams he can have! Bing Bong is a king of mental gymnastics, and so is able to store watermelon information accross chomps. However, he needs only whole chomps for dreaming, or else his dreams would be disjointed and confusing. Output ONLY the integer `d` that represents how many dreams Bing Bong can have.

First line of input contains integer `N` and `M`, seperated by a space. `N` is length of string on line two `"s"` that is comprised of only uppercase letters of set `{'A', 'B', 'C', 'D'}`.
Output the amount of dreams as integer `d` that Bing Bong can have.

**CASES**

**Input**
```
4 32
ABCD
```

**Output**
```
4
```