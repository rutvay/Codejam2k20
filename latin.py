t=int(input())
tn=t
def columcal(matrix,n,j):
        cols=[]
        for i in range(n):
            cols.append(matrix[i][j])
        return cols
def findTrace(mat, n):  
    sum = 0;  
    for i in range(n):  
        sum += mat[i][i];  
    return sum;
def matrixflip(m):
    tempm = m.copy()
    for i in range(0,len(tempm),1):
            tempm[i].reverse()
    return(tempm)  
while t>0:
    t-=1
    n,s=input().split()
    n=int(n)
    s=int(s)
    MAX = n; 
    mat = [[0 for x in range(MAX)] for y in range(MAX)]; 
    result = [[0 for x in range(MAX)] for y in range(MAX)];
    for i in range(n):
        for j in range(n):
            if i==j:
                mat[i][j]=int(s/n)
            else:
                for k in range(1,n+1):
                    otr=columcal(mat,n,j)
                    if k not in mat[i]:
                        if k not in otr:
                            mat[i][j]=k
                            break
                        
    for i in range(1,n):
        for j in range(0,n):
            if(i==j):
                continue
            else:
                mat[i][j]=mat[i-1][j-1]

    mainmat=[x[:] for x in mat]
    trace=findTrace(mat,n)
    invmat=matrixflip(mat)
    invtarce=findTrace(invmat,n)
    if 1:
        print("Case #{}:".format(tn-t),end=" ")
        print("POSSIBLE")
        for i in range(n): 
            for j in range(n): 
                print(mainmat[i][j],end=" "); 
            print("");
    elif invtarce==s:
        print("Case #{}:".format(tn-t),end=" ")
        print("POSSIBLE")
        for i in range(n): 
            for j in range(n): 
                print(invmat[i][j],end=" "); 
            print("");
    else:
        print("Case #{}:".format(tn-t),end=" ")
        print("IMPOSSIBLE") 