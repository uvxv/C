// Precedence and order of evaluation

- Precedence tells you which operator gets applied first when multiple different operators appear in an expression
- Associativity tells you how operators of the same precedence group together — left-to-right or right-to-left

operator and associativity respectively

()[] -> .                                   left to right

! ~ ++ -- - (type) * & sizeof               right to left

* / %                                       left to right

+ -                                         left to right

<< >>                                       left to right

== !=                                       left to right

&                                           left to right

^                                           left to right

|                                           left to right

&&                                          left to right

||                                          left to right

? :                                         right to left

= += -= etc.                                right to left


C standard:
    "Between the previous and next sequence point, an object shall have its stored value modified at most once by the evaluation of an expression, and shall be accessed only to determine the value to be stored."
    — C11 §6.5