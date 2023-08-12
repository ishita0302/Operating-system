#!/bin/sh       # shebang

echo "What is your name?"
read PERSON
echo "Hello, $PERSON"

# variables
VAR="Ishita"
VAR2=100
echo $VAR
echo $VAR2
readonly VAR        # do not change value if use
VAR="shikha"
echo $VAR

# array
NAME=(Ishita Kritika Gurpreet Palak)
echo ${NAME[*]}         # if * then arguments group into 1, but if @ then they are seperated.

# operations
a=20
b=10
A=$((a + b))
B=$((a - b))
C=$((a / b))
D=$((a * b))
E=$((a % b))
echo $A
echo $B
echo $C
echo $D
echo $E

# if else with equal operator
a=10
b=10
if [ $a == $b ]; then
    echo "a is equal to b"
fi
c=10
d=30
if [ $c != $d ]; then
    echo "c is not equal to d"
fi




#next set of codes
#!/bin/sh
a=10
b=20
if [ $a -eq $b ]
then
    echo "$a -eq $b: a is equal to b"
else
    echo "$a -eq $b: a is not equal to b"
fi

if [ $a -ne $b ]
then
    echo "$a -ne $b: a is not equal to b"
else
    echo "$a -ne $b: a is equal to b"
fi

if [ $a -gt $b ]
then
    echo "$a -gt $b: a is greater than b"
else
    echo "$a -gt $b: a is not greater than b"
fi

if [ $a -lt $b ]
then
    echo "$a -lt $b: a is less than b"
else
    echo "$a -lt $b: a is not less than b"
fi

if [ $a -ge $b ]
then
    echo "$a -ge $b: a is greater than & equal to b"
else
    echo "$a -ge $b: a is not greater than & not equal to b"
fi

if [ $a -le $b ]
then
    echo "$a -le $b: a is less than & equal to b"
else
    echo "$a -le $b: a is not less than & not equal to b"
fi




#next set of codes for strings
#!/bin/sh
a="abc"
b="xyz"
if [ $a = $b ]
then
    echo "$a = $b: a is equal to b"
else
    echo "$a = $b: a is not equal to b"
fi

if [ $a != $b ]
then
    echo "$a != $b: a is not equal to b"
else
    echo "$a != $b: a is equal to b"
fi

if [ -z $a ]
then
    echo "-z $a: string length is zero"
else
    echo "-z $a: string length is not zero"
fi

if [ -n $b ]
then
    echo "-n $b: string length is not zero"
else
    echo "-n $b: string length is zero"
fi