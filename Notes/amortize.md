# notes


## Rest in module
In problems the answer asks for a "module M".
The arithmetic "modulo M" consists of doing all the accounts taking the remainder of the division by M.
If M>0 the result is always between -M+1 and M-1 inclusive.
The final result of doing the accounts modulo M is correct, if and only if there are +,- and multiplications.
i.e: (a+b) % M instead of a+b
			(a*b) % M instead of a*b
			(a-b) % M instead of a-b
attention to subtraction that can generate negatives ((x%M)+M)%M, to make it look positive.

## formulas:
1+2+3+...+n= sumaty from i to n (i) = (n(n+1))/2
In general for arithmetic progressions: average x quantity, and the average is always (first+last)/2

Functions(c++)
	@sort(algorithm)[begin,end]
	lower_bound, upper_bound, equal_range)(algorithm) [begin,end,val]. !MAP.
	find(algorithm)[begin,end,val]
	max_element, min_element(algorithm)[begin, end]

## Testing 
Fragments:
	* When a program is going to have to "calculate fragments independently", it is also convenient to test independently.
	* ex: funtion f(i,j) this calculates the sum of the elements of an array between i and j.
	* testing f we find a case where it fails, we already know that there is a bug in f: with a case that fails for everything

TDD about the bugs
	@ When finding a bug, it is convenient to find and write a test case where the program fails, before fixing the bug.
	* Very useful rule: do not correct the code until you have a test case in which the program fails.
## Flags (c++)
* Use the flags indicated in http: wiki.oiaunsam.edu


## Macro DBG (C++)
	#define DBG(x) cerr<<#...

## Structs:
	* vector<int> en C++, with push_back and pop_back, as tail.
	* previous operations are O(1)(amortized)	

HashSet
	@unordered_set<int> in C++
		
HashMap
	@unordered_map<int,int> en C++

TreeSet
	@set<int> en c++
	@permiten insert, delete, query membership and do s.lower_bound o s.uppeer_bound with P(lg N)

TreeMap
	@map<int> en c++

### Deque
	@deque<int> en C++, with push_front, push_back, pop_front and pop_back
	@ArrayDeque<integer> en Java, con .addFirst, .addLast. 
