a=input()
p=""
for i in a:
    if i not in p:
        p=p+i
k=len(p)
if k%2==0:
    print("CHAT WITH HER!")
else:
    print("IGNORE HIM!")
