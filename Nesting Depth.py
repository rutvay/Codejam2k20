T=int(input())
s=[]
temp=[]
final=''
for t in range(T):
    temp=list(input())
    for i in range(len(temp)):
        for k in range(int(temp[i])):
            temp[i]='('+temp[i]+')'
    final=''.join(temp)  
    while final.find(')(')!=-1:
        final=final.replace(')(','')
    print("Case #{}: {}".format(t+1,final))