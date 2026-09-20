#Difficulty 2 - Family issues

Operations now have families.

Members of the same family cannot be used to implement each other.

forbidden in add and sub:
+ += ++ - -= --
forbidden in mul, div and mod:
* *= / /= % %=

allowed:
-operators outside the forbidden family
-assignments
-comparisons
-logical operators
-control flow
-function calls
-constants
-your own functions provided they follow the rules of this difficulty

Restrictions apply to the implementation of an operation, not to its entire call tree.

However, every called function must itself be legal under the current difficuly.

Non-arithmetic uses of restricted symbols are exempt.
All previous applicable restrictions still apply.

Operators are no longer on speaking terms.