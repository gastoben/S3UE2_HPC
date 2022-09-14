# -*-coding:Utf-8 -*
"""
    facteurs : recherche des facteurs
"""

def factors_01(n):
    """
    on recherche naïvement tous les facteurs de n
    """
    return [i for i in range(1, n // 2 +1) if n % i == 0]

def main(a, b):
    """
    on réalise les décompositions des entiers compris entre a et b
    """
    l = [sum(factors_01(i)) for i in range(a, b + 1)]
    return l

if __name__ == "__main__":
    import sys
    import time
    try:
       a = int(sys.argv[1])
       b = int(sys.argv[2])
       assert b > a > 0
    except:
       print("Il faut absolument 2 arguments a, b de type int tels que b > a > 0")
    else:
        bgn = time.time()
        fact_sum = main(a, b)
        end = time.time()
        print(f'Pure python time for {len(fact_sum)} {end -bgn} seconds')
