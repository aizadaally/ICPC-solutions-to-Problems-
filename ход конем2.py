# n, m = map(int, input().split())
# dp = list([0] * 20 for _ in range(20))
# dp[1][1] = 1
#s
# for d in range(3, (n + m) + 1):
#     for i in range(1, n + 1):
#         j = d - i
#         if j < 1 or j > m:
#             continue
#         else:
#             dp[i][j] = dp[i + 1][j - 2] + dp[i - 1][j - 2] + dp[i - 2][j - 1] + dp[i - 2][j + 1]
# print(dp[n][m])

# sides = []
# while len(sides) < 3:
#     side = int(input('Enter the side length: '))
#     if side > 0:
#         sides.append(side)
#     else:
#         print('Not a valid length')
# print('\n3 sides of triangle:', *sides)
# longest = max(sides)
# sides.remove(longest)
#
# if longest ** 2 == (sides[0] ** 2 + sides[1] ** 2):
#     print('\nR')
# else:
#     print('\nNo')


# Problem A
#Rectangular or not
# a, b, c = map(int,input().split())
# if a**2+b**2==c**2 or c**2+b**2 == a**2 or a**2 +c**2 == b**2:
#     print("YES")
# else:
#     print("NO")

# Problem B
# Bob the honor pupil
# num_five = input()
# print(num_five.count("5"))

#Problem C
# Armstrong number four digit
# num = map(int(input().split()))
# x, y , z, q = (num)
# if x**4 + y**4 + z**4 + q**4 == num:
#     print("Yes")

# # # D
# number= int(input())
# n = int(max([int(a) for a in str(number)]))
# print(str(number).count(str(n)))
##E
# n , k = map(int(input().split())
# sum1 = 0
# for i in range (n+1):
#     m = int(input())
#     sum1 = sum(n)
# d= n % 3 == 0
# print(d)

##F

# class Solution:
#     def VeryEasyTask(n, x, y):
#         if n == 1:
#             return min(x, y)
#         ans = 0
#         left = 0
#         right = max(x, y) * n
#
#         def isGood(mid, n, x, y):
#             # We need to check whether mid time is enough to make n - 1 copies( remember we have ORIG)
#             # C1 -> x seconds
#             # C2 -> y seconds
#
#             # no of copies C1 copier can make in mid seconds
#             # (mid / x)
#
#             # no of copies C2 copier can make in mid seconds
#             # (mid / y)
#
#             return (mid / x) + (mid / y) >= n - 1
#
#         # Now the main code to do BinarySearch
#         while left <= right:
#             mid = (left + right) // 2
#
#             if isGood(mid, n, x, y):
#                 # thats a possible answer,but we want a better answer, so LEFT
#                 ans = mid
#                 right = mid - 1
#             else:
#                 left = mid + 1
#         return ans + min(x, y)  # why min(x,y) to consider the original copy being used
#
#
# n = 4
# x = 1
# y = 1
# print(Solution.VeryEasyTask(n, x, y))



# Very easy task





# Bell problem

