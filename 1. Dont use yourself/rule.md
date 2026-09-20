#Difficulty 1 - Don't use yourself

An operation cannot be used to implement itself

forbidden in add:
+ += ++
forbidden in sub:
- -= --
forbidden in mul:
* *=
forbidden in div:
/ /=
forbidden in mod:
% %=

allowed:
-all other operators
-assignments
-comparisons
-logical operators
-control flow
-function calls
-constants
-your own functions provided they follow the rules of this difficulty

Restrictions apply to each operator individually.

Using an operator outside the function implementing that operator is allowed, provided it does not violate another rule.

Non-arithmetic uses of restricted symbols are exempt.
All general rules still apply.

Don't cry yet. 
