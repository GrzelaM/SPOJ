import sys
def counting_of_cut(x):
    parts = 1
    cut = 1
    
    while parts < x:
        parts += cut
        cut += 1
    
    return cut-1 

for x in sys.stdin:
    print(counting_of_cut(int(x)))
