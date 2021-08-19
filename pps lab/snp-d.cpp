CLS
INPUT "Enter a Number: ", n
print_table(n)
END

SUB print_table(n)
FOR i = 1 TO 10
  PRINT n;" * ";i;" = ";n*i
NEXT i
