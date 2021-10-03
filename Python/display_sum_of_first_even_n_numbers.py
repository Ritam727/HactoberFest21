sum = 0 # IInitializing the varraible sum
def sum_of_n_terms(n): # Initializing the function
    global sum
    if n == 0:
        return sum
    else:
        return n + sum_of_n_terms(n-1)

n = int(input("Enter the Number :- ")) # Taking the input or the number till which you have to find the sum
ans = sum_of_n_terms(n) # Called the function
print( "The sum of first " + str(n) + " terms is :- " + str(ans)) # Printing the result.
