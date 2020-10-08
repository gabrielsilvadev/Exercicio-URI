def soma(pisca,soma):
    soma += pisca
    return soma
    
    
def value_int(pisca):
    pisca = int(pisca,2)
    return pisca
def piscada_value(pisca):
    pisca = pisca.replace('-','0')
    pisca = pisca.replace('*','1')
    return pisca
    
  
def main():
    for i in range(3):
        s = 0
        contro=True
        while contro:
            pisca = input()
            if pisca != 'caw caw':
                pisca = piscada_value(pisca)
                pisca = value_int(pisca)
                s=soma(pisca,s)
            else:
                print(s)
                contro=False
                
main()
