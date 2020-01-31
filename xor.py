def AND(x1, x2):
    w1,w2,thata = 0.5,0.5,0.7
    temp = x1 * w1 + x2 * w2
    if temp <= thata:
        return 0
    elif temp > thata:
        return 1

def NAND(x1, x2):
    w1,w2,thata = -0.5,-0.5,-0.7
    temp = x1 * w1 + x2 * w2
    if temp <= thata:
        return 0
    elif temp > thata:
        return 1

def OR(x1, x2):
    w1,w2,thata = 0.5,0.5,0.3
    temp = x1 * w1 + x2 * w2
    if temp <= thata:
        return 0
    elif temp > thata:
        return 1

def XOR(x1, x2):
    nand_result = NAND(x1, x2)
    or_result = OR(x1, x2)
    and_result = AND(nand_result, or_result)
    return and_result

print(XOR(0, 0))
print(XOR(1, 0))
print(XOR(0, 1))
print(XOR(1, 1))
