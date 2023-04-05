array = [0,0,0,1,0,1,0,0] # 20 decimal

def conversion(array):
    potencia = len(array)-1
    value = 0

    for i in array:
        if i == 1:
            value += (2 ** potencia) # 2^potencia
        potencia -= 1
    return print(value)

conversion(array)