def isp(n):
  for i in range(2,n):
    if n%i==0: return False
  return True
print()
bound=300000
ans=0
for i in range(2,bound):
  if isp(i):
    print(i, end=' ')
    ans+=1
print()
print('質數有:', ans, '個')