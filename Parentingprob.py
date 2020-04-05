#Question 3
T=int(input())
for i in range(0,T):
    N=int(input())
    act=[]
    start=[]
    end=[0,0]
    actp=[]
    imp=False
    for j in range(0,N):
        actp.append('C')
    for j in range(0,N):
        t=input().split()
        t[0]=int(t[0])
        t[1]=int(t[1])
        t.append(j)
        start.append(int(t[0]))
        act.append(t)
    act.sort()
    for j in range(0,len(act)):
        if(end[0]<=act[j][0]):
            actp[act[j][2]]='C'
            end[0]=act[j][1]
        else:
            if(end[1]<=act[j][0]):
                actp[act[j][2]]='J'
                end[1]=act[j][1]
            else:
                imp=True
    if(imp):
        print('Case #%d:'%(i+1),"IMPOSSIBLE")
    else:
        ast=""
        for j in actp:
            ast+=str(j)
        print('Case #%d:'%(i+1),ast)