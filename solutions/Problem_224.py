Class Solution(object):
    def hammingWeight(self, n) - > int:
        soma = 0
        while n:
            soma += n & 1
            n >> 1
          
        return soma
