s=input()

count=0
j=0
for i in range(len(s)):
    count=0
    for j in range(len(s)):
        if s[:i+1] in s[j:]:
            count+=1
    
    print(i+1 ,count)