#Michael Vogt
#task: find the largest product of two three digit numbers
#that is a palidrome

#function used to reverse a num and determine if it is a palidrome
def is_palidrome(num):
    rev = str(num)
    return rev == rev[::-1]

#check all 3 digit numbers and find the largest possible prodcut that is a palidrome
def largest_palidrome():
    num1 = 999
    num2 = 999
    max = 0
    while(num2>=100):
        prod = num1*num2
        if(is_palidrome(prod) and prod > max):
            max = prod
        num1 = num1 -1 
        if num1 < 100:
            num1 = 999
            num2 = num2-1
    return max
        
#print result
print(largest_palidrome())
