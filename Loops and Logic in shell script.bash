#!/bin/sh
a=10
b=20
if [ $a -lt 100 -a $b -gt 11]
then
    echo "$a -lt 100 -a $b -gt 11: TRUE"
else
    echo "$a -lt 100 -a $b -gt 11: FALSE"
fi

if [ $a -lt 100 -a $b -lt 11 ]
then
    echo "$a -lt 100 -a $b -lt 11: FALSE"
else
    echo "$a -lt 100 -a $b -lt 11: TRUE"
fi

if [ $a -lt 100 -o $b -lt 11 ]
then
    echo "$a -lt 100 -o $b -lt 11: TRUE"
else
    echo "$a -lt 100 -o $b -lt 11: FALSE"
fi

if [ $a -lt 100 -o $b -gt 11 ]
then
    echo "$a -lt 100 -o $b -gt 11: FALSE"
else
    echo "$a -lt 100 -o $b -gt 11: TRUE"
fi



#loops
#!/bin/sh
for ((a = 1; a <= 99; a = a+2))
do 
    echo "$a"
done


# while loop
a=1
while [ $a -lt 6 ]
do 
    echo "$a"
    a=$(( $a + 1 ))
done
