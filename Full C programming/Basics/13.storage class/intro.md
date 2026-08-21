What is storage class ?
-> Storage class is nothing but scope and lifetime for a variable

Scope:
-> It refers where in the program a variable can be acccessed or used.

Lifetime:
-> It is the duration for which a variable exist in memory during program execution.

Types:
-> auto
-> register
-> static
-> extern


Storage class | Storage class | default value | scope | lifetime 

auto -> ram(static) -> garbage -> within block -> till the block is active
register -> CPU register -> garbage -> within block -> till the block is active
static -> RAM (data segment) -> 0 -> block/file -> till the program termination
extern -> RAM (data segemnt) -> 0 -> anywhere -> till the program termination 
