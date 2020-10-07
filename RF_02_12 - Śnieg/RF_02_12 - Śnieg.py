import functools 
inp = input()
x = inp.split()

a = int(x[0])
b = int(x[1])
c = int(x[2])
s = int(x[3]) * 100

# Największy Wspólny Dzielnik przy użyciu Algorytmu Euklidesa
def NWD(a, b):
    while b:      
        a, b = b, a % b
    return a

# Najmniejsza Wspólna Wielokrotność
def NWW(a, b):
    return a * b // NWD(a, b)

# NWW dla kilku argumentów 
def NWW_multi(*args):  
    return functools.reduce(NWW, args)

print(s//NWW_multi(a,b,c))