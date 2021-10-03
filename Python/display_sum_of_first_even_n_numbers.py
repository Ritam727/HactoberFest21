#pytho program to display sum of first 'n' even numbers
n=(int)(input("Enter an integer number"))
sum=0
num=2
for i in range(1,n+1):
    sum=sum+num
    num=num+2

print("The sum of first",n,"even number is",sum)
    
