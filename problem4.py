#!/usr/bin/python
# Katelynn Alexander
# for python practice fun

# Largest palindrome product
# Problem 4 
# A palindromic number reads the same both ways. 
# The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 x 99.
# Find the largest palindrome made from the product of two 3-digit numbers.

def isPal(num):
    r = True
    num = str(num)
    midpoint = len(num)/2
    arr = list(num)
    start = 0
    end = len(num) - 1
#    print "num =", num, "| midpoint =", midpoint, "| start =", start, "| end =", end, "| arr=", arr
    while (start <= midpoint and midpoint <= end):
#        print arr[start], "==", arr[end]
        if (arr[start] == arr[end]):
            start += 1
            end -= 1
        else:
            r = False
            break
    return r

def get_lpp(num_max, num_min):
    num_1 = 999
    max_pal = 0
    while num_1 > num_min:
        product = num_1 * num_max
        if (isPal(product) and max_pal < product):
            max_pal = product
            r_num_1 = num_1
            r_num_2 = num_max
#            print "one: r_num_1 =", r_num_1, "| num_max =", num_max
        else: 
            num_1 -= 1
            num_2 = 999
            while num_2 > num_min:
                product = num_1 * num_2
                if (isPal(product) and max_pal < product):
                    max_pal = product
                    r_num_1 = num_1
                    r_num_2 = num_2
#                    print "two: product =", product, "| num_1 =", num_1, "| num_2 =", num_2
                else: 
                    num_2 -= 1
    print "the largest palindrome of two three-digit numbers (", r_num_1, ",", r_num_2, ") is", max_pal 
    
get_lpp(999,100);

# test cases
#print 9999, isPal(9999)
#print 999, isPal(999)
#print 12345, isPal(12345)
#print 54345, isPal(54345)
#print 5445, isPal(5445)
#print 1, isPal(1)
#print 21, isPal(21)