#Michael Vogt
#Taken from problem 2
#find the sum of all even fibonacci numbers
#less than 4 million
def even_fibonacci():
    #set up array for dynamic fibonacci
    fib = []
    fib.append(0)
    fib.append(1)
    #used to determine location in fib array
    counter = 2
    sum = 0
    flag = True
    #countinue looping untill the last value in fibonacci is greater than 4 million
    while(flag):
        #add the previous two values together
        fib.append(fib[counter-1]+fib[counter-2])
        if fib[counter] > 4000000:
            flag = False
        #determine if it is even and add it to the sum if it is
        elif fib[counter]%2 == 0:
            sum = sum+fib[counter]
        counter = counter+1
    return sum
print("The sum of all even fibonacci numbers is",end=' ')
print(even_fibonacci())