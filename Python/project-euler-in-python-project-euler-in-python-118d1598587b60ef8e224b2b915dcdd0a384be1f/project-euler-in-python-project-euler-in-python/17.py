rakamlar={0:"",1:"one",2:"two",3:"three",4:"four",5:"five",6:"six",7:"seven",8:"eight",9:"nine"}
ozel={10:"ten",11:"eleven",12:"twelve",20:"twenty",30:"thirty",40:"forty",50:"fifty",60:"sixty",70:"seventy",80:"eighty",90:"ninety",13:"thirteen",15:"fifteen",18:"eighteen"}

def birbasamakli(n):
    return rakamlar[n]

def ikibasamakli(n):
    n=str(n)
    if n in ["10","11","12","13","15","18"]: return ozel[int(n)]
    elif 10<int(n)<20:
        return rakamlar[int(n[1])]+"teen"
    elif n[0]=="0":
        return rakamlar[int(n[1])]
    else:
        return ozel[int(n[0]+"0")]+rakamlar[int(n[1])]

def ucbasamakli(n):
    n=str(n)
    if n[1]=="0" and n[2]=="0":
        return rakamlar[int(n[0])]+"hundred"
    else:
        return rakamlar[int(n[0])]+"hundredand"+ikibasamakli(n[1]+n[2])
def yaz(n):
    if 1<=n<10:
        return birbasamakli(n)
    elif n<100:
        return ikibasamakli(n)
    elif n<1000:
        return ucbasamakli(n)
    elif n==1000:
        return "onethousand"

a=""

for i in range(1,1001):
    a+=yaz(i)

print(len(a))
