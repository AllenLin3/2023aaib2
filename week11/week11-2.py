bound=20000
table=[True]*bound
ans=0
for i in range(2,bound):
  if table[i]==True:
    #print(i,end=' ')
    ans+=1
    for k in range(i*i,bound,i):
      table[k]=False
print('質數有:',ans,'個')