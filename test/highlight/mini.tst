# An example test file
#
# To test functionality

# Local statement
#@local x, y, z
# <- keyword

# Exec statement
#@exec w :=10 ;
# <- keyword

#@local u;
# <- keyword
#@exec 10+10;
# <- keyword

gap> 1+1;
2

# <- markup.raw.block

# Another test case
gap> Concatenation(
> "a",
> "b",
> "Hello\n",
> "World"
> );
abHello
World

# <- markup.raw.block

#If statements
#@if 2+2=4
# <- keyword.conditional
gap> Print(10);
# <- keyword.debug
10

# <- markup.raw.block
# Else clause
#@else
# <- keyword.conditional
gap> Print(200);
# <- keyword.debug
200

# <- markup.raw.block
#@fi
# <- keyword.conditional

# Comment at end of file
#
